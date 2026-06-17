
/* public: int __thiscall CCommunicationInterface::Server_Receive_Reliable(long,void *,long &) */

int __thiscall
CCommunicationInterface::Server_Receive_Reliable
          (CCommunicationInterface *this,long param_1,void *param_2,long *param_3)

{
  int iVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfbfc0  3381
                       ?Server_Receive_Reliable@CCommunicationInterface@@QAEHJPAXAAJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621722c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  iVar1 = FUN_360f2b20(&DAT_362cd150 + param_1 * 0x100,param_2,param_3,(int *)0x1);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return iVar1;
}

