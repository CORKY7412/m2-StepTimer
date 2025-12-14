//ekle
#include "../EterBase/StepTimer.h"

//arat
long lElapsedTime = CTimer::Instance().GetElapsedMilliecond();

//değiştir
long lElapsedTime = DX::StepTimer::instance().GetElapsedMillieSeconds();