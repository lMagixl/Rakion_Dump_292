
/* public: void __thiscall CCommunicationInterface::Server_ClearClient(long) */

void __thiscall
CCommunicationInterface::Server_ClearClient(CCommunicationInterface *this,long param_1)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfbc70  3372  ?Server_ClearClient@CCommunicationInterface@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362171b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  FUN_360f1ce0((undefined4 *)(&DAT_362cd150 + param_1 * 0x100));
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

