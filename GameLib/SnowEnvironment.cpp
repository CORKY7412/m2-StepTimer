//ekle
#include "../EterBase/StepTimer.h"

//arat
	static long s_lLastTime = CTimer::Instance().GetCurrentMillisecond();
	long lcurTime = CTimer::Instance().GetCurrentMillisecond();
	float fElapsedTime = float(lcurTime - s_lLastTime) / 1000.0f;
	s_lLastTime = lcurTime;

//değiştir
	float fElapsedTime = DX::StepTimer::Instance().GetElapsedSeconds();