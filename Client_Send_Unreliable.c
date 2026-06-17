
/* public: void __thiscall CCommunicationInterface::Client_Send_Unreliable(void const *,long) */

void __thiscall
CCommunicationInterface::Client_Send_Unreliable
          (CCommunicationInterface *this,void *param_1,long param_2)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfd850  1331  ?Client_Send_Unreliable@CCommunicationInterface@@QAEXPBXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362173e6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362cd148,1);
  local_4 = 0;
  FUN_360f1dc0(&DAT_362cf250,param_1,param_2,(undefined4 *)0x0);
  if (*(int *)(this + 0x10) == 0) {
    Client_Update(this);
  }
  else {
    Server_Update(this);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

