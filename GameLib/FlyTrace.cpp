//ekle
#include "../EterBase/StepTimer.h"

//arat
	m_TimePositionDeque.push_front(TTimePosition(CTimer::Instance().GetCurrentSecond(),v3Position));
	while(!m_TimePositionDeque.empty() && m_TimePositionDeque.back().first+m_fTailLength<CTimer::Instance().GetCurrentSecond())

//değiştir
	m_TimePositionDeque.push_front(TTimePosition(DX::StepTimer::Instance().GetTotalSeconds(),v3Position));
	while(!m_TimePositionDeque.empty() && m_TimePositionDeque.back().first+m_fTailLength<DX::StepTimer::Instance().GetTotalSeconds())

//arat
		float rate1 = (1-(CTimer::Instance().GetCurrentSecond()-it1->first)/m_fTailLength);
		float rate2 = (1-(CTimer::Instance().GetCurrentSecond()-it2->first)/m_fTailLength);

//değiştir
		float rate1 = (1-(DX::StepTimer::Instance().GetTotalSeconds()-it1->first)/m_fTailLength);
		float rate2 = (1-(DX::StepTimer::Instance().GetTotalSeconds()-it2->first)/m_fTailLength);