
/* public: int __thiscall CServer::PrepareDemoData(float) */

int __thiscall CServer::PrepareDemoData(CServer *this,float param_1)

{
  CServer *this_00;
  CServer *pCVar1;
  CEntityMessage *this_01;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iStack_58;
  CNetworkMessage *pCStack_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  float fStack_38;
  ulong uStack_34;
  int local_30;
  void *local_2c;
  int local_28;
  void *local_24;
  int local_20;
  void *local_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10be90  2819  ?PrepareDemoData@CServer@@QAEHM@Z */
  puStack_8 = &LAB_36217d44;
  pvStack_c = ExceptionList;
  param_1 = param_1 - CTimer::TickQuantum;
  iVar3 = 0;
  local_28 = 0;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = (void *)0x0;
  local_30 = 0;
  local_2c = (void *)0x0;
  this_00 = this + 0x38f4;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)(this + 0x38f4) + 4))();
  FUN_36100c30(this_00,0);
  iVar5 = *(int *)(this + 0x38c8) + -1;
  fStack_18 = 0.0;
  uStack_14 = 0;
  uStack_10 = 0;
  if (iVar5 < 0) {
    iVar5 = *(int *)(this + 0x38c8) + 599;
  }
  iVar2 = FUN_36100db0(this + 0x1c84,param_1,&fStack_50);
  if (iVar2 == 0) {
    iVar2 = FUN_36100cb0(this + 0x1c84,fStack_50,&iStack_40);
    if ((iStack_40 != iVar5) && (iVar2 != 2)) {
      do {
        iVar3 = iVar3 + (uint)*(ushort *)(this + iStack_40 * 0xc + 0x1caa);
        iStack_40 = (iStack_40 + 1) % 600;
      } while (iStack_40 != iVar5);
      if (iVar3 == 0) {
        FUN_36100c30(this_00,CTimer::TickQuantum);
        iVar3 = AddPlayerUpdate(this,0x20,(Vector<float,3> *)&fStack_18,1);
        if (iVar3 != 0) {
LAB_3610c2f5:
          FUN_36063a80(&local_30);
          FUN_36063a80(&local_20);
          FUN_3600fa30(&local_28);
          ExceptionList = pvStack_c;
          return 1;
        }
      }
      else {
        FUN_36100d30(this + 0x1c84,fStack_50,&iStack_3c);
        FUN_36100d30(this + 0x1c84,*(float *)(this + iVar5 * 0xc + 0x1ca0),&iStack_48);
        FUN_36026aa0(&local_28,iVar3);
        FUN_36063ab0(&local_30,iVar3);
        iVar3 = 0;
        iStack_58 = 0;
        iStack_4c = iStack_3c;
        if (iStack_3c != iStack_48) {
          pCVar1 = this + 0x38cc;
          do {
            iVar5 = iStack_4c;
            FUN_36102220(this + 0x1c84,(uint *)pCVar1,(CNetworkMessage *)&iStack_4c);
            if (*(uint *)pCVar1 == 10) {
              *(int *)((int)local_24 + iVar3 * 4) = iVar5;
              iVar3 = iVar3 + 1;
            }
            else {
              iVar5 = FUN_36100ae0(this_00,(int *)pCVar1,0);
              if (iVar5 == 0) goto LAB_3610c2b3;
              if (*(uint *)pCVar1 == 4) {
                *(undefined4 *)((int)local_2c + iStack_58 * 4) = *(undefined4 *)(this + 0x38ec);
                iStack_58 = iStack_58 + 1;
              }
            }
          } while (iStack_4c != iStack_48);
        }
        iVar5 = 0;
        if (0 < iVar3) {
          FUN_36063ab0(&local_20,iVar3);
          iStack_44 = iVar3 + -1;
          if (-1 < iStack_44) {
            pCStack_54 = (CNetworkMessage *)((int)local_24 + iStack_44 * 4);
            this_01 = (CEntityMessage *)(this + 0x38cc);
            pvVar4 = local_1c;
            do {
              FUN_36102220(this + 0x1c84,(uint *)this_01,pCStack_54);
              iVar3 = 0;
              if (0 < iStack_58) {
                do {
                  pvVar4 = local_1c;
                  if (*(int *)((int)local_2c + iVar3 * 4) == *(int *)(this + 0x38ec))
                  goto LAB_3610c27f;
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iStack_58);
              }
              iVar3 = 0;
              if (0 < iVar5) {
                do {
                  if (*(int *)((int)pvVar4 + iVar3 * 4) == *(int *)(this + 0x38ec))
                  goto LAB_3610c27f;
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar5);
              }
              *(undefined4 *)((int)pvVar4 + iVar5 * 4) = *(undefined4 *)(this + 0x38ec);
              iVar5 = iVar5 + 1;
              CEntityMessage::ReadPlacementNotify(this_01,&uStack_34,(uchar *)&param_1);
              if (param_1._0_1_ == '\0') {
                fStack_38 = *(float *)(_pTimer + 0xc);
                iVar3 = FUN_36103350(_pNetwork + 0x124c,0x20,fStack_38,
                                     *(undefined4 *)(this + 0x38ec),this_01,&fStack_18);
                if (iVar3 != 0) {
                  *(undefined4 *)(this + 0x38f0) =
                       *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x2c);
                  iVar3 = FUN_36100ae0(this_00,(int *)this_01,0);
                  if (iVar3 == 0) {
                    if (local_30 != 0) {
                      operator_delete__(local_2c);
                    }
                    if (local_20 != 0) {
                      operator_delete__(pvVar4);
                    }
                    if (local_28 == 0) {
                      ExceptionList = pvStack_c;
                      return 0;
                    }
                    operator_delete__(local_24);
                    ExceptionList = pvStack_c;
                    return 0;
                  }
                }
              }
              else {
                FUN_361033c0(_pNetwork + 0x124c,0x20,*(undefined4 *)(this + 0x38ec),this_01,
                             &fStack_18);
                *(undefined4 *)(this + 0x38f0) = *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x2c);
                iVar3 = FUN_36100ae0(this_00,(int *)this_01,0);
                if (iVar3 == 0) {
                  if (local_30 != 0) {
                    operator_delete__(local_2c);
                  }
                  if (local_20 != 0) {
                    operator_delete__(pvVar4);
                  }
                  if (local_28 == 0) {
                    ExceptionList = pvStack_c;
                    return 0;
                  }
                  operator_delete__(local_24);
                  ExceptionList = pvStack_c;
                  return 0;
                }
              }
LAB_3610c27f:
              iStack_44 = iStack_44 + -1;
              pCStack_54 = pCStack_54 + -4;
            } while (-1 < iStack_44);
          }
        }
        iVar3 = AddPlayerUpdate(this,0x20,(Vector<float,3> *)&fStack_18,1);
        if (iVar3 != 0) {
          FUN_36100c30(this_00,CTimer::TickQuantum);
          goto LAB_3610c2f5;
        }
      }
LAB_3610c2b3:
      FUN_36063a80(&local_30);
      FUN_36063a80(&local_20);
      FUN_3600fa30(&local_28);
      ExceptionList = pvStack_c;
      return 0;
    }
    iVar3 = AddPlayerUpdate(this,0x20,(Vector<float,3> *)&fStack_18,1);
  }
  else {
    iVar3 = AddPlayerUpdate(this,0x20,(Vector<float,3> *)&fStack_18,1);
  }
  if (iVar3 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  FUN_36100c30(this_00,CTimer::TickQuantum);
  ExceptionList = pvStack_c;
  return 1;
}

