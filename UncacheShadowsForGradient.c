
/* public: void __thiscall CEntity::UncacheShadowsForGradient(long) */

void __thiscall CEntity::UncacheShadowsForGradient(CEntity *this,long param_1)

{
  int *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x127bf0  3872  ?UncacheShadowsForGradient@CEntity@@QAEXJ@Z */
  puStack_8 = &LAB_3621899d;
  local_c = ExceptionList;
  if (*(int *)(this + 4) == 4) {
    ExceptionList = &local_c;
    for (piVar3 = *(int **)(*(int *)(this + 0x7c) + 0x674); iVar2 = 0, *piVar3 != 0;
        piVar3 = (int *)*piVar3) {
      this_00 = piVar3 + -6;
      local_4 = 0;
      iVar1 = FUN_36043600((int)this_00);
      if (0 < iVar1) {
        do {
          iVar1 = FUN_36043710(this_00,iVar2);
          iVar4 = 0;
          local_4 = CONCAT31(local_4._1_3_,1);
          if (0 < *(int *)(iVar1 + 0x18)) {
            do {
              if ((uint)*(byte *)(iVar4 * 0x1d0 + 0x18c + *(int *)(iVar1 + 0x1c)) == param_1) {
                CShadowMap::Uncache((CShadowMap *)(iVar4 * 0x1d0 + *(int *)(iVar1 + 0x1c) + 0xd0));
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(iVar1 + 0x18));
          }
          iVar2 = iVar2 + 1;
          iVar1 = FUN_36043600((int)this_00);
        } while (iVar2 < iVar1);
      }
    }
  }
  ExceptionList = local_c;
  return;
}

