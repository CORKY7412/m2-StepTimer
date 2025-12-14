//ekle
#include "../EterBase/StepTimer.h"

//arat
	float fElapsedTime = CTimer::Instance().GetCurrentSecond() - m_fLastUpdate;
	m_fLastUpdate = CTimer::Instance().GetCurrentSecond();

//değiştir
	const float now = DX::StepTimer::Instance().GetTotalSeconds();
	float fElapsedTime = now - m_fLastUpdate;
	m_fLastUpdate = now;

//arat
m_fLastUpdate = CTimer::Instance().GetCurrentSecond();

//değiştir
m_fLastUpdate = DX::StepTimer::Instance().GetTotalSeconds();