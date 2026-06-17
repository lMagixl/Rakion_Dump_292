
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_3608bb70(int param_1,int param_2)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  float10 fVar18;
  uint local_18;
  int iStack_14;
  undefined8 local_10;
  undefined8 local_8;
  
  iVar10 = 0;
  uVar13 = 0;
  iVar12 = 0;
  iVar16 = 0;
  iVar14 = 0;
  iVar3 = 0;
  local_8 = 0;
  local_18 = 0;
  iStack_14 = 0;
  local_10 = 0;
  if (0 < param_2) {
    do {
      uVar2 = *(uint *)(param_1 + iVar16 * 4);
      uVar9 = uVar2 & 0xff;
      iVar12 = iVar12 + uVar9;
      uVar11 = ((uVar2 & 0xff00) << 8) >> 0x10;
      iVar14 = iVar14 + uVar11;
      uVar15 = (uVar2 & 0xff0000) >> 0x10;
      iVar10 = iVar3 + uVar15;
      bVar17 = CARRY4(uVar13,uVar9 * uVar9);
      uVar13 = uVar13 + uVar9 * uVar9;
      uVar2 = local_8._4_4_ + (uint)bVar17;
      local_8 = (ulonglong)uVar2 << 0x20;
      bVar17 = CARRY4(local_18,uVar11 * uVar11);
      local_18 = local_18 + uVar11 * uVar11;
      iStack_14 = iStack_14 + (uint)bVar17;
      iVar16 = iVar16 + 1;
      local_10 = CONCAT44(local_10._4_4_ + (uint)CARRY4((uint)local_10,uVar15 * uVar15),
                          (uint)local_10 + uVar15 * uVar15);
      iVar3 = iVar10;
    } while (iVar16 < param_2);
    local_8 = CONCAT44(uVar2,uVar13);
  }
  dVar7 = (double)param_2;
  dVar1 = _DAT_36227d28 / dVar7;
  dVar8 = _DAT_36227d28 / (double)(param_2 + -1);
  dVar4 = (double)iVar12;
  if (iVar12 < 0) {
    dVar4 = dVar4 + _DAT_3622dd20;
  }
  dVar4 = dVar4 * dVar1;
  dVar5 = (double)iVar14;
  if (iVar14 < 0) {
    dVar5 = dVar5 + _DAT_3622dd20;
  }
  dVar5 = dVar5 * dVar1;
  dVar6 = (double)iVar10;
  if (iVar10 < 0) {
    dVar6 = dVar6 + _DAT_3622dd20;
  }
  dVar6 = dVar6 * dVar1;
  dVar1 = (double)(iVar12 * 2);
  if (iVar12 * 2 < 0) {
    dVar1 = dVar1 + _DAT_3622dd20;
  }
  dVar1 = (dVar7 * dVar4 * dVar4 + ((double)local_8 - dVar1 * dVar4)) * dVar8;
  if (dVar1 < (double)_DAT_3622376c) {
    dVar1 = (double)_DAT_3622376c;
  }
  dVar1 = SQRT(dVar1);
  dVar4 = (double)(iVar14 * 2);
  if (iVar14 * 2 < 0) {
    dVar4 = dVar4 + _DAT_3622dd20;
  }
  dVar4 = (dVar7 * dVar5 * dVar5 + ((double)CONCAT44(iStack_14,local_18) - dVar4 * dVar5)) * dVar8;
  if (dVar4 < (double)_DAT_3622376c) {
    dVar4 = (double)_DAT_3622376c;
  }
  dVar5 = (double)(iVar10 * 2);
  if (iVar10 * 2 < 0) {
    dVar5 = dVar5 + _DAT_3622dd20;
  }
  dVar8 = (dVar7 * dVar6 * dVar6 + ((double)local_10 - dVar5 * dVar6)) * dVar8;
  if (dVar8 < (double)_DAT_3622376c) {
    dVar8 = (double)_DAT_3622376c;
  }
  if (dVar1 < SQRT(dVar4)) {
    dVar1 = SQRT(dVar4);
  }
  fVar18 = (float10)dVar1;
  if (fVar18 < (float10)SQRT(dVar8)) {
    fVar18 = (float10)SQRT(dVar8);
  }
  return fVar18;
}

