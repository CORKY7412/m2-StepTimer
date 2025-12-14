//ekle
#include "../EterBase/StepTimer.h"

//arat
CSpeedTreeForestDirectX8::Instance().UpdateSystem(CTimer::Instance().GetCurrentSecond());

//değiştir
const float now = DX::StepTimer::instance().GetTotalSeconds();
CSpeedTreeForestDirectX8::Instance().UpdateSystem(now);