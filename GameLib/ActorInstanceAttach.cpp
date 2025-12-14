//ekle
#include "../EterBase/StepTimer.h"

//arat
DWORD dwCurrentTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
DWORD dwCurrentTime = DX::StepTimer::instance().GetTotalMillieSeconds();