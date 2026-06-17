
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCollisionInfo::FromModel(class CEntity *,long) */

void __thiscall CCollisionInfo::FromModel(CCollisionInfo *this,CEntity *param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  float local_40 [4];
  float afStack_30 [3];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
                    /* 0x12a420  1682  ?FromModel@CCollisionInfo@@QAEXPAVCEntity@@J@Z */
  local_18 = 3e+38;
  local_c = 0xff61b1e6;
  local_14 = 3e+38;
  local_8 = 0xff61b1e6;
  local_10 = 3e+38;
  local_4 = 0xff61b1e6;
  (**(code **)(*(int *)param_1 + 0xf8))(param_2,&local_18,local_40);
  FUN_3605cd80(&fStack_24,local_40 + 4);
  local_40[1] = local_18 - fStack_24;
  *(undefined4 *)(this + 0x30) = 0;
  local_40[2] = local_14 - fStack_20;
  local_40[0] = local_10 - fStack_1c;
  local_40[3] = local_10 - fStack_1c;
  if (iStack_4c == 1) {
    local_8 = 2;
LAB_3612a51f:
    local_8 = 2;
    iVar9 = 1;
  }
  else {
    iVar9 = 2;
    if (iStack_4c == 0) {
      local_8 = 3;
      local_4 = 1;
      goto LAB_3612a529;
    }
    if (iStack_4c != 2) {
      local_8 = 2;
      goto LAB_3612a51f;
    }
    local_8 = 1;
  }
  local_4 = 3;
LAB_3612a529:
  fVar5 = local_40[iVar9] * _DAT_36227cf0;
  fVar12 = local_40[local_8] - (fVar5 + fVar5);
  ceil((double)(fVar12 / fVar5));
  uVar10 = FUN_361bfd6c();
  iStack_54 = (int)uVar10 + 1;
  if (iStack_54 == 0) {
    iStack_54 = 1;
    fVar12 = 0.0;
  }
  else if (iStack_54 == 1) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = fVar12 / (float)(int)uVar10;
  }
  fVar1 = local_40[iVar9 + 3];
  fVar2 = local_40[local_4 + 3];
  fVar6 = local_40[local_8] * _DAT_36227cf0;
  *(float *)(this + 8) = fStack_20;
  *(float *)(this + 0xc) = local_14;
  *(undefined4 *)(this + 0x10) = 0x7f61b1e6;
  fVar6 = (local_40[local_8 + 3] - fVar6) + fVar5;
  if (*(int *)this != 0) {
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  FUN_360d18f0(this,iStack_54);
  iVar11 = 0;
  if (3 < iStack_54) {
    iStack_50 = 2;
    iVar8 = 0;
    do {
      iVar7 = *(int *)(this + 4) + iVar8;
      *(float *)(iVar7 + -4 + iVar9 * 4) = fVar1;
      *(float *)(iVar7 + -4 + local_4 * 4) = fVar2;
      *(float *)(iVar7 + -4 + local_8 * 4) = (float)iVar11 * fVar12 + fVar6;
      *(float *)(iVar7 + 0xc) = fVar5;
      fVar4 = *(float *)(iVar7 + 4);
      if (*(float *)(this + 0x10) <= *(float *)(iVar7 + 4)) {
        fVar4 = *(float *)(this + 0x10);
      }
      *(float *)(this + 0x10) = fVar4;
      iVar7 = *(int *)(this + 4) + 0x40 + iVar8;
      *(float *)(iVar7 + -4 + iVar9 * 4) = fVar1;
      *(float *)(iVar7 + -4 + local_4 * 4) = fVar2;
      *(float *)(iVar7 + -4 + local_8 * 4) = (float)(iStack_50 + -1) * fVar12 + fVar6;
      *(float *)(iVar7 + 0xc) = fVar5;
      fVar4 = *(float *)(iVar7 + 4);
      if (*(float *)(this + 0x10) <= *(float *)(iVar7 + 4)) {
        fVar4 = *(float *)(this + 0x10);
      }
      *(float *)(this + 0x10) = fVar4;
      iVar7 = *(int *)(this + 4) + -0x40 + iVar8 + 0xc0;
      *(float *)(iVar7 + -4 + iVar9 * 4) = fVar1;
      *(float *)(iVar7 + -4 + local_4 * 4) = fVar2;
      *(float *)(iVar7 + -4 + local_8 * 4) = (float)iStack_50 * fVar12 + fVar6;
      *(float *)(iVar7 + 0xc) = fVar5;
      fVar4 = *(float *)(iVar7 + 4);
      if (*(float *)(this + 0x10) <= *(float *)(iVar7 + 4)) {
        fVar4 = *(float *)(this + 0x10);
      }
      *(float *)(this + 0x10) = fVar4;
      iVar7 = *(int *)(this + 4) + iVar8 + 0xc0;
      *(float *)(iVar7 + -4 + iVar9 * 4) = fVar1;
      *(float *)(iVar7 + -4 + local_4 * 4) = fVar2;
      *(float *)(iVar7 + -4 + local_8 * 4) = (float)(iStack_50 + 1) * fVar12 + fVar6;
      *(float *)(iVar7 + 0xc) = fVar5;
      fVar4 = *(float *)(iVar7 + 4);
      if (*(float *)(this + 0x10) <= *(float *)(iVar7 + 4)) {
        fVar4 = *(float *)(this + 0x10);
      }
      *(float *)(this + 0x10) = fVar4;
      iVar11 = iVar11 + 4;
      iStack_50 = iStack_50 + 4;
      iVar8 = iVar8 + 0x100;
    } while (iVar11 < iStack_54 + -3);
  }
  if (iVar11 < iStack_54) {
    iVar8 = iVar11 << 6;
    do {
      iVar7 = *(int *)(this + 4) + iVar8;
      *(float *)(iVar7 + iVar9 * 4 + -4) = fVar1;
      *(float *)(local_4 * 4 + -4 + iVar7) = fVar2;
      *(float *)(local_8 * 4 + -4 + iVar7) = (float)iVar11 * fVar12 + fVar6;
      *(float *)(iVar7 + 0xc) = fVar5;
      fVar4 = *(float *)(iVar7 + 4);
      if (*(float *)(this + 0x10) <= *(float *)(iVar7 + 4)) {
        fVar4 = *(float *)(this + 0x10);
      }
      iVar11 = iVar11 + 1;
      *(float *)(this + 0x10) = fVar4;
      iVar8 = iVar8 + 0x40;
    } while (iVar11 < iStack_54);
  }
  if ((iStack_54 == 1) || (iStack_4c == 1)) {
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 4;
    *(float *)(this + 0x14) = fVar5;
  }
  else {
    *(undefined4 *)(this + 0x14) = 0;
  }
  if ((((iStack_54 == 1) && (pfVar3 = *(float **)(this + 4), *pfVar3 == _DAT_3622376c)) &&
      (pfVar3[1] == _DAT_3622376c)) && (pfVar3[2] == _DAT_3622376c)) {
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 2;
  }
  if (((iStack_4c == 1) && (**(float **)(this + 4) == _DAT_3622376c)) &&
     ((*(float **)(this + 4))[2] == _DAT_3622376c)) {
    *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
  }
  return;
}

