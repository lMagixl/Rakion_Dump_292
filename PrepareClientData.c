
/* public: int __thiscall CServer::PrepareClientData(long) */

int __thiscall CServer::PrepareClientData(CServer *this,long param_1)

{
  CEntityMessage *this_00;
  int iVar1;
  int iVar2;
  CServer *pCVar3;
  int iVar4;
  void *pvVar5;
  uchar uStack_5d;
  CServer *local_5c;
  int iStack_58;
  CNetworkMessage *pCStack_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  float local_44;
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
  Vector<float,3> aVStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10b850  2818  ?PrepareClientData@CServer@@QAEHJ@Z */
  puStack_8 = &LAB_36217d08;
  pvStack_c = ExceptionList;
  local_44 = *(float *)(param_1 * 0x60 + 0x50 + *(int *)(this + 8));
  iVar4 = 0;
  local_20 = 0;
  local_1c = (void *)0x0;
  local_28 = 0;
  local_24 = (void *)0x0;
  local_30 = 0;
  local_2c = (void *)0x0;
  pCVar3 = this + 0x38f4;
  local_4 = 2;
  ExceptionList = &pvStack_c;
  local_5c = pCVar3;
  (**(code **)(*(int *)(this + 0x38f4) + 4))();
  FUN_36100c30(pCVar3,0);
  iVar1 = AddPlayerUpdate(this,param_1,aVStack_18,0);
  if (iVar1 == 0) {
    ExceptionList = pvStack_c;
    return 0;
  }
  iVar1 = *(int *)(this + 0x1c80) + -1;
  if (iVar1 < 0) {
    iVar1 = *(int *)(this + 0x1c80) + 599;
  }
  iVar2 = FUN_36100db0(this + 0x3c,local_44,&fStack_50);
  if (((iVar2 == 0) && (iVar2 = FUN_36100cb0(this + 0x3c,fStack_50,&iStack_40), iStack_40 != iVar1))
     && (iVar2 != 2)) {
    do {
      iVar4 = iVar4 + (uint)*(ushort *)(this + iStack_40 * 0xc + 0x62);
      iStack_40 = (iStack_40 + 1) % 600;
    } while (iStack_40 != iVar1);
    if (iVar4 != 0) {
      FUN_36100d30(this + 0x3c,fStack_50,&iStack_3c);
      FUN_36100d30(this + 0x3c,*(float *)(this + iVar1 * 0xc + 0x58),&iStack_48);
      FUN_36026aa0(&local_20,iVar4);
      FUN_36063ab0(&local_30,iVar4);
      iVar1 = 0;
      iStack_58 = 0;
      iStack_4c = iStack_3c;
      if (iStack_3c != iStack_48) {
        pCVar3 = this + 0x38cc;
        do {
          iVar4 = iStack_4c;
          FUN_36102220(this + 0x3c,(uint *)pCVar3,(CNetworkMessage *)&iStack_4c);
          if (*(uint *)pCVar3 == 10) {
            *(int *)((int)local_1c + iVar1 * 4) = iVar4;
            iVar1 = iVar1 + 1;
          }
          else {
            iVar4 = FUN_36100ae0(local_5c,(int *)pCVar3,0);
            if (iVar4 == 0) goto LAB_3610bbac;
            if (*(uint *)pCVar3 == 4) {
              *(undefined4 *)((int)local_2c + iStack_58 * 4) = *(undefined4 *)(this + 0x38ec);
              iStack_58 = iStack_58 + 1;
            }
          }
        } while (iStack_4c != iStack_48);
      }
      iVar4 = 0;
      pCVar3 = local_5c;
      if (0 < iVar1) {
        FUN_36063ab0(&local_28,iVar1);
        local_44 = (float)(iVar1 + -1);
        pCVar3 = local_5c;
        if (-1 < (int)local_44) {
          pCStack_54 = (CNetworkMessage *)((int)local_1c + (int)local_44 * 4);
          this_00 = (CEntityMessage *)(this + 0x38cc);
          pvVar5 = local_24;
          do {
            FUN_36102220(this + 0x3c,(uint *)this_00,pCStack_54);
            iVar1 = 0;
            if (0 < iStack_58) {
              do {
                pvVar5 = local_24;
                if (*(int *)((int)local_2c + iVar1 * 4) == *(int *)(this + 0x38ec))
                goto LAB_3610bbe2;
                iVar1 = iVar1 + 1;
              } while (iVar1 < iStack_58);
            }
            iVar1 = 0;
            if (0 < iVar4) {
              do {
                if (*(int *)((int)pvVar5 + iVar1 * 4) == *(int *)(this + 0x38ec)) goto LAB_3610bbe2;
                iVar1 = iVar1 + 1;
              } while (iVar1 < iVar4);
            }
            *(undefined4 *)((int)pvVar5 + iVar4 * 4) = *(undefined4 *)(this + 0x38ec);
            iVar4 = iVar4 + 1;
            CEntityMessage::ReadPlacementNotify(this_00,&uStack_34,&uStack_5d);
            if (uStack_5d == '\0') {
              fStack_38 = *(float *)(_pTimer + 0xc);
              iVar1 = FUN_36103350(_pNetwork + 0x124c,param_1,fStack_38,
                                   *(undefined4 *)(this + 0x38ec),this_00,(float *)aVStack_18);
              if (iVar1 != 0) {
                *(undefined4 *)(this + 0x38f0) = *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x2c);
                iVar1 = FUN_36100ae0(local_5c,(int *)this_00,0);
                if (iVar1 == 0) {
LAB_3610bbac:
                  FUN_36063a80(&local_30);
                  FUN_36063a80(&local_28);
                  FUN_3600fa30(&local_20);
                  ExceptionList = pvStack_c;
                  return 0;
                }
              }
            }
            else {
              FUN_361033c0(_pNetwork + 0x124c,param_1,*(undefined4 *)(this + 0x38ec),this_00,
                           (float *)aVStack_18);
              *(undefined4 *)(this + 0x38f0) = *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x2c);
              iVar1 = FUN_36100ae0(local_5c,(int *)this_00,0);
              if (iVar1 == 0) {
                if (local_30 != 0) {
                  operator_delete__(local_2c);
                }
                if (local_28 != 0) {
                  operator_delete__(pvVar5);
                }
                if (local_20 != 0) {
                  operator_delete__(local_1c);
                }
                ExceptionList = pvStack_c;
                return 0;
              }
            }
LAB_3610bbe2:
            local_44 = (float)((int)local_44 + -1);
            pCStack_54 = pCStack_54 + -4;
            pCVar3 = local_5c;
          } while (-1 < (int)local_44);
        }
      }
    }
    FUN_36100c30(pCVar3,CTimer::TickQuantum);
    FUN_36063a80(&local_30);
    FUN_36063a80(&local_28);
    FUN_3600fa30(&local_20);
  }
  else {
    FUN_36100c30(pCVar3,CTimer::TickQuantum);
  }
  ExceptionList = pvStack_c;
  return 1;
}

