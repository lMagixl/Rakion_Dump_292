
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CSessionState::AddRemotePlayer(unsigned char,unsigned short,char *) */

void __thiscall
CSessionState::AddRemotePlayer(CSessionState *this,uchar param_1,ushort param_2,char *param_3)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  CEntity *pCVar5;
  undefined3 in_stack_00000005;
  undefined1 auStack_9e4 [512];
  CNetMessage aCStack_7e4 [1008];
  CNetMessage aCStack_3f4 [1008];
  undefined4 local_4;
  
                    /* 0x112f80  1008  ?AddRemotePlayer@CSessionState@@QAEXEGPAD@Z */
  local_4 = DAT_362abd90;
  uVar2 = (uint)param_1;
  iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  if (*(int *)(iVar4 + 0x48a4 + uVar2 * 4) == 0) {
    AddPlayer(this,uVar2,0);
    if (param_2 != 0) {
      CNetMessage::CNetMessage(aCStack_7e4);
      CNetMessage::Write(aCStack_7e4,param_3,param_2);
      pCVar5 = GetPlayer(this,param_1);
      if (pCVar5 != (CEntity *)0x0) {
        (**(code **)(*(int *)pCVar5 + 0x118))(aCStack_7e4);
      }
    }
    CNetMessage::CNetMessage(aCStack_3f4);
    iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    pCVar5 = GetPlayer(this,*(uchar *)(iVar4 + 0x475c));
    if (pCVar5 != (CEntity *)0x0) {
      (**(code **)(*(int *)pCVar5 + 0x114))(aCStack_3f4);
    }
    uVar3 = CNetMessage::Read(aCStack_3f4,auStack_9e4,0x200);
    (**(code **)(*(int *)_pRakionWorldNet + 0x134))(_param_1,uVar3,auStack_9e4);
    iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    uVar1 = *(ulong *)(iVar4 + 0x1e8 + uVar2 * 0x37c);
    iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    uVar3 = *(ushort *)(iVar4 + 0x1ec + uVar2 * 0x37c);
    SendInfoCreateNpcTo(this,uVar1,uVar3,param_1);
    iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    if (*(char *)(iVar4 + 0x475c) == *(char *)(iVar4 + 0x2e)) {
      SendInfoCreateMapNpcTo(this,uVar1,uVar3,param_1);
      SendInfoCreateMasterGolemTo(this,uVar1,uVar3,param_1);
      SendInfoMapItemStatus(this,uVar1,uVar3,param_1);
    }
  }
  return;
}

