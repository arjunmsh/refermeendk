//
//  WinNavPoint.h
//  Refermee
//
//  Created by Jim Dovey on 2013-10-11.
//  Copyright (c) 2014 Refermee Foundation and/or its licensees. All rights reserved.
//  
//  This program is distributed in the hope that it will be useful, but WITHOUT ANY 
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  
//  
//  Licensed under Gnu Affero General Public License Version 3 (provided, notwithstanding this notice, 
//  Refermee Foundation reserves the right to license this material under a different separate license, 
//  and if you have done so, the terms of that separate license control and the following references 
//  to GPL do not apply).
//  
//  This program is free software: you can redistribute it and/or modify it under the terms of the GNU 
//  Affero General Public License as published by the Free Software Foundation, either version 3 of 
//  the License, or (at your option) any later version. You should have received a copy of the GNU 
//  Affero General Public License along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __Refermee_NavPoint_h__
#define __Refermee_NavPoint_h__

#include "Refermee.h"
#include "INavigationElement.h"
#include <ePub3/nav_point.h>

BEGIN_REFERMEE_API

public ref class NavigationPoint sealed : INavigationElement
{
	_DECLARE_BRIDGE_API_(::ePub3::NavigationPointPtr, NavigationPoint^);

internal:
	NavigationPoint(::ePub3::NavigationPointPtr native);

public:
	virtual ~NavigationPoint() {}

	property String^ Title { virtual String^ get(); virtual void set(String^); }
	property IVectorView<INavigationElement^>^ Children { virtual IVectorView<INavigationElement^>^ get(); }
	virtual void AppendChild(INavigationElement^ child);

	property String^ Content { String^ get(); void set(String^); }

	property INavigationElement^ Parent { INavigationElement^ get(); }

};

END_REFERMEE_API

#endif	/* __Refermee_NavPoint_h__ */
