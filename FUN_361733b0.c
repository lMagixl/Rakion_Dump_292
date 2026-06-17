
void __cdecl FUN_361733b0(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  byte *pbVar15;
  int local_28;
  uint local_24;
  int local_1c;
  int local_18;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_2 * 0x94 + *(int *)(iVar2 + 0x10c));
  uVar14 = *(int *)(iVar2 + 0x18) - 1;
  uVar10 = *(int *)(iVar2 + 0x1c) - 1;
  local_24 = 1;
  if (_bWorldEditorApp != 0) {
    local_24 = 3;
  }
  FUN_36176aa0(*(CAnimData **)(iVar3 + 0x38),uVar14,uVar10,local_24);
  iVar6 = *(int *)(iVar3 + 0x30);
  iVar8 = *(int *)(*(int *)(iVar3 + 0x38) + 0x60);
  if (param_3 == 0) {
    iVar11 = 0;
    if (0 < (int)(uVar10 * uVar14)) {
      do {
        *(uint *)(iVar8 + iVar11 * 4) = (uint)*(byte *)(iVar11 + iVar6) << 0x18 | 0xffffff;
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uVar10 * uVar14));
    }
    iVar6 = FUN_361743e0((undefined4 *)(iVar2 + 0x100));
    if (0 < iVar6) {
      iVar8 = 0;
      do {
        puVar12 = (uint *)(*(int *)(iVar2 + 0x104) + 4 + iVar8);
        *puVar12 = *puVar12 | 1 << ((byte)param_2 & 0x1f);
        iVar8 = iVar8 + 0x160;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    local_18 = FUN_361743e0((undefined4 *)(iVar2 + 0x100));
    if (0 < local_18) {
      local_28 = 0;
      do {
        iVar11 = *(int *)(iVar2 + 0x104);
        iVar7 = *(int *)(iVar11 + 0x38 + local_28);
        iVar4 = *(int *)(iVar11 + 0x3c + local_28);
        iVar9 = iVar11 + local_28;
        iVar11 = (*(int *)(iVar11 + 0x40 + local_28) - iVar7) + -1;
        local_1c = (*(int *)(iVar9 + 0x44) - iVar4) + -1;
        param_3 = 0;
        if (0 < local_1c) {
          iVar7 = iVar4 * uVar14 + iVar7;
          param_1 = (byte *)(iVar6 + iVar7);
          puVar12 = (uint *)(iVar8 + iVar7 * 4);
          do {
            iVar7 = iVar11;
            puVar13 = puVar12;
            pbVar15 = param_1;
            if (0 < iVar11) {
              do {
                bVar1 = *pbVar15;
                *puVar13 = (uint)bVar1 << 0x18 | 0xffffff;
                if (bVar1 != 0) {
                  param_3 = param_3 + 1;
                }
                iVar7 = iVar7 + -1;
                puVar13 = puVar13 + 1;
                pbVar15 = pbVar15 + 1;
              } while (iVar7 != 0);
            }
            puVar12 = puVar12 + uVar14;
            param_1 = param_1 + uVar14;
            local_1c = local_1c + -1;
          } while (local_1c != 0);
        }
        if (param_2 < 0x20) {
          uVar5 = 1 << ((byte)param_2 & 0x1f);
          if (param_3 == 0) {
            uVar5 = *(uint *)(iVar9 + 4) & ~uVar5;
          }
          else {
            uVar5 = *(uint *)(iVar9 + 4) | uVar5;
          }
          *(uint *)(iVar9 + 4) = uVar5;
        }
        local_28 = local_28 + 0x160;
        local_18 = local_18 + -1;
      } while (local_18 != 0);
    }
  }
  FUN_361754e0(*(CTextureData **)(iVar3 + 0x38),uVar14,uVar10);
  return;
}

