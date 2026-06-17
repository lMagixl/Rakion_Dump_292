
void __cdecl FUN_361768e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar2 = *(int *)(iVar1 + 0x18) + -1;
  local_8 = FUN_361743e0((undefined4 *)(iVar1 + 0x100));
  if (0 < local_8) {
    local_c = 0;
    do {
      puVar9 = (uint *)(*(int *)(iVar1 + 0x104) + local_c);
      uVar5 = *(uint *)(*(int *)(iVar1 + 0x104) + local_c) & 0xfffffffc;
      *puVar9 = uVar5;
      puVar9[1] = 0xffffffff;
      iVar8 = (puVar9[0x10] - puVar9[0xe]) + -1;
      iVar7 = (puVar9[0x11] - puVar9[0xf]) + -1;
      if (iVar7 < 1) {
LAB_361769a8:
        uVar5 = uVar5 | 1;
LAB_361769bc:
        *puVar9 = uVar5;
      }
      else {
        iVar10 = 0;
        iVar3 = puVar9[0xf] * iVar2 + *(int *)(iVar1 + 8) + puVar9[0xe];
        local_10 = iVar7;
        do {
          iVar4 = 0;
          if (0 < iVar8) {
            do {
              if (0x7f < *(byte *)(iVar3 + iVar4)) {
                iVar10 = iVar10 + 1;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar8);
          }
          iVar3 = iVar3 + iVar2;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
        if (iVar10 == 0) goto LAB_361769a8;
        if (iVar10 == iVar7 * iVar8) {
          uVar5 = uVar5 | 2;
          goto LAB_361769bc;
        }
      }
      iVar10 = FUN_36172d20((undefined4 *)(iVar1 + 0x108));
      local_10 = 0;
      if (0 < iVar10) {
        local_14 = 0;
        do {
          iVar3 = 0;
          if (0 < iVar7) {
            iVar6 = puVar9[0xf] * iVar2 +
                    *(int *)(*(int *)(local_14 + *(int *)(iVar1 + 0x10c)) + 0x30) + puVar9[0xe];
            iVar4 = iVar7;
            do {
              iVar11 = 0;
              if (0 < iVar8) {
                do {
                  if (*(char *)(iVar6 + iVar11) != '\0') {
                    iVar3 = iVar3 + 1;
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar8);
              }
              iVar6 = iVar6 + iVar2;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (local_14 < 0x1280) {
            uVar5 = 1 << ((byte)local_10 & 0x1f);
            if (iVar3 == 0) {
              uVar5 = puVar9[1] & ~uVar5;
            }
            else {
              uVar5 = puVar9[1] | uVar5;
            }
            puVar9[1] = uVar5;
          }
          local_10 = local_10 + 1;
          local_14 = local_14 + 0x94;
        } while (local_10 < iVar10);
      }
      local_c = local_c + 0x160;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

