
/* public: void __thiscall CWorld::CacheShadowMaps(void) */

void __thiscall CWorld::CacheShadowMaps(CWorld *this)

{
  int *this_00;
  CShadowMap *this_01;
  int iVar1;
  int iVar2;
  void *this_02;
  int iVar3;
  int *piVar4;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0xd8b10  1119  ?CacheShadowMaps@CWorld@@QAEXXZ */
  puStack_8 = &LAB_362150c8;
  local_c = ExceptionList;
  this_02 = (void *)(*(int *)(this + 0x34) + 0x14);
  local_1c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360cb6c0((int)this_02);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb850(this_02,local_1c);
      if (*(int *)(iVar1 + 0x668) != 0) {
        iVar1 = FUN_360cb850(this_02,local_1c);
        piVar4 = *(int **)(iVar1 + 0x674);
        while (*piVar4 != 0) {
          this_00 = piVar4 + -6;
          iVar2 = 0;
          iVar1 = FUN_36043600((int)this_00);
          if (0 < iVar1) {
            do {
              iVar1 = FUN_36043710(this_00,iVar2);
              iVar3 = 0;
              local_4 = CONCAT31(local_4._1_3_,2);
              if (0 < *(int *)(iVar1 + 0x18)) {
                do {
                  this_01 = (CShadowMap *)(iVar3 * 0x1d0 + 0xd0 + *(int *)(iVar1 + 0x1c));
                  (**(code **)(*(int *)(iVar3 * 0x1d0 + 0xd0 + *(int *)(iVar1 + 0x1c)) + 4))();
                  CShadowMap::Prepare(this_01);
                  CShadowMap::SetAsCurrent(this_01);
                  iVar3 = iVar3 + 1;
                } while (iVar3 < *(int *)(iVar1 + 0x18));
              }
              iVar2 = iVar2 + 1;
              iVar1 = FUN_36043600((int)this_00);
            } while (iVar2 < iVar1);
          }
          piVar4 = (int *)*piVar4;
          local_4 = local_4 & 0xffffff00;
        }
      }
      local_1c = local_1c + 1;
      iVar1 = FUN_360cb6c0((int)this_02);
    } while (local_1c < iVar1);
  }
  ExceptionList = local_c;
  return;
}

