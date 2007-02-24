/*
 * CDbRandInstance.h - getting db and rand singleton.
 * Created February 20, 2007, by Michael 'Bigcheese' Spencer.
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

#ifndef _ADENA_C_DB_RAND_INSTANCE_H_
#define _ADENA_C_DB_RAND_INSTANCE_H_

#include <AdenaConfig.h>
#include <irrDb.h>
#include <irrRng.h>

namespace adena
{

	class ADENALIB_API CDbRandInstance
	{
	public:

		CDbRandInstance();

		~CDbRandInstance();

		static irr::db::IDatabase* getDbInstance();

		static irr::IRng* getRngInstance();

	};

}

#endif
