//
//  WinFilterChain.h
//  Refermee
//
//  Created by Jim Dovey on 2013-10-10.
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

#ifndef __Refermee_FilterChain_h__
#define __Refermee_FilterChain_h__

#include "Refermee.h"
#include "IContentFilter.h"
#include "Streams.h"
#include <ePub3/filter_chain.h>

using ::Windows::Foundation::Collections::IVectorView;

BEGIN_REFERMEE_API

ref class ManifestItem;

public ref class FilterChain sealed
{
	_DECLARE_BRIDGE_API_(::ePub3::FilterChainPtr, FilterChain^);

internal:
	FilterChain(::ePub3::FilterChainPtr native);

public:
	FilterChain(IVectorView<IContentFilter^>^ filters);

	IClosableStream^ ByteStreamForManifestItem(ManifestItem^ item);

};

END_REFERMEE_API

#endif	/* __Refermee_FilterChain_h__ */
