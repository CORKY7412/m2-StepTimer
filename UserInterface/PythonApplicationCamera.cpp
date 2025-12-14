//arat
float fcurTime = CTimer::Instance().GetCurrentSecond();

//değiştir
float fcurTime = DX::StepTimer::Instance().GetTotalSeconds();

//arat
if (0.0f != m_fRotationSpeed)

//üstüne ekle
	float fElapsedTime = DX::StepTimer::Instance().GetElapsedSeconds();
	float fScale = fElapsedTime * 60.0f;

//arat
	if (0.0f != m_fRotationSpeed)
		pMainCamera->Roll(m_fRotationSpeed);
	if (0.0f != m_fPitchSpeed)
		pMainCamera->Pitch(m_fPitchSpeed);
	if (0.0f != m_fZoomSpeed)
		pMainCamera->Zoom(m_fZoomSpeed);

	if (0.0f !=m_kCmrSpd.m_fViewDir)
		m_kCmrPos.m_fViewDir+=m_kCmrSpd.m_fViewDir;
	if (0.0f !=m_kCmrSpd.m_fCrossDir)
		m_kCmrPos.m_fCrossDir+=m_kCmrSpd.m_fCrossDir;
	if (0.0f !=m_kCmrSpd.m_fUpDir)
		m_kCmrPos.m_fUpDir+=m_kCmrSpd.m_fUpDir;

	if (0.0f != m_kCmrPos.m_fViewDir)
		pMainCamera->MoveFront(m_kCmrPos.m_fViewDir);

//değiştir
	if (0.0f != m_fRotationSpeed)
		pMainCamera->Roll(m_fRotationSpeed * fScale);
	if (0.0f != m_fPitchSpeed)
		pMainCamera->Pitch(m_fPitchSpeed * fScale);
	if (0.0f != m_fZoomSpeed)
	{
		float fScaledZoom = 1.0f + (m_fZoomSpeed - 1.0f) * fScale;
		pMainCamera->Zoom(fScaledZoom);
	}

	if (0.0f !=m_kCmrSpd.m_fViewDir)
		m_kCmrPos.m_fViewDir+=m_kCmrSpd.m_fViewDir * fScale;
	if (0.0f !=m_kCmrSpd.m_fCrossDir)
		m_kCmrPos.m_fCrossDir+=m_kCmrSpd.m_fCrossDir * fScale;
	if (0.0f !=m_kCmrSpd.m_fUpDir)
		m_kCmrPos.m_fUpDir+=m_kCmrSpd.m_fUpDir * fScale;

	if (0.0f != m_kCmrPos.m_fViewDir)
		pMainCamera->MoveFront(m_kCmrPos.m_fViewDir);

//arat
m_fBlendCameraStartTime = CTimer::Instance().GetCurrentSecond();

//değiştir
m_fBlendCameraStartTime = DX::StepTimer::Instance().GetTotalSeconds();