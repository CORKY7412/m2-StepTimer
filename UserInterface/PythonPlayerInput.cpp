//arat
DWORD dwCurrentTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
DWORD dwCurrentTime = DX::StepTimer::instance().GetTotalMillieSeconds();

//arat
if (CTimer::Instance().GetCurrentMillisecond() < s_dwLastCancelTime + 500)

//değiştir
if (DX::StepTimer::instance().GetTotalMillieSeconds() < s_dwLastCancelTime + 500)

//arat
s_dwLastCancelTime = CTimer::Instance().GetCurrentMillisecond();

//değiştir
s_dwLastCancelTime = DX::StepTimer::instance().GetTotalMillieSeconds();