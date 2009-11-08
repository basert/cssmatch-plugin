/* 
 * Copyright 2008, 2009 Nicolas Maingot
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

#ifndef __IHOOKCALLBACK_H__
#define __IHOOKCALLBACK_H__

class IVEngineServer;

namespace cssmatch
{
	/** A class which wants to hook a ConCommand has to implement this interface */
	class IHookCallback
	{
	public:
		virtual ~IHookCallback();

		/** Similar to the ConCommand::Dispatch method but allow the class to the "eat" the command <br>
		 * in order to hook its effect
		 * @param userIndex The user index which uses the hooked command
		 * @param engine The IVEngineServer instance to access the arguments
		 * @return <code>true</code> if the command has to be "eaten", <code>false</code> otherwise
		 */
		virtual bool hookDispatch(int userIndex, IVEngineServer * engine) = 0;
	};
}

#endif // __IHOOKCALLBACK_H__
