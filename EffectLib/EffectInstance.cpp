//en üste ekle
#include "../EterBase/StepTimer.h"

//arat
FEffectUpdator f(CTimer::Instance().GetCurrentSecond()-m_fLastTime);

//değiştir
FEffectUpdator f(DX::StepTimer::Instance().GetTotalSeconds() - m_fLastTime);

//arat
m_fLastTime = CTimer::Instance().GetCurrentSecond();

//değiştir
m_fLastTime = DX::StepTimer::instance().GetTotalSeconds();

//arat
m_fLastTime = CTimer::Instance().GetCurrentSecond();

//değiştir
m_fLastTime = DX::StepTimer::Instance().GetTotalSeconds();