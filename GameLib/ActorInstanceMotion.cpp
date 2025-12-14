//arat
	else
	{
		MotionEventProcess();
		SoundEventProcess(!isPC);

		++m_kCurMotNode.dwcurFrame;
	}

//değiştir
	else
	{
		DWORD dwNextFrame = DWORD(GetAttackingElapsedTime() * g_fGameFPS);
		for (; m_kCurMotNode.dwcurFrame < dwNextFrame; ++m_kCurMotNode.dwcurFrame)
		{
			MotionEventProcess();
			SoundEventProcess(TRUE);
		}
	}