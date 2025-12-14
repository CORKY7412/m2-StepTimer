//ekle
#include "../EterBase/StepTimer.h"

//arat
	static DWORD s_dwLastHeightChangeTime = CTimer::Instance().GetCurrentMillisecond();
	static DWORD s_dwBlendtime = 300

	if ((CTimer::Instance().GetCurrentMillisecond() - s_dwLastHeightChangeTime) > s_dwBlendtime)

//değiştir
	static DWORD s_dwLastHeightChangeTime = DX::StepTimer::instance().GetTotalMillieSeconds();
	static DWORD s_dwBlendtime = 300;

	if ((DX::StepTimer::instance().GetTotalMillieSeconds() - s_dwLastHeightChangeTime) > s_dwBlendtime)

//arat
		s_dwLastHeightChangeTime = CTimer::Instance().GetCurrentMillisecond();
	}

	s_fWaterHeightCurrent = s_fWaterHeightBegin + (s_fWaterHeightEnd - s_fWaterHeightBegin) * (float) ((CTimer::Instance().GetCurrentMillisecond() - s_dwLastHeightChangeTime) / (float) s_dwBlendtime);

//değiştir
		s_dwLastHeightChangeTime = DX::StepTimer::instance().GetTotalMillieSeconds();
	}

	s_fWaterHeightCurrent = s_fWaterHeightBegin + (s_fWaterHeightEnd - s_fWaterHeightBegin) * (float) ((DX::StepTimer::instance().GetTotalMillieSeconds() - s_dwLastHeightChangeTime) / (float) s_dwBlendtime);