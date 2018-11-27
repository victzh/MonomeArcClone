/*	 This file contains source code for the firmware of a monome arc 
 *   clone.
 * 
 *   Copyright (C) 2013  Johannes Neumann; mail@johannesneumann.net
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */  
 
#include "config.h"

#if NUM_ENCS == 2
    const uint8_t ID[32] = "arc2                           ";
#elif NUM_ENCS == 4
    const uint8_t ID[32] = "arc4                           ";
#else
    const uint8_t ID[32] = { 0 };
#endif


const uint8_t* CONFIG_getID( void )
{
	return &ID[0];
}

void CONFIG_writeID( uint8_t* ID_p) 
{
    // ignore this for now?
	//memcpy(&ID[0], ID_p, 32);
}
