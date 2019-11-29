/***************************************************************************
 *   Copyright (C) 2009 by Ant�nio M�rias dos Santos                       *
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


#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "model.h"

using namespace std;

int main(int argc, char *argv[])
{
  Model *m;
  m = new Model();
  if(m){
   if(argc>1){
    m->ParseArguments(argc,argv);
    m->Run();
   }
   else m->Help();  
   delete m;
  }
  return EXIT_SUCCESS;
}
