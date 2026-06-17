
void __cdecl FUN_361731d0(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  byte *pbVar16;
  int local_28;
  int local_20;
  int local_1c;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  uVar15 = *(int *)(iVar2 + 0x18) - 1;
  uVar6 = *(int *)(iVar2 + 0x1c) - 1;
  uVar8 = 1;
  if (_bWorldEditorApp != 0) {
    uVar8 = 3;
  }
  FUN_36176aa0(*(CAnimData **)(iVar2 + 0xc),uVar15,uVar6,uVar8);
  iVar3 = *(int *)(iVar2 + 8);
  iVar4 = *(int *)(*(int *)(iVar2 + 0xc) + 0x60);
  if (param_2 == 0) {
    iVar7 = 0;
    if (0 < (int)(uVar6 * uVar15)) {
      do {
        *(uint *)(iVar4 + iVar7 * 4) = (uint)*(byte *)(iVar7 + iVar3) << 0x18 | 0xffffff;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)(uVar6 * uVar15));
    }
  }
  else {
    local_1c = FUN_361743e0((undefined4 *)(iVar2 + 0x100));
    if (0 < local_1c) {
      local_28 = 0;
      do {
        iVar7 = *(int *)(iVar2 + 0x104);
        iVar10 = *(int *)(iVar7 + 0x38 + local_28);
        iVar5 = *(int *)(iVar7 + 0x3c + local_28);
        puVar9 = (uint *)(iVar7 + local_28);
        iVar12 = (*(int *)(iVar7 + 0x40 + local_28) - iVar10) + -1;
        local_20 = (puVar9[0x11] - iVar5) + -1;
        iVar13 = local_20 * iVar12;
        param_2 = 0;
        iVar7 = 0;
        if (0 < local_20) {
          iVar10 = iVar5 * uVar15 + iVar10;
          param_1 = (byte *)(iVar3 + iVar10);
          puVar11 = (uint *)(iVar4 + iVar10 * 4);
          do {
            iVar7 = iVar12;
            puVar14 = puVar11;
            pbVar16 = param_1;
            if (0 < iVar12) {
              do {
                bVar1 = *pbVar16;
                *puVar14 = (uint)bVar1 << 0x18 | 0xffffff;
                if (0x7f < bVar1) {
                  param_2 = param_2 + 1;
                }
                iVar7 = iVar7 + -1;
                puVar14 = puVar14 + 1;
                pbVar16 = pbVar16 + 1;
              } while (iVar7 != 0);
            }
            puVar11 = puVar11 + uVar15;
            param_1 = param_1 + uVar15;
            local_20 = local_20 + -1;
            iVar7 = param_2;
          } while (local_20 != 0);
        }
        uVar8 = *puVar9 & 0xfffffffc;
        *puVar9 = uVar8;
        if (iVar7 == 0) {
          uVar8 = uVar8 | 1;
LAB_36173343:
          *puVar9 = uVar8;
        }
        else if (iVar7 == iVar13) {
          uVar8 = uVar8 | 2;
          goto LAB_36173343;
        }
        local_28 = local_28 + 0x160;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  FUN_361754e0(*(CTextureData **)(iVar2 + 0xc),uVar15,uVar6);
  return;
}

