//ekle
#include "../EterBase/StepTimer.h"

//arat
float fElapsedTime = CTimer::Instance().GetCurrentSecond() - m_playerStatus.aSkill[dwSlotIndex].fLastUsedTime;

//değiştir
float fElapsedTime = DX::StepTimer::Instance().GetTotalSeconds() - m_playerStatus.aSkill[dwSlotIndex].fLastUsedTime;

//arat
rkSkillInst.fLastUsedTime = CTimer::Instance().GetCurrentSecond();

//değiştir
rkSkillInst.fLastUsedTime = DX::StepTimer::Instance().GetTotalSeconds();