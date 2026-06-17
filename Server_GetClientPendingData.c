
/* public: unsigned long __thiscall CCommunicationInterface::Server_GetClientPendingData(long) */

ulong __thiscall
CCommunicationInterface::Server_GetClientPendingData(CCommunicationInterface *this,long param_1)

{
  ulong uVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfbe60  3375  ?Server_GetClientPendingData@CCommunicationInterface@@QAEKJ@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362171f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  uVar1 = FUN_360f1d50((int *)(&DAT_362cd150 + param_1 * 0x100));
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return uVar1;
}

