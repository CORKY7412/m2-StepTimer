//en üste ekle
#include "../EterBase/StepTimer.h"

//arat
m_dwStartTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
m_dwStartTime = DX::StepTimer::instance().GetTotalMillieSeconds();