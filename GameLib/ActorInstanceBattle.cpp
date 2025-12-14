//ekle
#include "../EterBase/StepTimer.h"

//arat
	if (IS_PARTY_HUNTING_RACE(rVictim.GetRace()))
	{
		if (uiSkill)
			rVictim.m_fInvisibleTime = CTimer::Instance().GetCurrentSecond() + c_rAttackData.fInvisibleTime;

		if (m_isMain)
			rVictim.m_fInvisibleTime = CTimer::Instance().GetCurrentSecond() + c_rAttackData.fInvisibleTime;
	}
	else
	{
		rVictim.m_fInvisibleTime = CTimer::Instance().GetCurrentSecond() + c_rAttackData.fInvisibleTime;
	}

//değiştir
	if (IS_PARTY_HUNTING_RACE(rVictim.GetRace()))
	{
		if (uiSkill)
			rVictim.m_fInvisibleTime = DX::StepTimer::Instance().GetTotalSeconds() + c_rAttackData.fInvisibleTime;

		if (m_isMain)
			rVictim.m_fInvisibleTime = DX::StepTimer::Instance().GetTotalSeconds() + c_rAttackData.fInvisibleTime;
	}
	else
	{
		rVictim.m_fInvisibleTime = DX::StepTimer::Instance().GetTotalSeconds() + c_rAttackData.fInvisibleTime;
	}

//arat
if (CTimer::Instance().GetCurrentSecond() >= m_fInvisibleTime)

//değiştir
if (DX::StepTimer::Instance().GetTotalSeconds() >= m_fInvisibleTime)