//ekle
#include "../EterBase/StepTimer.h"

//arat
	if (ms_dwWavingEndTime > CTimer::Instance().GetCurrentMillisecond())

//değiştir
	if (ms_dwWavingEndTime > DX::StepTimer::instance().GetTotalMillieSeconds())

//arat
ms_dwWavingEndTime = CTimer::Instance().GetCurrentMillisecond() + long(fDuringTime * 1000.0f);

//değiştir
ms_dwWavingEndTime = DX::StepTimer::instance().GetTotalMillieSeconds() + long(fDuringTime * 1000.0f);

//arat
ms_dwFlashingEndTime = CTimer::Instance().GetCurrentMillisecond() + long(fDuringTime * 1000.0f);

//değiştir
ms_dwFlashingEndTime = DX::StepTimer::instance().GetTotalMillieSeconds() + long(fDuringTime * 1000.0f);