//ekle
#include "../EterBase/StepTimer.h"

//arat
m_bycurDelay(0),

//değiştir
m_fCurrentTime(0.0f),

//arat
	void CAniImageBox::ResetFrame()
	{
		m_bycurIndex = 0;
	}

	void CAniImageBox::OnUpdate()
	{
		++m_bycurDelay;
		if (m_bycurDelay < m_byDelay)
			return;

		m_bycurDelay = 0;

		++m_bycurIndex;
		if (m_bycurIndex >= m_ImageVector.size())

//değiştir

	void CAniImageBox::ResetFrame()
	{
		m_bycurIndex = 0;
		m_fCurrentTime = 0.0f;
	}

	void CAniImageBox::OnUpdate()
	{
		float fElapsedTime = DX::StepTimer::Instance().GetElapsedSeconds();
		m_fCurrentTime += fElapsedTime * 60.0f; // Scale to 60hz ticks

		if (m_fCurrentTime < m_byDelay)
			return;

		m_fCurrentTime -= m_byDelay;
		if (m_fCurrentTime > m_byDelay)
			m_fCurrentTime = 0.0f;

		++m_bycurIndex;
		if (m_bycurIndex >= m_ImageVector.size())