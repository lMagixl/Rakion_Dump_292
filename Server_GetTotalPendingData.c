
/* public: unsigned long __thiscall CCommunicationInterface::Server_GetTotalPendingData(void) */

ulong __thiscall CCommunicationInterface::Server_GetTotalPendingData(CCommunicationInterface *this)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfbf50  3377  ?Server_GetTotalPendingData@CCommunicationInterface@@QAEKXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621721a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  uVar3 = 0;
  local_4 = 0;
  piVar2 = (int *)&DAT_362cd150;
  do {
    iVar1 = FUN_360f1d50(piVar2);
    piVar2 = piVar2 + 0x40;
    uVar3 = uVar3 + iVar1;
  } while ((int)piVar2 < 0x362cf150);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return uVar3;
}

