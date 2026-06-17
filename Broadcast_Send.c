
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCommunicationInterface::Broadcast_Send(void const *,long,class CAddress
   &) */

void __thiscall
CCommunicationInterface::Broadcast_Send
          (CCommunicationInterface *this,void *param_1,long param_2,CAddress *param_3)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfb8c0  1091
                       ?Broadcast_Send@CCommunicationInterface@@QAEXPBXJAAVCAddress@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217169;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  _DAT_362cf158 = *(undefined4 *)param_3;
  _DAT_362cf15c = *(undefined2 *)(param_3 + 4);
  _DAT_362cf15e = *(undefined2 *)(param_3 + 6);
  local_4 = 0;
  FUN_360f1dc0(&DAT_362cf150,param_1,param_2,(undefined4 *)0x0);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

