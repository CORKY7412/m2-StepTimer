//ekle
#include "../EterBase/StepTimer.h"

//arat
m_pMeshScript->GetPosition(m_fLocalTime-CTimer::Instance().GetElapsedSecond(), LastPosition);

//değiştir
m_pMeshScript->GetPosition(m_fLocalTime-DX::StepTimer::Instance().GetElapsedSeconds(), LastPosition);