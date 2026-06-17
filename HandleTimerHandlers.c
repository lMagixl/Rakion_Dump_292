
/* public: void __thiscall CTimer::HandleTimerHandlers(void) */

void __thiscall CTimer::HandleTimerHandlers(CTimer *this)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x45150  2243  ?HandleTimerHandlers@CTimer@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362112b6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(_pTimer + 0x1c),1);
  local_4 = 0;
  FUN_36044e90();
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

