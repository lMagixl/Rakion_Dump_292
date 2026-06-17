
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CServer::AddPlayerUpdate(long,class Vector<float,3> &,int) */

int __thiscall
CServer::AddPlayerUpdate(CServer *this,long param_1,Vector<float,3> *param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10b640  994  ?AddPlayerUpdate@CServer@@QAEHJAAV?$Vector@M$02@@H@Z */
  puStack_8 = &LAB_36217ce6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((_DAT_362e533c & 1) == 0) {
    _DAT_362e533c = _DAT_362e533c | 1;
    local_4 = 0;
    ExceptionList = &pvStack_c;
    CNetworkMessage::CNetworkMessage((CNetworkMessage *)&DAT_362e5324);
    _atexit((_func_4879 *)&LAB_36220ad0);
  }
  local_4 = 0xffffffff;
  iVar5 = 0;
  bVar2 = false;
  CNetworkMessage::Reinit((CNetworkMessage *)&DAT_362e5324);
  do {
    iVar4 = *(int *)(*(int *)(this + 0x10) + 0xa4 + iVar5);
    if (iVar4 != -1) {
      iVar3 = FUN_36109550((undefined4 *)(iVar4 * 0x60 + *(int *)(this + 8)));
      if (iVar3 != 0) {
        piVar1 = *(int **)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + 4 + iVar5);
        CNetworkMessage::Reinit((CNetworkMessage *)&DAT_362e5324);
        if (piVar1 != (int *)0x0) {
          if ((param_1 == iVar4) || (param_3 != 0)) {
            if (!bVar2) {
              *(int *)param_2 = piVar1[0xf];
              *(int *)(param_2 + 4) = piVar1[0x10];
              bVar2 = true;
              *(int *)(param_2 + 8) = piVar1[0x11];
            }
            (**(code **)(*piVar1 + 0x1a8))(&DAT_362e5324);
          }
          else {
            (**(code **)(*piVar1 + 0x1b0))(&DAT_362e5324);
          }
          CEntityMessage::WritePlayerUpdate
                    ((CEntityMessage *)(this + 0x38cc),(ulong *)(piVar1 + 7),
                     (CNetworkMessage *)&DAT_362e5324);
          *(float *)(this + 0x38f0) =
               *(float *)(*(int *)(_pNetwork + 0x24) + 0x2c) - CTimer::TickQuantum;
          iVar4 = FUN_36100ae0(this + 0x38f4,(int *)(this + 0x38cc),0);
          if (iVar4 == 0) {
            ExceptionList = pvStack_c;
            return 0;
          }
        }
      }
    }
    iVar5 = iVar5 + 0x100;
    if (0x1fff < iVar5) {
      if (!bVar2) {
        *(undefined4 *)param_2 = 0;
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined4 *)(param_2 + 8) = 0;
      }
      CEntityMessage::WriteBasePosition((CEntityMessage *)(this + 0x38cc),param_2);
      *(float *)(this + 0x38f0) =
           *(float *)(*(int *)(_pNetwork + 0x24) + 0x2c) - CTimer::TickQuantum;
      iVar5 = FUN_36100ae0(this + 0x38f4,(int *)(this + 0x38cc),0);
      ExceptionList = pvStack_c;
      return (uint)(iVar5 != 0);
    }
  } while( true );
}

