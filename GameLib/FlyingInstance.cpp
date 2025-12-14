//ekle
#include "../EterBase/StepTimer.h"

//arat
		D3DXToRadian(m_pData->m_v3AngVel.y)*CTimer::Instance().GetElapsedSecond(),
		D3DXToRadian(m_pData->m_v3AngVel.x)*CTimer::Instance().GetElapsedSecond(),
		D3DXToRadian(m_pData->m_v3AngVel.z)*CTimer::Instance().GetElapsedSecond());

//değiştir
		D3DXToRadian(m_pData->m_v3AngVel.y)*DX::StepTimer::Instance().GetElapsedSeconds(),
		D3DXToRadian(m_pData->m_v3AngVel.x)*DX::StepTimer::Instance().GetElapsedSeconds(),
		D3DXToRadian(m_pData->m_v3AngVel.z)*DX::StepTimer::Instance().GetElapsedSeconds());

//arat
float angle = (CTimer::Instance().GetCurrentSecond() - m_fStartTime)*2*3.1415926535897931f/rfad.fPeriod;

//değiştir
float angle = (DX::StepTimer::Instance().GetTotalSeconds() - m_fStartTime)*2*3.1415926535897931f/rfad.fPeriod;

//arat
float dt = CTimer::Instance().GetCurrentSecond() - m_fStartTime;

//değiştir
float dt = DX::StepTimer::Instance().GetTotalSeconds() - m_fStartTime;

//arat
m_pData->m_fHomingStartTime + m_fStartTime < CTimer::Instance().GetCurrentSecond())

//değiştir
m_pData->m_fHomingStartTime + m_fStartTime < DX::StepTimer::Instance().GetTotalSeconds())

//arat
	m_v3Velocity += m_v3Accel*CTimer::Instance().GetElapsedSecond();
	m_v3Velocity.z+=m_pData->m_fGravity * CTimer::Instance().GetElapsedSecond();
	D3DXVECTOR3 v3Movement = m_v3Velocity * CTimer::Instance().GetElapsedSecond();

//değiştir
	m_v3Velocity += m_v3Accel*DX::StepTimer::Instance().GetElapsedSeconds();
	m_v3Velocity.z+=m_pData->m_fGravity * DX::StepTimer::Instance().GetElapsedSeconds();
	D3DXVECTOR3 v3Movement = m_v3Velocity * DX::StepTimer::Instance().GetElapsedSeconds();

//arat
m_fStartTime = CTimer::Instance().GetCurrentSecond();

//değiştir
m_fStartTime = DX::StepTimer::Instance().GetTotalSeconds();