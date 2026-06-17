
/* public: void __thiscall CCommunicationInterface::Server_Send_Reliable(long,void const *,long) */

void __thiscall
CCommunicationInterface::Server_Send_Reliable
          (CCommunicationInterface *this,long param_1,void *param_2,long param_3)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfd3f0  3383  ?Server_Send_Reliable@CCommunicationInterface@@QAEXJPBXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217384;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  FUN_360f1dc0(&DAT_362cd150 + param_1 * 0x100,param_2,param_3,(undefined4 *)0x1);
  Server_Update(this);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

