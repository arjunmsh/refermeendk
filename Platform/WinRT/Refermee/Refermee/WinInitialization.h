#ifndef __Refermee_initialization_h__
#define __Refermee_initialization_h__

#include "Refermee.h"
#include "ePub3\initialization.h"

BEGIN_REFERMEE_API

public ref class Initialization sealed
{

public:
	void InitializeSdk();
	void PopulateFilterManager();
};


END_REFERMEE_API

#endif	/* __Refermee_initialization_h__ */
