
/* public: void __thiscall CBrushArchive::MakeIndices(void) */

void __thiscall CBrushArchive::MakeIndices(CBrushArchive *this)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_10;
  int local_8;
  
                    /* 0x135f50  2608  ?MakeIndices@CBrushArchive@@QAEXXZ */
  local_10 = 0;
  iVar6 = 0;
  local_8 = 0;
  iVar1 = FUN_360cb6c0((int)(this + 0x14));
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb850(this + 0x14,local_8);
      for (piVar2 = *(int **)(iVar1 + 0x674); *piVar2 != 0; piVar2 = (int *)*piVar2) {
        piVar7 = piVar2 + -6;
        iVar8 = 0;
        iVar1 = FUN_36043600((int)piVar7);
        if (0 < iVar1) {
          do {
            iVar1 = FUN_36043710(piVar7,iVar8);
            if (0 < *(int *)(iVar1 + 0x18)) {
              iVar5 = 0;
              iVar4 = 0;
              do {
                *(int *)(iVar5 + 0x1c8 + *(int *)(iVar1 + 0x1c)) = iVar6;
                iVar6 = iVar6 + 1;
                iVar4 = iVar4 + 1;
                iVar5 = iVar5 + 0x1d0;
              } while (iVar4 < *(int *)(iVar1 + 0x18));
            }
            iVar1 = FUN_36043710(piVar7,iVar8);
            *(int *)(iVar1 + 0xac) = local_10;
            local_10 = local_10 + 1;
            iVar8 = iVar8 + 1;
            iVar1 = FUN_36043600((int)piVar7);
          } while (iVar8 < iVar1);
        }
      }
      local_8 = local_8 + 1;
      iVar1 = FUN_360cb6c0((int)(this + 0x14));
    } while (local_8 < iVar1);
  }
  if (*(int *)(this + 0x38) != 0) {
    operator_delete__(*(void **)(this + 0x3c));
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  if (iVar6 != 0) {
    *(int *)(this + 0x38) = iVar6;
    uVar3 = thunk_FUN_361bf99c(iVar6 * 4 + 4);
    *(undefined4 *)(this + 0x3c) = uVar3;
  }
  if (*(int *)(this + 0x40) != 0) {
    operator_delete__(*(void **)(this + 0x44));
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  if (local_10 != 0) {
    *(int *)(this + 0x40) = local_10;
    uVar3 = thunk_FUN_361bf99c(local_10 * 4 + 4);
    *(undefined4 *)(this + 0x44) = uVar3;
  }
  local_8 = 0;
  iVar1 = FUN_360cb6c0((int)(this + 0x14));
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb850(this + 0x14,local_8);
      for (piVar2 = *(int **)(iVar1 + 0x674); *piVar2 != 0; piVar2 = (int *)*piVar2) {
        iVar6 = 0;
        iVar1 = FUN_36043600((int)(piVar2 + -6));
        if (0 < iVar1) {
          do {
            piVar7 = piVar2 + -6;
            uVar3 = FUN_36043710(piVar7,iVar6);
            iVar1 = FUN_36043710(piVar7,iVar6);
            *(undefined4 *)(*(int *)(this + 0x44) + *(int *)(iVar1 + 0xac) * 4) = uVar3;
            iVar1 = FUN_36043710(piVar7,iVar6);
            iVar8 = 0;
            if (0 < *(int *)(iVar1 + 0x18)) {
              iVar4 = 0;
              do {
                *(int *)(*(int *)(this + 0x3c) +
                        *(int *)(*(int *)(iVar1 + 0x1c) + 0x1c8 + iVar4) * 4) =
                     *(int *)(iVar1 + 0x1c) + iVar4;
                iVar8 = iVar8 + 1;
                iVar4 = iVar4 + 0x1d0;
              } while (iVar8 < *(int *)(iVar1 + 0x18));
            }
            iVar6 = iVar6 + 1;
            iVar1 = FUN_36043600((int)(piVar2 + -6));
          } while (iVar6 < iVar1);
        }
      }
      local_8 = local_8 + 1;
      iVar1 = FUN_360cb6c0((int)(this + 0x14));
    } while (local_8 < iVar1);
  }
  return;
}

