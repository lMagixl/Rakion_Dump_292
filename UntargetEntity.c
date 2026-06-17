
/* public: void __thiscall CWorld::UntargetEntity(class CEntity *) */

void __thiscall CWorld::UntargetEntity(CWorld *this,CEntity *param_1)

{
  CEntity *pCVar1;
  CWorld *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  CEntity *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc8380  3897  ?UntargetEntity@CWorld@@QAEXPAVCEntity@@@Z */
  puStack_8 = &LAB_3621447c;
  local_c = ExceptionList;
  this_00 = this + 0x15c;
  iVar6 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar3 = FUN_360caf20((int)this_00);
  if (0 < iVar3) {
    do {
      iVar3 = FUN_360cafb0(this_00,iVar6);
      for (iVar3 = *(int *)(*(int *)(iVar3 + 0x78) + 0x20); iVar3 != 0;
          iVar3 = *(int *)(iVar3 + 0x2c)) {
        local_1c = 0;
        if (0 < *(int *)(iVar3 + 0xc)) {
          local_20 = 0;
          do {
            iVar2 = *(int *)(iVar3 + 8);
            if (*(int *)(iVar2 + local_20) == 7) {
              iVar4 = FUN_360cafb0(this_00,iVar6);
              iVar2 = *(int *)(iVar2 + local_20 + 0xc);
              puVar7 = (undefined4 *)(iVar4 + iVar2);
              if (*(CEntity **)(iVar4 + iVar2) == param_1) {
                pCVar5 = (CEntity *)FUN_360cafb0(this_00,iVar6);
                CEntity::End(pCVar5);
                pCVar5 = (CEntity *)*puVar7;
                if (pCVar5 != (CEntity *)0x0) {
                  pCVar1 = pCVar5 + 0x18;
                  *(int *)pCVar1 = *(int *)pCVar1 + -1;
                  if (*(int *)pCVar1 == 0) {
                    CEntity::DeleteSelf(pCVar5);
                  }
                }
                *puVar7 = 0;
                pCVar5 = (CEntity *)FUN_360cafb0(this_00,iVar6);
                CEntity::Initialize(pCVar5,_eeVoid,1);
              }
            }
            local_1c = local_1c + 1;
            local_20 = local_20 + 0x20;
          } while (local_1c < *(int *)(iVar3 + 0xc));
        }
      }
      iVar6 = iVar6 + 1;
      iVar3 = FUN_360caf20((int)this_00);
    } while (iVar6 < iVar3);
  }
  local_4 = 0xffffffff;
  if (*(CEntity **)(this + 0x9c) == param_1) {
    SetBackgroundViewer(this,(CEntity *)0x0);
  }
  ExceptionList = local_c;
  return;
}

