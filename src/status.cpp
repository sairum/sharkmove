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
 
#include "model.h"

using namespace std;

void Model::DisplayStatus(){
 cerr << "ROWS       : " << rows << endl;
 cerr << "COLUMNS    : " << cols << endl;
 cerr << "XLLCORNER  : " << xllcorner << endl;
 cerr << "YLLCORNER  : " << yllcorner << endl;
 cerr << "CELLSIZE   : " << cellsize << endl;
 cerr << "REPLICATES : " << replicates << endl;
// cerr << "STEPS     : " << steps << endl;
 cerr << "MEAN       : " << mean << endl;
 cerr << "SD         : " << sd << endl;
 cerr << "SMIN       : " << smin << endl;
 cerr << "SMAX       : " << smax << endl;

 cerr << "STARTPOINTS (lat/long)"<< endl;
 
 for(int i=0;i<startpoints;i++){
  cerr << i+1 << "\t: " << startlat[i] << "/" << startlon[i] << "\t" << nsteps[i] << endl;
 }
}
