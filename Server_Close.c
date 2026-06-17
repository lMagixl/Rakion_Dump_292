
/* public: void __thiscall CCommunicationInterface::Server_Close(void) */

void __thiscall CCommunicationInterface::Server_Close(CCommunicationInterface *this)

{
  undefined4 *puVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfbbf0  3373  ?Server_Close@CCommunicationInterface@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621719f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  puVar1 = (undefined4 *)&DAT_362cd150;
  do {
    FUN_360f1ce0(puVar1);
    puVar1 = puVar1 + 0x40;
  } while ((int)puVar1 < 0x362cf150);
  *(undefined4 *)(this + 0x10) = 0;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

