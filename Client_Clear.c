
/* public: void __thiscall CCommunicationInterface::Client_Clear(void) */

void __thiscall CCommunicationInterface::Client_Clear(CCommunicationInterface *this)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfc150  1319  ?Client_Clear@CCommunicationInterface@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217262;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  FUN_360f1ce0(&DAT_362cf250);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

