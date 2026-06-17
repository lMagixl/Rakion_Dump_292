
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36161d80(void)

{
  undefined4 *puVar1;
  int *in_EAX;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  GFXVertex *pGVar8;
  ushort *puVar9;
  int local_28;
  ushort *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  int iVar10;
  
  iVar2 = FUN_3615a400(in_EAX + 0x10);
  iVar10 = in_EAX[0x11];
  iVar2 = iVar2 * 3;
  local_14 = DAT_362fdfd8 + *in_EAX * 0xc;
  DAT_362fe0a8 = 0;
  DAT_362fe088 = 0;
  _DAT_362fe098 = iVar2;
  local_18 = iVar10;
  iVar3 = FUN_3615a190((undefined4 *)&DAT_362fe090);
  if (iVar3 < iVar2) {
    iVar3 = FUN_3615a190((undefined4 *)&DAT_362fe090);
    FUN_36162540(&DAT_362fe090,iVar3 + ((iVar2 + -1) / DAT_362fe09c + 1) * DAT_362fe09c);
  }
  iVar7 = DAT_362fe0a8 + iVar2;
  DAT_362fe0a8 = iVar7;
  iVar3 = FUN_3600bda0((undefined4 *)&DAT_362fe0a0);
  if (iVar3 < iVar7) {
    iVar3 = FUN_3600bda0((undefined4 *)&DAT_362fe0a0);
    FUN_360623a0(&DAT_362fe0a0,iVar3 + ((iVar2 + -1) / DAT_362fe0ac + 1) * DAT_362fe0ac);
  }
  iVar7 = DAT_362fe088 + iVar2;
  DAT_362fe088 = iVar7;
  iVar3 = FUN_36061f90((undefined4 *)&DAT_362fe080);
  if (iVar3 < iVar7) {
    iVar3 = FUN_36061f90((undefined4 *)&DAT_362fe080);
    FUN_360622b0(&DAT_362fe080,iVar3 + ((iVar2 + -1) / DAT_362fe08c + 1) * DAT_362fe08c);
  }
  iVar3 = 0;
  local_1c = 1;
  if (0 < iVar2) {
    iVar7 = 0;
    do {
      puVar1 = (undefined4 *)(local_14 + (uint)*(ushort *)(iVar10 + iVar3 * 2) * 0xc);
      pGVar8 = DAT_362fe094 + iVar7;
      *(undefined4 *)pGVar8 = *puVar1;
      *(undefined4 *)(pGVar8 + 4) = puVar1[1];
      *(undefined4 *)(pGVar8 + 8) = puVar1[2];
      DAT_362fe0a4[iVar3] = (ushort)iVar3;
      iVar3 = iVar3 + 1;
      iVar7 = iVar7 + 0xc;
    } while (iVar3 < iVar2);
  }
  local_c = 0xffffffff;
  local_8 = 0xfffffffe;
  local_4 = 0xfffffffd;
  FUN_36161520(&local_20);
  if (0 < iVar2 / 3) {
    iVar3 = 0;
    iVar7 = 0;
    uVar5 = local_20;
    local_14 = iVar2 / 3;
    do {
      puVar9 = (ushort *)(iVar10 + iVar3);
      local_28 = 0;
      local_20 = 3;
      local_24 = puVar9;
      do {
        uVar6 = (uint)*local_24;
        if (uVar6 == local_c) {
          local_28 = local_28 + 1;
        }
        if (uVar6 == local_8) {
          local_28 = local_28 + 1;
        }
        if (uVar6 == local_4) {
          local_28 = local_28 + 1;
        }
        local_24 = local_24 + 1;
        local_20 = local_20 - 1;
      } while (local_20 != 0);
      if (local_28 < 2) {
        local_1c = local_1c + 1;
        puVar4 = FUN_36161520(&local_10);
        uVar5 = *puVar4;
      }
      *(uint *)(DAT_362fe084 + iVar7) = uVar5;
      *(uint *)(DAT_362fe084 + iVar7 + 4) = uVar5;
      *(uint *)(DAT_362fe084 + iVar7 + 8) = uVar5;
      local_c = (uint)*puVar9;
      local_8 = (uint)puVar9[1];
      local_4 = (uint)*(ushort *)(iVar3 + 4 + local_18);
      iVar7 = iVar7 + 0xc;
      iVar3 = iVar3 + 6;
      local_14 = local_14 + -1;
      iVar10 = local_18;
    } while (local_14 != 0);
  }
  shaSetVertexArray(DAT_362fe094,0,iVar2);
  shaSetIndices(DAT_362fe0a4,iVar2);
  shaSetColorArray(DAT_362fe084);
  shaRender();
  return;
}

