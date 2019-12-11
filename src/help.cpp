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
 
#include <iostream>
#include "model.h"

using namespace std;

void Model::Help()
{
 cout << "sharkmove - Prionace glauca movement simulator v. 0.7" << endl;
 cout << "Copyright (C)  2009 Antonio Santos (amsantos @ fc up pt)" << endl << endl;
 cout << "Program usage:" << endl;
 cout << "  sharkmove [options]" << endl << endl;
 cout << "OPTIONS:" << endl;
 cout << "  -v                 be verbose [no]" << endl;
 cout << "  -m num             minimum step size [0] (lower limit for a uniform distribution)" << endl;
 cout << "  -n num             maximum step size [100] (upper limit for a uniform distribution)" << endl;
 cout << "  -r num             number of replicates [1]" << endl;
// cout << "  -s num       number of steps in path [100]" << endl;
 cout << "  -l num             average size of each step [0] (if 0, uniform(smin,smax) will be used)" << endl;
 cout << "  -d num             standard deviation of step size distribution [1] (to use with -m)" << endl;
 cout << "  -p lat long steps  starting point (lat/long in decimal degrees) and number of steps" << endl;
 cout << "                     Several starting points may be provided [max 50] repeating -p switch" << endl; 
 cout << endl;
}
