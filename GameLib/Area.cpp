//ekle
#include "../EterBase/StepTimer.h"

//arat
float fcurTime = CTimer::Instance().GetCurrentSecond();

//değiştir
float fcurTime = DX::StepTimer::instance().GetTotalSeconds();

//arat
fNextPlayTime = CTimer::Instance().GetCurrentSecond();

//değiştir
fNextPlayTime = DX::StepTimer::instance().GetTotalSeconds();