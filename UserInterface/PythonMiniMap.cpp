//ekle
#include "../EterBase/StepTimer.h"

//arat
			float v = (1+sinf(CTimer::Instance().GetCurrentSecond()*6))/5+0.6;

//değiştir
			const float now = DX::StepTimer::Instance().GetTotalSeconds();
			float v = (1.0f + std::sin(now * 6.0f)) / 5.0f + 0.6f;