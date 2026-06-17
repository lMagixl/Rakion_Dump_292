
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCommunicationInterface::Client_OpenLocal(void) */

void __thiscall CCommunicationInterface::Client_OpenLocal(CCommunicationInterface *this)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfc0c0  1324  ?Client_OpenLocal@CCommunicationInterface@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217250;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  DAT_362cf250 = 1;
  FUN_360f1d80(&DAT_362cf250,0x362cd150);
  _DAT_362cd150 = 1;
  FUN_360f1d80(&DAT_362cd150,0x362cf250);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

