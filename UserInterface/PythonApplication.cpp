//arat
double g_specularSpd=0.007f;

//değiştir
float g_specularSpd=0.42f;

//arat ve sil
CTimer::Instance().UseCustomTime();

//arat
m_iFPS = 60;

//değiştir
m_iFPS = 144;

//arat
CCameraManager::Instance().AddCamera(EVENT_CAMERA_NUMBER);

//altına ekle
timeBeginPeriod(1);

//arat
	CTimer& rkTimer=CTimer::Instance();
	rkTimer.Advance();

//değiştir
	DX::StepTimer& rkTimer = DX::StepTimer::instance();
	rkTimer.Tick([]() {});

//arat
	m_fGlobalTime = rkTimer.GetCurrentSecond();
	m_fGlobalElapsedTime = rkTimer.GetElapsedSecond();

//değiştir
	m_fGlobalElapsedTime = rkTimer.GetElapsedSeconds();
	m_fGlobalTime = rkTimer.GetTotalSeconds();

//arat
	UINT uiFrameTime = rkTimer.GetElapsedMilliecond();
	s_uiNextFrameTime += uiFrameTime;

//değiştir
	s_uiNextFrameTime += (1000 / m_iFPS);

//arat ve sil
	DWORD dwCurrentTime = ELTimer_GetMSec();
	BOOL  bCurrentLateUpdate = FALSE;

	s_bFrameSkip = false;

	if (dwCurrentTime > s_uiNextFrameTime)
	{
		int dt = dwCurrentTime - s_uiNextFrameTime;
		int nAdjustTime = ((float)dt / (float)uiFrameTime) * uiFrameTime;

		if ( dt >= 500 )
		{
			s_uiNextFrameTime += nAdjustTime;
			printf("FrameSkip Adjusting... %d\n",nAdjustTime);
			CTimer::Instance().Adjust(nAdjustTime);
		}
		s_bFrameSkip = true;
		bCurrentLateUpdate = TRUE;
	}

	if (m_isFrameSkipDisable)
		s_bFrameSkip = false;

//arat
	if (!s_bFrameSkip)
	{
		CGrannyMaterial::TranslateSpecularMatrix(g_specularSpd, g_specularSpd, 0.0f);

//değiştir
	if (!s_bFrameSkip)
	{
		float fSpecularMove = g_specularSpd * m_fGlobalElapsedTime;
		CGrannyMaterial::TranslateSpecularMatrix(fSpecularMove, fSpecularMove, 0.0f);

//arat
	if (rest > 0 && !bCurrentLateUpdate )
	{
		s_uiLoad -= rest;
		Sleep(rest);
	}

//değiştir
	if (rest > 0)
	{
		s_uiLoad -= rest;
		Sleep(rest);
	}
	else if (rest < -200)
	{
		// Safety: If we are way behind schedule (>200ms), reset the schedule to Now.
		// This prevents the loop from trying to sprint to catch up for infinite frames.
		s_uiNextFrameTime = ELTimer_GetMSec();
	}