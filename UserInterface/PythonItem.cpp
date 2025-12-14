//ekle
#include "../EterBase/StepTimer.h"

//arat
if (dwEndTime < CTimer::Instance().GetCurrentMillisecond())

//değiştir
if (dwEndTime < DX::StepTimer::instance().GetTotalMillieSeconds())

//arat
		DWORD time = CTimer::Instance().GetCurrentMillisecond() - dwStartTime;
		DWORD etime = dwEndTime - CTimer::Instance().GetCurrentMillisecond();

//değiştir
		DWORD time = DX::StepTimer::instance().GetTotalMillieSeconds() - dwStartTime;
		DWORD etime = dwEndTime - DX::StepTimer::instance().GetTotalMillieSeconds();

//arat
pGroundItemInstance->dwStartTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
pGroundItemInstance->dwStartTime = DX::StepTimer::instance().GetTotalMillieSeconds();