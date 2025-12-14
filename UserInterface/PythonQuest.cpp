//ekle
#include "../EterBase/StepTimer.h"

//arat
rQuestInstance.iStartTime = int(CTimer::Instance().GetCurrentSecond());

//değiştir
rQuestInstance.iStartTime = int(DX::StepTimer::instance().GetTotalSeconds());

//arat
rQuestInstance.iStartTime = int(CTimer::Instance().GetCurrentSecond());

//değiştir
rQuestInstance.iStartTime = int(DX::StepTimer::instance().GetTotalSeconds());

//arat
pQuestInstance->iStartTime = int(CTimer::Instance().GetCurrentSecond());

//değiştir
pQuestInstance->iStartTime = int(DX::StepTimer::instance().GetTotalSeconds());

//arat
iLastTime = (pQuestInstance->iStartTime + pQuestInstance->iClockValue) - int(CTimer::Instance().GetCurrentSecond());

//değiştir
iLastTime = (pQuestInstance->iStartTime + pQuestInstance->iClockValue) - int(DX::StepTimer::instance().GetTotalSeconds());