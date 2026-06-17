
/* public: unsigned long __thiscall CCommunicationInterface::Server_GetMaxPendingData(void) */

ulong __thiscall CCommunicationInterface::Server_GetMaxPendingData(CCommunicationInterface *this)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfbed0  3376  ?Server_GetMaxPendingData@CCommunicationInterface@@QAEKXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217208;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  uVar3 = 0;
  local_4 = 0;
  piVar2 = (int *)&DAT_362cd150;
  do {
    uVar1 = FUN_360f1d50(piVar2);
    if (uVar3 < uVar1) {
      uVar3 = uVar1;
    }
    piVar2 = piVar2 + 0x40;
  } while ((int)piVar2 < 0x362cf150);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return uVar3;
}

