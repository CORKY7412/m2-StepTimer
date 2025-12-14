//ekle
#include "../EterBase/StepTimer.h"

//arat
if (CTimer::Instance().GetCurrentMillisecond() - m_iLastAlarmTime > 20000)

//değiştir
if (DX::StepTimer::instance().GetTotalMillieSeconds() - m_iLastAlarmTime > 20000)

//arat
float fElapsedTime = CTimer::Instance().GetElapsedSecond();

//değiştir
float fElapsedTime = DX::StepTimer::instance().GetElapsedSeconds();

//arat
return CTimer::Instance().GetCurrentSecond() - m_playerStatus.aSkill[dwSlotIndex].fLastUsedTime;

//değiştir
return DX::StepTimer::Instance().GetTotalSeconds() - m_playerStatus.aSkill[dwSlotIndex].fLastUsedTime;

//arat
DWORD dwCurTime=ELTimer_GetMSec();

//değiştir
DWORD dwCurTime=DX::StepTimer::instance().GetTotalMillieSeconds();

//arat
DWORD dwCurTime=ELTimer_GetMSec();

//değiştir
DWORD dwCurTime=DX::StepTimer::instance().GetTotalMillieSeconds();

//arat
m_iLastAlarmTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
m_iLastAlarmTime = DX::StepTimer::instance().GetTotalMillieSeconds();