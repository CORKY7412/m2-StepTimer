//ekle
#include "../EterBase/StepTimer.h"

//arat
m_dwlastTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
m_dwlastTime = DX::StepTimer::instance().GetTotalMillieSeconds();

//arat
DWORD dwCurTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
DWORD dwCurTime = DX::StepTimer::instance().GetTotalMillieSeconds();