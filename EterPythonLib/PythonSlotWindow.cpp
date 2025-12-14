//ekle
#include "../EterBase/StepTimer.h"

//arat
pSlot->fStartCoolTime = CTimer::Instance().GetCurrentSecond() - fElapsedTime;

//değiştir
pSlot->fStartCoolTime = DX::StepTimer::Instance().GetTotalSeconds() - fElapsedTime;

//arat
*fElapsedTime = CTimer::Instance().GetCurrentSecond() - pSlot->fStartCoolTime;

//değiştir
*fElapsedTime = DX::StepTimer::instance().GetTotalSeconds() - pSlot->fStartCoolTime;

//arat
float fcurTime = CTimer::Instance().GetCurrentSecond();

//değiştir
float fcurTime = DX::StepTimer::Instance().GetTotalSeconds();