//ekle
#include "StepTimer.h"

//arat
gs_dwClientTime = CTimer::instance().GetCurrentMillisecond();

//değiştir
gs_dwClientTime = DX::StepTimer::instance().GetTotalMillieSeconds();

//arat
return CTimer::instance().GetCurrentMillisecond() - gs_dwClientTime + gs_dwServerTime;

//değiştir
return DX::StepTimer::instance().GetTotalMillieSeconds() - gs_dwClientTime + gs_dwServerTime;

//arat
gs_dwFrameTime = ELTimer_GetMSec();

//değiştir
gs_dwFrameTime = DX::StepTimer::instance().GetTotalMillieSeconds();

//arat
float CTimer::GetCurrentSecond()
{
	if (m_bUseRealTime)
		return ELTimer_GetMSec() / 1000.0f;

	return m_fCurrentTime;
}

//değiştir
float CTimer::GetCurrentSecond()
{
	return m_fCurrentTime;
}

//arat
DWORD CTimer::GetCurrentMillisecond()
{
	if (m_bUseRealTime)
		return ELTimer_GetMSec();

	return m_dwCurrentTime;
}

//değiştir
DWORD CTimer::GetCurrentMillisecond()
{
	return m_dwCurrentTime;
}

//en alta ekle
void CTimer::SetStep(DWORD dwCurrent, DWORD dwElapsed)
{
	m_dwCurrentTime = dwCurrent;
	m_dwElapsedTime = dwElapsed;
	m_fCurrentTime = dwCurrent / 1000.0f;
	m_bUseRealTime = true;
}