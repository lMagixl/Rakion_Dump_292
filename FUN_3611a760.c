
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3611a760(void *this,float *param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float unaff_EBP;
  bool bVar8;
  float10 fVar9;
  ulonglong uVar10;
  int *piStack_98;
  void *this_00;
  int iStack_84;
  CModelObject *pCStack_80;
  int iStack_7c;
  int iStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (((uint)param_1[4] & 0x200010) != 0) {
    return;
  }
  iStack_44 = (**(code **)((int)*param_1 + 0xa4))();
  if (((*(int *)((int)this + 0xd40) != 0) || (iStack_44 == 0)) ||
     (bVar2 = false, *(int *)(iStack_44 + 0x40) == 0)) {
    bVar2 = true;
  }
  fVar1 = param_1[1];
  uStack_5c = (uint)param_1[4] & 0x10000;
  uStack_40 = (uint)(fVar1 == 7.00649e-45);
  iStack_48 = DAT_362fcb8c;
  if (((uStack_40 != 0) && (bVar2)) && ((uStack_5c != 0 && (DAT_362fcb8c == 0)))) {
    return;
  }
  iStack_70 = DAT_362fcbf4;
  if ((fVar1 != 5.60519e-45) && (fVar1 != 1.12104e-44)) {
    piStack_98 = (int *)0x3611a80d;
    iStack_70 = (**(code **)((int)*param_1 + 0xe8))();
  }
  if (iStack_70 == 0) {
    return;
  }
  piVar7 = *(int **)((int)this + 0x694);
  if ((*(int *)((int)this + 0x6c0) != 0) && (((uint)param_1[4] & 0x200) != 0)) {
    piVar7 = *(int **)((int)this + 0xd20);
  }
  if ((piVar7[0x1f] != 0) || (fStack_60 = 0.0, piVar7[0x20] != 0)) {
    fStack_60 = 1.4013e-45;
  }
  piStack_98 = &iStack_58;
  (**(code **)(*piVar7 + 0x18))(param_1 + 0xf);
  this_00 = (void *)param_1[0x22];
  if ((param_1[1] == 5.60519e-45) || (param_1[1] == 1.12104e-44)) {
    this_00 = (void *)0x3f800000;
  }
  uStack_14 = 0xff61b1e6;
  uStack_10 = 0xff61b1e6;
  uStack_c = 0xff61b1e6;
  iVar4 = (**(code **)(*piVar7 + 0x28))(&fStack_60,this_00);
  bVar8 = iVar4 == 0;
  if (bVar8) {
    FUN_361217f0(param_1,&fStack_68,(float *)(piVar7 + 0x3e));
    iVar4 = (**(code **)(*piVar7 + 0x2c))(&fStack_4c);
  }
  if ((-1 < iVar4) || (bVar3 = true, *(float **)((int)this + 0x34) == param_1)) {
    bVar3 = false;
  }
  iStack_84 = -1;
  if ((iStack_70 == 0) || (DAT_362a40e4 < 1)) {
LAB_3611a976:
    if (!bVar3) goto LAB_3611a98a;
  }
  else {
    fVar1 = (fStack_68 * (float)piVar7[0x25] +
            fStack_60 * (float)piVar7[0x27] + fStack_64 * (float)piVar7[0x26]) - (float)piVar7[0x28]
    ;
    this = this_00;
    if (-unaff_EBP <= fVar1) {
      if (fVar1 <= unaff_EBP) {
        if (!bVar8) {
          FUN_361217f0(param_1,&fStack_68,(float *)(piVar7 + 0x3e));
        }
        FUN_36058b90(&fStack_4c,(float *)(piVar7 + 0x25));
        uVar10 = FUN_361bfd6c();
        iStack_84 = (int)uVar10;
        if (iStack_84 < 0) {
          bVar3 = true;
          goto LAB_3611a97e;
        }
      }
      else {
        iStack_84 = 1;
      }
      goto LAB_3611a976;
    }
    iStack_84 = -1;
    bVar3 = true;
  }
LAB_3611a97e:
  if (bVar2) {
    return;
  }
LAB_3611a98a:
  fVar9 = (float10)(**(code **)((int)*param_1 + 0x104))();
  fVar1 = (float)(fVar9 + (float10)fStack_60);
  if (*(int *)((int)this + 0xd40) == 0) {
    fVar9 = (float10)(**(code **)(*piVar7 + 0x44))(fVar1);
    if (ABS(fVar9) < (float10)_DAT_362253e4) {
      piStack_98 = (int *)0x3a83126f;
    }
    else {
      piStack_98 = (int *)(float)ABS(fVar9);
    }
    (**(code **)((int)*param_1 + 0xe4))(&piStack_98);
  }
  iVar5 = CModelObject::IsModelVisible(pCStack_80,0.0);
  uStack_5c = (uint)(iVar5 == 0);
  if (((uStack_5c == 0) || (!bVar2)) || (iStack_7c == 0)) {
    FUN_360ccb70((void *)((int)this + 0xdcc),param_1);
    pfVar6 = (float *)FUN_36122920((void *)((int)this + 0xdb0));
    *pfVar6 = fVar1;
    pfVar6[3] = (float)param_1;
    pfVar6[4] = (float)pCStack_80;
    pfVar6[2] = 0.0;
    pfVar6[1] = 0.0;
    param_1[4] = (float)((uint)param_1[4] | 0x10);
    *(float *)(DAT_362bef74 + 0x1b0) = *(float *)(DAT_362bef74 + 0x1b0) + _DAT_36223384;
    if (!bVar3) {
      iVar5 = CModelObject::HasAlpha(pCStack_80);
      if (iVar5 != 0) {
        pfVar6[2] = (float)((uint)pfVar6[2] | 1);
      }
      if (*(int *)((int)this_00 + 0xd64) != 0) {
        pfVar6[2] = (float)((uint)pfVar6[2] | 4);
      }
      if (*(int *)((int)this_00 + 0xd68) != 0) {
        pfVar6[2] = (float)((uint)pfVar6[2] | 8);
      }
      if (iStack_70 != 0) {
        pfVar6[2] = (float)((uint)pfVar6[2] | 0x10);
      }
      if (0 < iVar4) {
        pfVar6[2] = (float)((uint)pfVar6[2] | 0x20);
      }
      if (0 < iStack_84) {
        pfVar6[2] = (float)((uint)pfVar6[2] | 0x40);
      }
      if (ABS(fVar1) < unaff_EBP) {
        pfVar6[2] = (float)((uint)pfVar6[2] | 0x80);
      }
      if (iStack_7c == 0) {
        FUN_361180c0(this_00,(int *)param_1,uStack_54,piVar7);
      }
      if ((uStack_5c == 0) && ((iStack_50 == 0 || (iStack_58 != 0)))) {
        if (_pselenSelectOnRender != (CSelection<class_CEntity,1> *)0x0) {
          FUN_36123d90(piVar7,(int)param_1);
        }
        pfVar6[2] = (float)((uint)pfVar6[2] | 2);
      }
    }
  }
  return;
}

