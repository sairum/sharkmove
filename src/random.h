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
 *                                                                                *
 *   IMPORTANT NOTICE!                                                            *
 *   The code here presented was derived from Richard Saucier's Random.h          *
 *   The original file can be found in http://ftp.arl.mil/random/Random.h         *
 *                                                                                *
 *   Here is its copyright notice                                                 *
 *   Random.h: Definition and Implementation of Random Number Distribution        *
 *   Class. Ref: Richard Saucier, "Computer Generation of Statistical             *
 *   Distributions," ARL-TR-2168, US Army Research Laboratory,                    *
 *   Aberdeen Proving Ground, MD, 21005-5068, March 2000.                         * 
 *                                                                                *
 **********************************************************************************/

#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cmath>
#include <cassert>

#define THRESHOLD  0.0000000001
/**
	@author António Múrias dos Santos <amsantos@fc.up.pt>
*/



void   _seedTable();
double _u();
bool   bernoulli(double);
double uniform( double , double );
void   randreset();
void   randreset(long);
int    binomial( int , double );
double normal(double, double );
unsigned long multinomial(unsigned long, double *, unsigned long *, unsigned long  );
unsigned long multinomial_one(double *, unsigned long);
double erlang( double , int );

#endif
