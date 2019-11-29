# sharkmove
Simulate shark movements in NE Atlantic by generating random walks

*sharkmove* is a small piece of software used to simulate random shark movements in NE Atlantic waters. It was used by Queiroz *et al* (2012) to build a null model -- random walk -- against which to compare real movement patterns of sharks derived from satellite relayed data gathered from individuals carrying PSAT tags (PAT4 and Mk10 tags, Wildlife Computers, WA, USA).

## Compiling and running 

*sharkmove* is written in C++ and is provided with a simple *makefile*. To build it just change to the *src/* directory and type: 

```bash
$ make depend
$ make
```

Running the program without any parameters displays the following help

```bash
$ ./sharkmove

Program usage:
  sharkmove [options]

OPTIONS:
  -v                 be verbose [no]
  -m num             minimum step size [0] (lower limit for a uniform distribution)
  -n num             maximum step size [100] (upper limit for a uniform distribution)
  -r num             number of replicates [1]
  -l num             average size of each step [0] (if 0, uniform(smin,smax) will be used)
  -d num             standard deviation of step size distribution [1] (to use with -m)
  -p lat long steps  starting point (lat/long in decimal degrees) and number of steps
                     Several starting points may be provided [max 50] repeating -p switch
```
Below is an example of a simple simulation with two different starting points passed through the switch `-p`. Note that a series of 480 and 1008 steps will be created for each starting point. Step angles will be selected randomly, and step lengths will be drawn from a uniform distribution between 55.86 and 20495.95 km. Two independent replicas will be created for each starting point (`-r 2`). Results are redirected to a file called *results.txt* which is an ArcGis ASCII Grid formatted file, suitable to be read by any GIS software.

```bash
./sharkmove -m 55.86 -n 20495.95 -p 36.981 -8.613 480 -p 36.962 -8.676 1008 -r 2 > results.txt
```

## Tweaking *sharkmove* 

The simulation is done on a two dimensional grid defined in *config.h*. The X and Y dimensions are defined by the constants `COLS`and `ROWS`. 

```c++
#define ROWS	256
#define COLS	176

...

#define XLLCORNER -22.0
#define YLLCORNER 20.0
#define CELLSIZE 0.125	
```

Other important constants that can be changed are `XLLCORNER`, `YLLCORNER` and `CELLSIZE`, which are not used in the simulator itself, but are used to export resulting data into ArcGIS ASCII Grid format. The former two are longitude and latitude values of the lower left corner of the grid (in lat/lon decimal notation) and the latter is the cell size in fractions of one degree. 

If you define a new grid by providing different values of `ROWS` and `COLS` (independently of `XLLCORNER`, `YLLCORNER` and `CELLSIZE`) you should provide a new `mask` defined in *run.cpp*.

```c++
static int mask[ROWS][COLS]={
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, ... ,1,1,1},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1, ... ,1,1,1},
   {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1, ... ,1,1,1},
   ...
}
```
The `mask` is a grid of `0s` and `1s`, with `1s`denoting land. During the simulation, if a proposed new position (angle + step) falls inland, it is discarded and a new position computed until it does not fall inland.


## References
Queiroz N, Humphries NE, Noble LR, Santos AM, Sims DW (2012) Spatial dynamics and expanded vertical niche of blue sharks in oceanographic fronts reveal habitat targets for conservation. *PLoS ONE* 7(2): e32374. [doi:10.1371/journal.pone.0032374](https://doi.org/10.1371/journal.pone.0032374)

