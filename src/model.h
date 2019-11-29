/***************************************************************************
 *   Copyright (C) 2009 by António Múrias dos Santos                       *
 *   amsantos@fc.up.pt                                                     *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
 
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
