#include "WinInitialization.h"
#include "run_loop.h"

BEGIN_REFERMEE_API

void Initialization::InitializeSdk()
{
#if EPUB_PLATFORM(WINRT)
	ePub3::RunLoop::InitRunLoopTLSKey();
#endif
	ePub3::InitializeSdk();
}

void Initialization::PopulateFilterManager()
{
	ePub3::PopulateFilterManager();
}

END_REFERMEE_API