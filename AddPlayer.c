
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CSessionState::AddPlayer(long,int) */

void __thiscall CSessionState::AddPlayer(CSessionState *this,long param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  CPlayerEntity *pCVar3;
  int *piVar4;
  char *pcVar5;
  CEntity *this_00;
  int iVar6;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  ulong local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  char *local_68;
  undefined4 local_64;
  uchar local_60;
  undefined3 uStack_5f;
  CPlayerCharacter local_5c [16];
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  long local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1103a0  993  ?AddPlayer@CSessionState@@QAEXJH@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_362180ec;
  local_10 = ExceptionList;
  local_18 = DAT_362abd90;
  local_78 = *(ulong *)(_pNetwork + 0x1314);
  local_14 = &stack0xffffff54;
  ExceptionList = &local_10;
  *(ulong *)(_pNetwork + 0x1314) = local_78 + 1;
  *(ulong *)(this + param_1 * 4 + 0x1d20) = local_78;
  iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  iVar6 = 0;
  local_60 = *(uchar *)(param_1 * 0x37c + 0x1ee + iVar2);
  CPlayerCharacter::CPlayerCharacter(local_5c);
  local_8 = 0;
  if (*(int *)(this + 0x84) == 1) {
    pCVar3 = CNetworkLibrary::GetNthPlayerEntity(_pNetwork,0);
    **(undefined4 **)(*(int *)(_pNetwork + 0x18) + 0x10) = 0;
    local_60 = '\0';
  }
  else {
    do {
      pCVar3 = CNetworkLibrary::GetNthPlayerEntityWithName(_pNetwork,(CTString *)&local_4c,iVar6);
      bVar1 = false;
      if (pCVar3 != (CPlayerEntity *)0x0) {
        piVar4 = *(int **)(*(int *)(_pNetwork + 0x18) + 0x10);
        iVar2 = 0;
        do {
          if ((*piVar4 != 0) && ((CPlayerEntity *)piVar4[1] == pCVar3)) {
            bVar1 = true;
            break;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 0x40;
        } while (iVar2 < 0x20);
      }
      iVar6 = iVar6 + 1;
    } while (bVar1);
  }
  iVar2 = param_1 * 0x100;
  FUN_36109090((void *)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + iVar2),param_1);
  local_1c = param_1;
  if (pCVar3 == (CPlayerEntity *)0x0) {
    local_8._0_1_ = 1;
    pcVar5 = StringDuplicate(s_Classes_Player_ecl_36237530);
    local_8._0_1_ = 2;
    local_68 = StringDuplicate(pcVar5);
    local_64 = 0;
    local_8._0_1_ = 4;
    StringFree(pcVar5);
    local_84 = 0;
    local_9c = 0;
    local_80 = 0;
    local_98 = 0;
    local_74 = 0;
    local_70 = 0;
    local_7c = 0;
    local_90 = 0;
    local_8c = 0;
    local_94 = 0;
    local_6c = 0;
    local_88 = 0;
    this_00 = CWorld::CreateEntity_t
                        ((CWorld *)(_pNetwork + 0x11e4),(CPlacement3D *)&local_9c,
                         (CTFileName *)&local_68,local_78,0);
    FUN_36109100((void *)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + iVar2),this_00);
    CPlayerCharacter::operator=((CPlayerCharacter *)(this_00 + 0x368),local_5c);
    CPlayerEntity::InitializePlayer((CPlayerEntity *)this_00,param_1,local_60,param_2);
    local_8 = CONCAT31(local_8._1_3_,1);
    StringFree(local_68);
  }
  else {
    FUN_36109100((void *)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + iVar2),pCVar3);
    (**(code **)(*(int *)pCVar3 + 0x1cc))(local_5c);
  }
  local_8 = 8;
  StringFree(local_40);
  local_8._0_1_ = 7;
  StringFree(local_44);
  local_8 = CONCAT31(local_8._1_3_,6);
  StringFree(local_48);
  local_8 = 0xffffffff;
  StringFree(local_4c);
  ExceptionList = local_10;
  return;
}

