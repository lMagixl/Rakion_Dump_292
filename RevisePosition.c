
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPonytail::RevisePosition(long) */

void __thiscall CPonytail::RevisePosition(CPonytail *this,long param_1)

{
  CPonytail *this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_18;
  
                    /* 0x18f120  3175  ?RevisePosition@CPonytail@@QAEXJ@Z */
  lVar5 = param_1;
  if (param_1 != 0) {
    iVar9 = param_1 + -1;
    this_00 = this + 0xc;
    iVar8 = FUN_361905c0(this_00,iVar9);
    fVar1 = *(float *)(iVar8 + 4);
    fVar2 = *(float *)(iVar8 + 8);
    fVar3 = *(float *)(iVar8 + 0xc);
    iVar8 = FUN_361905c0(this_00,param_1);
    fVar1 = *(float *)(iVar8 + 4) - fVar1;
    fVar2 = *(float *)(iVar8 + 8) - fVar2;
    fVar3 = *(float *)(iVar8 + 0xc) - fVar3;
    param_1 = (long)SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
    if (*(int *)this == 0) {
      iVar8 = FUN_361905c0(this_00,iVar9);
      fVar1 = *(float *)(iVar8 + 0x5c) * _DAT_36231d84;
      if (fVar1 < (float)param_1) {
        param_1 = (long)fVar1;
      }
    }
    *(undefined4 *)(this + 4) = 0x42700000;
    if (lVar5 == 1) {
      local_18 = *(float *)(this + 0x24);
      local_38 = *(float *)(this + 0x28);
      local_34 = *(float *)(this + 0x2c);
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_361905c0(this_00,lVar5 + -2);
      local_18 = *(float *)(iVar8 + 4);
      local_38 = *(float *)(iVar8 + 8);
      local_34 = *(float *)(iVar8 + 0xc);
      iVar8 = iVar9;
    }
    iVar8 = FUN_361905c0(this_00,iVar8);
    local_18 = *(float *)(iVar8 + 4) - local_18;
    local_38 = *(float *)(iVar8 + 8) - local_38;
    local_34 = *(float *)(iVar8 + 0xc) - local_34;
    fVar1 = SQRT(local_18 * local_18 + local_38 * local_38 + local_34 * local_34);
    local_3c = _DAT_3622376c;
    if ((float)_DAT_36223438 <= fVar1) {
      local_3c = _DAT_36223384 / fVar1;
    }
    local_34 = local_34 * local_3c;
    fVar7 = local_34;
    local_38 = local_38 * local_3c;
    fVar6 = local_38;
    local_3c = local_18 * local_3c;
    fVar3 = local_3c;
    iVar8 = FUN_361905c0(this_00,iVar9);
    local_3c = *(float *)(iVar8 + 4);
    local_38 = *(float *)(iVar8 + 8);
    local_34 = *(float *)(iVar8 + 0xc);
    iVar8 = FUN_361905c0(this_00,lVar5);
    local_3c = *(float *)(iVar8 + 4) - local_3c;
    local_38 = *(float *)(iVar8 + 8) - local_38;
    local_34 = *(float *)(iVar8 + 0xc) - local_34;
    fVar1 = SQRT(local_3c * local_3c + local_38 * local_38 + local_34 * local_34);
    fVar2 = _DAT_3622376c;
    if ((float)_DAT_36223438 <= fVar1) {
      fVar2 = _DAT_36223384 / fVar1;
    }
    local_34 = local_34 * fVar2;
    local_38 = local_38 * fVar2;
    local_3c = local_3c * fVar2;
    fVar10 = (float10)_CIacos();
    if (fVar10 * (float10)_DAT_36227d14 <= (float10)_DAT_3622e4e4) {
      local_40 = (float)(fVar10 * (float10)_DAT_36227d14);
    }
    else {
      local_40 = 60.0;
    }
    fVar1 = local_34 * fVar6 - fVar7 * local_38;
    fVar2 = fVar7 * local_3c - local_34 * fVar3;
    local_34 = local_38 * fVar3 - fVar6 * local_3c;
    fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + local_34 * local_34);
    local_3c = _DAT_3622376c;
    if ((float)_DAT_36223438 <= fVar4) {
      local_3c = _DAT_36223384 / fVar4;
    }
    local_34 = local_34 * local_3c;
    local_38 = fVar2 * local_3c;
    local_3c = fVar1 * local_3c;
    fVar1 = fVar7 * local_38 - fVar6 * local_34;
    fVar2 = fVar3 * local_34 - local_3c * fVar7;
    local_34 = local_3c * fVar6 - fVar3 * local_38;
    fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + local_34 * local_34);
    local_3c = _DAT_3622376c;
    if ((float)_DAT_36223438 <= fVar4) {
      local_3c = _DAT_36223384 / fVar4;
    }
    local_34 = local_34 * local_3c;
    local_38 = fVar2 * local_3c;
    local_3c = fVar1 * local_3c;
    fVar11 = Sin(local_40);
    fVar12 = Cos(local_40);
    iVar9 = FUN_361905c0(this_00,iVar9);
    fVar1 = *(float *)(iVar9 + 4);
    fVar2 = *(float *)(iVar9 + 8);
    fVar4 = *(float *)(iVar9 + 0xc);
    iVar9 = FUN_361905c0(this_00,lVar5);
    *(float *)(iVar9 + 4) = fVar1 + (fVar3 * fVar12 + local_3c * fVar11) * (float)param_1;
    *(float *)(iVar9 + 8) = fVar2 + (fVar6 * fVar12 + local_38 * fVar11) * (float)param_1;
    *(float *)(iVar9 + 0xc) = fVar4 + (fVar7 * fVar12 + local_34 * fVar11) * (float)param_1;
  }
  return;
}

