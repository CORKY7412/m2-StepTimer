//ekle
#include "../EterBase/StepTimer.h"

//arat
		if (m_PlaySoundHistoryMap.end() != itor)
		{
			float fTime = itor->second;
			if (CTimer::Instance().GetCurrentSecond() - fTime < 0.3f)
			{
				return;
			}
		}

		m_PlaySoundHistoryMap.erase(c_szFileName);
		m_PlaySoundHistoryMap.emplace(c_szFileName, CTimer::Instance().GetCurrentSecond());
	}

//değiştir
		if (m_PlaySoundHistoryMap.end() != itor)
		{
			float fTime = itor->second;
			if (DX::StepTimer::instance().GetTotalSeconds() - fTime < 0.3f)
			{
				return;
			}
		}

		m_PlaySoundHistoryMap.erase(c_szFileName);
		m_PlaySoundHistoryMap.emplace(c_szFileName, DX::StepTimer::instance().GetTotalSeconds());
	}