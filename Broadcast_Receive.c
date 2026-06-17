
/* public: int __thiscall CCommunicationInterface::Broadcast_Receive(void *,long &,class CAddress &)
    */

int __thiscall
CCommunicationInterface::Broadcast_Receive
          (CCommunicationInterface *this,void *param_1,long *param_2,CAddress *param_3)

{
  int iVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfb950  1090
                       ?Broadcast_Receive@CCommunicationInterface@@QAEHPAXAAJAAVCAddress@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621717b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  iVar1 = FUN_360f24c0(&DAT_362cf150,param_1,param_2,(undefined4 *)param_3,(int *)0x0);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return iVar1;
}

