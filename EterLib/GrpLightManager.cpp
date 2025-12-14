//ekle
#include "../EterBase/StepTimer.h"

//arat
ms_fCurTime = CTimer::Instance().GetCurrentSecond();

//değiştir
ms_fCurTime = DX::StepTimer::Instance().GetTotalSeconds();