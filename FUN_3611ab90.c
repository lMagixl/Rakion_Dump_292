
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3611ab90(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  void *unaff_EBX;
  uint uVar9;
  CProjection3D *pCVar10;
  float unaff_EBP;
  float10 fVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_80;
  int iStack_7c;
  int iStack_70;
  undefined4 uStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [52];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((uint)param_1[4] & 0x200010) != 0) {
    return;
  }
  fStack_54 = (float)(**(code **)((int)*param_1 + 0xa4))();
  bVar3 = false;
  if (((*(int *)((int)this + 0xd40) != 0) || (fStack_54 == 0.0)) ||
     (bVar4 = false, *(int *)((int)fStack_54 + 0x40) == 0)) {
    bVar4 = true;
  }
  uVar9 = (uint)param_1[4] & 0x10000;
  fStack_50 = (float)(uint)(param_1[1] == 1.4013e-44);
  fStack_4c = DAT_362fcb8c;
  if (((fStack_50 != 0.0) && (bVar4)) && ((uVar9 != 0 && (DAT_362fcb8c == 0.0)))) {
    return;
  }
  fVar2 = param_1[0x1f];
  if (fVar2 == 0.0) {
    return;
  }
  pCVar10 = *(CProjection3D **)((int)this + 0x694);
  if ((*(int *)((int)this + 0x6c0) != 0) && (((uint)param_1[4] & 0x200) != 0)) {
    pCVar10 = *(CProjection3D **)((int)this + 0xd20);
  }
  (**(code **)(*(int *)pCVar10 + 0x18))(param_1 + 0xf,auStack_48);
  fVar15 = param_1[0x22];
  if ((param_1[1] == 5.60519e-45) || (param_1[1] == 1.12104e-44)) {
    fVar15 = 1.0;
  }
  uStack_14 = 0xff61b1e6;
  uStack_10 = 0xff61b1e6;
  uStack_c = 0xff61b1e6;
  iVar5 = (**(code **)(*(int *)pCVar10 + 0x28))(&fStack_50,fVar15);
  if (iVar5 == 0) {
    FUN_361217f0(param_1,&fStack_58,(float *)(pCVar10 + 0xf8));
    bVar4 = true;
    iVar5 = (**(code **)(*(int *)pCVar10 + 0x2c))(&fStack_4c);
  }
  if ((iVar5 < 0) && (*(float **)((int)this + 0x34) != param_1)) {
    bVar3 = true;
  }
  local_80 = -1;
  if (iStack_7c == 0) {
    if (!bVar3) goto LAB_3611ad94;
  }
  else if (!bVar3) {
    if (DAT_362a40e4 < 1) goto LAB_3611ad94;
    fVar1 = (fStack_58 * *(float *)(pCVar10 + 0x94) +
            fStack_50 * *(float *)(pCVar10 + 0x9c) + fStack_54 * *(float *)(pCVar10 + 0x98)) -
            *(float *)(pCVar10 + 0xa0);
    this = unaff_EBX;
    if (fVar1 < -unaff_EBP) {
      local_80 = -1;
      bVar3 = true;
    }
    else {
      if (unaff_EBP < fVar1) {
        local_80 = 1;
        goto LAB_3611ad94;
      }
      if (!bVar4) {
        FUN_361217f0(param_1,&fStack_58,(float *)(pCVar10 + 0xf8));
      }
      FUN_36058b90(&fStack_4c,(float *)(pCVar10 + 0x94));
      uVar12 = FUN_361bfd6c();
      local_80 = (int)uVar12;
      if (-1 < local_80) goto LAB_3611ad94;
      bVar3 = true;
    }
  }
  if (iStack_70 != 0) {
    return;
  }
LAB_3611ad94:
  fVar13 = RM_GetMipAdjustmentFactor(pCVar10);
  fVar11 = (float10)(**(code **)((int)*param_1 + 0x104))();
  fVar1 = (float)(fVar11 + (float10)fStack_50);
  fVar14 = 0.0;
  if (*(int *)((int)this + 0xd40) == 0) {
    fVar14 = RM_GetAdjustedMipDistance(-fVar1,fVar13);
    (**(code **)((int)*param_1 + 0xe4))(&stack0xffffff78);
  }
  iVar6 = CModelInstance::IsModelVisible((CModelInstance *)0x0,fVar14);
  if (((iVar6 != 0) || (iStack_70 == 0)) || (fVar15 == 0.0)) {
    FUN_360ccb70((void *)((int)this + 0xdcc),param_1);
    pfVar7 = (float *)FUN_36122920((void *)((int)this + 0xdb0));
    pfVar7[3] = (float)param_1;
    pfVar7[2] = 0.0;
    *pfVar7 = fVar1;
    pfVar7[1] = fVar14;
    param_1[4] = (float)((uint)param_1[4] | 0x10);
    *(float *)(DAT_362bef74 + 0x1d8) = *(float *)(DAT_362bef74 + 0x1d8) + _DAT_36223384;
    if (!bVar3) {
      if (fVar15 == 0.0) {
        FUN_361180c0(unaff_EBX,(int *)param_1,uStack_64,(int *)pCVar10);
      }
      iVar8 = CModelInstance::HasAlpha((CModelInstance *)0x0);
      if (iVar8 != 0) {
        pfVar7[2] = (float)((uint)pfVar7[2] | 1);
      }
      if (*(int *)((int)unaff_EBX + 0xd64) != 0) {
        pfVar7[2] = (float)((uint)pfVar7[2] | 4);
      }
      if (*(int *)((int)unaff_EBX + 0xd68) != 0) {
        pfVar7[2] = (float)((uint)pfVar7[2] | 8);
      }
      if (iStack_7c != 0) {
        pfVar7[2] = (float)((uint)pfVar7[2] | 0x10);
      }
      if (0 < iVar5) {
        pfVar7[2] = (float)((uint)pfVar7[2] | 0x20);
      }
      if (0 < local_80) {
        pfVar7[2] = (float)((uint)pfVar7[2] | 0x40);
      }
      if (ABS(fVar1) < unaff_EBP) {
        pfVar7[2] = (float)((uint)pfVar7[2] | 0x80);
      }
      if ((iVar6 != 0) && ((uVar9 == 0 || (fVar2 != 0.0)))) {
        if (_pselenSelectOnRender != (CSelection<class_CEntity,1> *)0x0) {
          FUN_36123d90((int *)pCVar10,(int)param_1);
        }
        pfVar7[2] = (float)((uint)pfVar7[2] | 2);
      }
    }
  }
  return;
}

