/* 
 * Copyright 2007, 2008 Nicolas Maingot
 * 
 * This file is part of CSSMatch.
 * 
 * CSSMatch is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * CSSMatch is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with CSSMatch; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 * Portions of this code are also Copyright � 1996-2005 Valve Corporation, All rights reserved
 */

#include "Outils.h"
#include "../ConVars/ConVars.h"

using std::string;

tm * Outils::getDateLocale()
{
	time_t date = time(NULL);
	return gmtime(&date);
}

void Outils::valideNomDeFichier(string & nom)
{
	string::iterator caractere = nom.begin();
	string::const_iterator finChaine = nom.end();
	while(caractere != finChaine)
	{
		if (
			*caractere=='/' ||
			*caractere=='\\' ||
			*caractere==':' ||
			*caractere=='*' ||
			*caractere=='?' ||
			*caractere=='"' ||
			*caractere=='<' ||
			*caractere=='>' ||
			*caractere=='|' ||
			*caractere==' ' ||
			*caractere=='\t' ||
			*caractere==';' ||
			*caractere=='{' ||
			*caractere=='}' ||
			*caractere=='(' ||
			*caractere==')' ||
			*caractere=='\''
			)
			*caractere='-';
		caractere++;
	}
}
