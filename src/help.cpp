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
