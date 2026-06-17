
void FUN_36094ae0(void)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  byte bVar6;
  int unaff_EBX;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *local_14;
  int local_c;
  int local_8;
  
  if (*(int *)(unaff_EBX + 0x78) == 0) {
    uVar7 = *(uint *)(unaff_EBX + 0x1c);
    *(uint *)(unaff_EBX + 0x1c) = uVar7 & 0xffefffff;
    lVar1 = DAT_362c9b4c;
    if (*(int *)(unaff_EBX + 0x34) < 2) {
      lVar1 = DAT_362c9b48;
    }
    if ((uVar7 & 0x200) != 0) {
      lVar1 = 0x1000000;
    }
    bVar6 = (byte)*(undefined4 *)(unaff_EBX + 0x28);
    uVar7 = *(int *)(unaff_EBX + 0x24) >> (bVar6 & 0x1f);
    uVar9 = *(int *)(unaff_EBX + 0x20) >> (bVar6 & 0x1f);
    lVar1 = ClampTextureSize(lVar1,*(long *)(_pGfx + 0xad4),uVar9,uVar7);
    local_14 = (int *)uVar7;
    if ((int)uVar9 <= (int)uVar7) {
      local_14 = (int *)uVar9;
    }
    iVar2 = 0x1f;
    if (local_14 != (int *)0x0) {
      for (; (uint)local_14 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (iVar2 + 1 <= lVar1) {
      lVar1 = iVar2;
    }
    if (lVar1 != 0) {
      if ((*(byte *)(unaff_EBX + 0x1c) & 4) == 0) {
        lVar4 = GetMipmapOffset(lVar1,uVar9,uVar7);
        local_c = *(int *)(unaff_EBX + 0x30);
        puVar8 = (undefined1 *)(local_c + lVar4 * -4);
        piVar3 = AllocMemory(*(int *)(unaff_EBX + 0x34) * (int)puVar8);
        local_14 = (int *)(*(int *)(unaff_EBX + 0x60) + lVar4 * 4);
      }
      else {
        if ((int)uVar9 >> ((byte)lVar1 & 0x1f) < 4) {
          return;
        }
        if ((int)uVar7 >> ((byte)lVar1 & 0x1f) < 4) {
          return;
        }
        piVar3 = *(int **)(unaff_EBX + 0x60);
        iVar2 = lVar1;
        local_14 = piVar3;
        if (0 < lVar1) {
          do {
            iVar2 = iVar2 + -1;
            local_14 = (int *)((int)local_14 + *local_14 + 4);
          } while (iVar2 != 0);
        }
        local_c = *(int *)(unaff_EBX + 0x30);
        puVar8 = (undefined1 *)((int)piVar3 + (local_c - (int)local_14));
        piVar3 = AllocMemory(*(int *)(unaff_EBX + 0x34) * (int)puVar8);
      }
      local_8 = 0;
      piVar5 = piVar3;
      if (0 < *(int *)(unaff_EBX + 0x34)) {
        do {
          piVar10 = local_14;
          piVar11 = piVar5;
          for (uVar7 = (uint)puVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *piVar11 = *piVar10;
            piVar10 = piVar10 + 1;
            piVar11 = piVar11 + 1;
          }
          for (uVar7 = (uint)puVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(char *)piVar11 = (char)*piVar10;
            piVar10 = (int *)((int)piVar10 + 1);
            piVar11 = (int *)((int)piVar11 + 1);
          }
          local_14 = (int *)((int)local_14 + local_c);
          piVar5 = (int *)((int)piVar5 + (int)puVar8);
          local_8 = local_8 + 1;
        } while (local_8 < *(int *)(unaff_EBX + 0x34));
      }
      FreeMemory(*(void **)(unaff_EBX + 0x60));
      *(int **)(unaff_EBX + 0x60) = piVar3;
      iVar2 = *(int *)(unaff_EBX + 0x2c) - lVar1;
      *(undefined1 **)(unaff_EBX + 0x30) = puVar8;
      *(int *)(unaff_EBX + 0x28) = *(int *)(unaff_EBX + 0x28) + lVar1;
      if (iVar2 < 1) {
        iVar2 = 1;
      }
      *(int *)(unaff_EBX + 0x2c) = iVar2;
      *(uint *)(unaff_EBX + 0x1c) = *(uint *)(unaff_EBX + 0x1c) | 0x100000;
    }
  }
  return;
}

