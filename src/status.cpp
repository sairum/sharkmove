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
