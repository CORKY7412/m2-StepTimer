//ekle
#include "../EterBase/StepTimer.h"

//arat
DWORD dwcurTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
DWORD dwcurTime = DX::StepTimer::instance().GetTotalMillieSeconds();

//arat
WaitChat.dwAppendingTime = CTimer::Instance().GetCurrentMillisecond() + iDelay;

//değiştir
WaitChat.dwAppendingTime = DX::StepTimer::instance().GetTotalMillieSeconds() + iDelay;