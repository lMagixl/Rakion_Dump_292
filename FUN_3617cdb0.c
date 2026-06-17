
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_3617cdb0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int in_EAX;
  int iVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  
  DAT_36300c14 = *param_1;
  DAT_36300c18 = param_1[1];
  DAT_36300c1c = param_1[2];
  DAT_36300c20 = *param_2;
  DAT_36300c24 = param_2[1];
  DAT_36300c28 = param_2[2];
  fVar5 = _DAT_36223384 / *(float *)(in_EAX + 0x34);
  fVar6 = fVar5 * *param_1;
  fVar7 = _DAT_36223384 / *(float *)(in_EAX + 0x3c);
  local_30 = param_1[1];
  fVar8 = fVar7 * param_1[2];
  fVar5 = fVar5 * *param_2;
  fVar7 = fVar7 * param_2[2];
  fVar1 = ABS(fVar5 - fVar6);
  fVar2 = ABS(fVar7 - fVar8);
  local_24 = fVar2;
  if (fVar2 < fVar1) {
    local_24 = fVar1;
  }
  if (local_24 == _DAT_3622376c) {
    local_24 = 0.01;
  }
  fVar9 = _DAT_36223384 / local_24;
  fVar10 = (fVar5 - fVar6) * fVar9;
  fVar11 = (fVar7 - fVar8) * fVar9;
  fVar9 = (param_2[1] - local_30) * fVar9;
  fVar3 = ABS(fVar9);
  DAT_36300bb0 = in_EAX;
  if (fVar1 <= fVar2) {
    if (fVar7 <= fVar8) {
      dVar18 = floor((double)fVar8);
      local_34 = (float)dVar18;
      fVar4 = fVar8 - local_34;
    }
    else {
      dVar18 = ceil((double)fVar8);
      local_34 = (float)dVar18;
      fVar4 = local_34 - fVar8;
    }
    local_38 = fVar10 * fVar4 + fVar6;
  }
  else if (fVar5 <= fVar6) {
    dVar18 = floor((double)fVar6);
    local_38 = (float)dVar18;
    fVar4 = fVar6 - local_38;
    local_34 = fVar11 * fVar4 + fVar8;
  }
  else {
    dVar18 = ceil((double)fVar6);
    local_38 = (float)dVar18;
    fVar4 = local_38 - fVar6;
    local_34 = fVar11 * fVar4 + fVar8;
  }
  local_30 = fVar4 * fVar9 + local_30;
  _DAT_36300bac = param_1[1] - fVar3;
  _DAT_36300ba8 = fVar3 + param_1[1];
  floor((double)fVar6);
  floor((double)fVar8);
  uVar16 = FUN_361bfd6c();
  iVar12 = (int)uVar16;
  uVar16 = FUN_361bfd6c();
  fVar15 = FUN_3617c620((int)uVar16,iVar12);
  if ((float10)param_3 <= fVar15) {
    ceil((double)local_24);
    uVar16 = FUN_361bfd6c();
    iVar12 = 0;
    if (0 < (int)uVar16) {
      do {
        floor((double)local_38);
        uVar17 = FUN_361bfd6c();
        iVar13 = (int)uVar17;
        floor((double)local_34);
        uVar17 = FUN_361bfd6c();
        iVar14 = (int)uVar17;
        _DAT_36300bac = local_30 - fVar3;
        _DAT_36300ba8 = local_30 + fVar3;
        fVar15 = FUN_3617c620(iVar13,iVar14);
        local_24 = (float)fVar15;
        if (fVar1 <= fVar2) {
          iVar14 = iVar14 + -1;
        }
        else {
          iVar13 = iVar13 + -1;
        }
        fVar15 = FUN_3617c620(iVar13,iVar14);
        if (fVar15 < (float10)local_24) {
          local_24 = (float)fVar15;
        }
        if (local_24 < param_3) {
          return (float10)local_24;
        }
        local_38 = local_38 + fVar10;
        iVar12 = iVar12 + 1;
        local_34 = local_34 + fVar11;
        local_30 = local_30 + fVar9;
      } while (iVar12 < (int)uVar16);
    }
    _DAT_36300bac = param_2[1] - fVar3;
    _DAT_36300ba8 = fVar3 + param_2[1];
    floor((double)fVar5);
    floor((double)fVar7);
    uVar16 = FUN_361bfd6c();
    iVar12 = (int)uVar16;
    uVar16 = FUN_361bfd6c();
    fVar15 = FUN_3617c620((int)uVar16,iVar12);
    if ((float10)param_3 <= fVar15) {
      fVar15 = (float10)_DAT_36222fa4;
    }
  }
  return fVar15;
}

