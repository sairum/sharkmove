/***************************************************************************
 *   Copyright (C) 2007 by António Múrias dos Santos                       *
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

#include <cstring>
#include "model.h"



using namespace std;


Model::Model(){
 rows=ROWS;
 cols=COLS;

 xllcorner=XLLCORNER;
 yllcorner=YLLCORNER;
 cellsize=CELLSIZE;
 
 mean=MEAN;
 sd=SD;
 smin=SMIN;
 smax=SMAX;
  
 startpoints=0;
 replicates=REPLICATES;
 verbose = false;
 
 memset(nsteps,0,sizeof(nsteps));
 memset(startlat,0,sizeof(startlat));
 memset(startlon,0,sizeof(startlon));
 
 
 filename[0]=0; 
}

Model::~Model(){

}




