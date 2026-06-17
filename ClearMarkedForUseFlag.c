
/* public: void __thiscall CWorld::ClearMarkedForUseFlag(void) */

void __thiscall CWorld::ClearMarkedForUseFlag(CWorld *this)

{
  int *this_00;
  CWorld *this_01;
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
                    /* 0xc8ef0  1265  ?ClearMarkedForUseFlag@CWorld@@QAEXXZ */
  this_01 = this + 0x15c;
  local_8 = 0;
  iVar2 = FUN_360caf20((int)this_01);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_360cafb0(this_01,local_8);
      if (*(int *)(iVar2 + 4) == 4) {
        iVar2 = FUN_360cafb0(this_01,local_8);
        for (piVar4 = *(int **)(*(int *)(iVar2 + 0x7c) + 0x674); *piVar4 != 0;
            piVar4 = (int *)*piVar4) {
          this_00 = piVar4 + -6;
          iVar6 = 0;
          iVar2 = FUN_36043600((int)this_00);
          if (0 < iVar2) {
            do {
              iVar2 = FUN_36043710(this_00,iVar6);
              iVar3 = 0;
              if (0 < *(int *)(iVar2 + 0x18)) {
                iVar5 = 0;
                do {
                  pbVar1 = (byte *)(*(int *)(iVar2 + 0x1c) + 0xcb + iVar5);
                  *pbVar1 = *pbVar1 & 0x7f;
                  iVar3 = iVar3 + 1;
                  iVar5 = iVar5 + 0x1d0;
                } while (iVar3 < *(int *)(iVar2 + 0x18));
              }
              iVar6 = iVar6 + 1;
              iVar2 = FUN_36043600((int)this_00);
            } while (iVar6 < iVar2);
          }
        }
      }
      local_8 = local_8 + 1;
      iVar2 = FUN_360caf20((int)this_01);
    } while (local_8 < iVar2);
  }
  return;
}

