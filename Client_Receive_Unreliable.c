
/* public: int __thiscall CCommunicationInterface::Client_Receive_Unreliable(void *,long &) */

int __thiscall
CCommunicationInterface::Client_Receive_Unreliable
          (CCommunicationInterface *this,void *param_1,long *param_2)

{
  int iVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfc2f0  1329
                       ?Client_Receive_Unreliable@CCommunicationInterface@@QAEHPAXAAJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217298;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  iVar1 = FUN_360f2b20(&DAT_362cf250,param_1,param_2,(int *)0x0);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return iVar1;
}

