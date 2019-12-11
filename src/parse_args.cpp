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
