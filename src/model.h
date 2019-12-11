/**********************************************************************************
 * MIT License                                                                    *
 *                                                                                *
 * Copyright (C) 2009 by António Múrias dos Santos                                *
 * amsantos@fc.up.pt                                                              *
 *                                                                                *
 * Permission is hereby granted, free of charge, to any person obtaining a copy   *
 * of this software and associated documentation files (the "Software"), to deal  * 
 * in the Software without restriction, including without limitation the rights   *   
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell      *      
 * copies of the Software, and to permit persons to whom the Software is          *
 * furnished to do so, subject to the following conditions:                       *
 *                                                                                *
 * The above copyright notice and this permission notice shall be included in all *
 * copies or substantial portions of the Software.                                *
 *                                                                                *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR     * 
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,       *
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE    *
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER         *
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,  *
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE  *
 * SOFTWARE.                                                                      *
 **********************************************************************************/
 
#ifndef MODEL_H
#define MODEL_H

#include "config.h"
#include "random.h"


class Model{
 int rows;
 int cols;
 
 double xllcorner;
 double yllcorner;
 double cellsize;
 
 char filename[1000];

 int map[ROWS/4][COLS/4];
 
 int steps;
 double pathx[MAXSTEPS];
 double pathy[MAXSTEPS];

 int    nsteps[MAXSTARTS]; 
 double startlat[MAXSTARTS];
 double startlon[MAXSTARTS];
 
 double mean;
 double sd;
 
 double smin;
 double smax;
 
 int startpoints;
 int replicates;
 bool verbose;

 void DisplayStatus();
 bool Setup();
    
public:
  Model(); 
  ~Model();
  void ParseArguments(int , char *[]);
  void Help();
  void Run();
};

#endif
