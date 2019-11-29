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

void Model::ParseArguments(int argc, char *argv[]){
 int 	i=1,stps;
 double slat,slon;
 do{
  if(argv[i][0]=='-'){
   switch(argv[i][1]){
    case 'r': i++;				// number of replicates                    
          if((i<argc)&&(argv[i][0]!='-')){
            replicates=atoi(argv[i]);
            if(replicates<1) replicates=REPLICATES;
	        i++;
	      } else replicates = REPLICATES;
	      break; 
    case 'm': i++;				// minimum step size                      
          if((i<argc)&&(argv[i][0]!='-')){
            smin=(double)atof(argv[i]);
            if(smin<0) smin=SMIN;
	        i++;
	      } else smin = SMIN;
	      break;	     
    case 'n': i++;				// maximum step size                      
          if((i<argc)&&(argv[i][0]!='-')){
            smax=(double)atof(argv[i]);
            if(smax<0) smax=SMAX;
	        i++;
	      } else smax = SMAX;
	      break;
    case 'l': i++;                             // mean step lenght
          if((i<argc)&&(argv[i][0]!='-')){
            mean=(double)atof(argv[i]);
            if(mean<0) mean=MEAN;
            i++;
	      } else mean = MEAN;
	      break;      
    case 'd': i++;                             // standard deviation of step lenghts
          if((i<argc)&&(argv[i][0]!='-')){
            sd=(double)atof(argv[i]);
            if(sd<0) sd=SD;
	        i++;
	      } else sd = SD;
	      break;
    case 'p': i++;                             // starting point in lat long degrees
          slat=(double)atof(argv[i]);
	      i++;
          slon=(double)atof(argv[i]);
	      i++;
	      stps=atoi(argv[i]);
	      i++;
	      startlat[startpoints]=slat;
	      startlon[startpoints]=slon;
	      nsteps[startpoints]=stps;
	      startpoints++; 
	      break;	      
    case 'v': verbose=true; i++; break;        // be verbose
    default: i++; break;	      
   } 
  }
  else i++;
 }while(i<argc); 
}
