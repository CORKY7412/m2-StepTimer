//ekle
#include "../EterBase/StepTimer.h"

//arat
range_start = c_rHitData.mapHitPosition.lower_bound(motiontime-CTimer::Instance().GetElapsedSecond());

//değiştir
range_start = c_rHitData.mapHitPosition.lower_bound(motiontime-DX::StepTimer::instance().GetElapsedSeconds());