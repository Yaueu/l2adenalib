/*
 * COObjectSystem.h - Object manager.
 * Created January 25, 2007, by Michael 'Bigcheese' Spencer.
 *
 * Copyright (C) 2007 Michael Spencer
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * Michael Spencer - bigcheesegs@gmail.com
 */

#ifndef _ADENA_C_O_OBJECT_SYSTEM_H_
#define _ADENA_C_O_OBJECT_SYSTEM_H_

#include <IOObjectSystem.h>
#include <irrThread.h>
#include <AVL.h>
#include <irrString.h>
#include <COObject.h>

namespace adena
{
namespace game_server
{

	typedef COObject* (*load_Obj)(IOObjectSystem*);

	class ADENALIB_API COObjectSystem : public IOObjectSystem, public irr::core::threads::Thread
	{
	public:

		COObjectSystem();

		virtual ~COObjectSystem();

		virtual void run();

		// Loads an obj and adds it to the system.
		virtual IOObject* loadObj(irr::core::stringc &obj);

		virtual IOObject* getObj(irr::u32 id);

		virtual void removeObj(irr::u32 id);

	private:

		AVL<irr::core::stringc, void*> Librarys;
		AVL<irr::u32, IOObject*> Objects;
		irr::u32 Ids;

	};

}
}

#endif
