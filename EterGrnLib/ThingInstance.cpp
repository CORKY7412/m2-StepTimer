//ekle
#include "../EterBase/StepTimer.h"

//arat

void CGraphicThingInstance::UpdateTime()
{
	m_fSecondElapsed=CTimer::Instance().GetElapsedSecond();

//değiştir

void CGraphicThingInstance::UpdateTime()
{
	m_fSecondElapsed=DX::StepTimer::Instance().GetElapsedSeconds();