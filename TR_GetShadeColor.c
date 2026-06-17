
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned long __cdecl TR_GetShadeColor(class CTerrain const *,class CShadingInfo *) */

ulong __cdecl TR_GetShadeColor(CTerrain *param_1,CShadingInfo *param_2)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  
                    /* 0x17b4a0  3763  ?TR_GetShadeColor@@YAKPBVCTerrain@@PAVCShadingInfo@@@Z */
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar16 = *(int *)(iVar2 + 0x18) + -1;
  bVar7 = (byte)*(int *)(iVar2 + 0x28);
  if (*(int *)(iVar2 + 0x28) < 0) {
    iVar16 = iVar16 >> (-bVar7 & 0x1f);
    iVar14 = *(int *)(iVar2 + 0x1c) + -1 >> (-bVar7 & 0x1f);
  }
  else {
    iVar16 = iVar16 << (bVar7 & 0x1f);
    iVar14 = *(int *)(iVar2 + 0x1c) + -1 << (bVar7 & 0x1f);
  }
  iVar8 = *(int *)(param_2 + 0x1c);
  if (iVar8 < 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = iVar16 + -2;
    if (iVar8 <= iVar16 + -2) {
      iVar9 = iVar8;
    }
  }
  iVar8 = *(int *)(param_2 + 0x20);
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (iVar14 + -2 < iVar8) {
    iVar8 = iVar14 + -2;
  }
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x28);
  iVar9 = iVar8 * iVar16 + iVar9;
  iVar2 = *(int *)(*(int *)(iVar2 + 0x10) + 0x60);
  uVar17 = *(uint *)(iVar2 + iVar9 * 4);
  uVar5 = *(uint *)(iVar2 + 4 + iVar9 * 4);
  puVar1 = (uint *)(iVar2 + (iVar9 + iVar16) * 4);
  uVar6 = puVar1[1];
  uVar15 = *puVar1;
  uVar13 = uVar17 >> 8 & 0xff;
  uVar11 = uVar17 >> 0x10 & 0xff;
  uVar10 = uVar15 >> 0x10 & 0xff;
  uVar17 = uVar17 & 0xff;
  uVar12 = uVar15 & 0xff;
  if ((fVar4 != _DAT_3622376c) && (uVar12 = uVar6 & 0xff, fVar4 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar12 = (uint)uVar18;
  }
  if ((fVar4 != _DAT_3622376c) && (uVar17 = uVar5 & 0xff, fVar4 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar17 = (uint)uVar18;
  }
  if ((fVar3 != _DAT_3622376c) && (uVar17 = uVar12, fVar3 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar17 = (uint)uVar18;
  }
  uVar15 = uVar15 >> 8 & 0xff;
  if ((fVar4 != _DAT_3622376c) && (uVar15 = uVar6 >> 8 & 0xff, fVar4 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar15 = (uint)uVar18;
  }
  if ((fVar4 != _DAT_3622376c) && (uVar13 = uVar5 >> 8 & 0xff, fVar4 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar13 = (uint)uVar18;
  }
  if ((fVar3 != _DAT_3622376c) && (uVar13 = uVar15, fVar3 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar13 = (uint)uVar18;
  }
  if ((fVar4 != _DAT_3622376c) && (uVar10 = uVar6 >> 0x10 & 0xff, fVar4 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar10 = (uint)uVar18;
  }
  if ((fVar4 != _DAT_3622376c) && (uVar11 = uVar5 >> 0x10 & 0xff, fVar4 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar11 = (uint)uVar18;
  }
  if ((fVar3 != _DAT_3622376c) && (uVar11 = uVar10, fVar3 != _DAT_36223384)) {
    uVar18 = FUN_361bfd6c();
    uVar11 = (uint)uVar18;
  }
  return ((uVar13 & 0xff | uVar17 << 8) << 8 | uVar11 & 0xff) << 8 | 0xff;
}

