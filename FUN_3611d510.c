
void __thiscall FUN_3611d510(void *this,int param_1)

{
  void *this_00;
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *this_01;
  uint *puVar4;
  uint uVar5;
  int unaff_ESI;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int local_60 [4];
  float afStack_50 [4];
  float fStack_40;
  undefined1 auStack_3c [8];
  Vector<float,3> aVStack_34 [12];
  Matrix<float,3,3> aMStack_28 [32];
  int iStack_8;
  
  piVar1 = *(int **)(param_1 + 0xe8);
  if ((((piVar1 != (int *)0x0) && (uVar5 = (uint)*(byte *)((int)piVar1 + 0x18b), uVar5 != 0)) &&
      (*(int *)this < 1)) && (DAT_362fcbe4 != 0)) {
    this_00 = (void *)((int)this + 0xdec);
    iVar6 = 0;
    local_60[0] = FUN_3611f440((int)this_00);
    if (0 < local_60[0]) {
      do {
        puVar3 = (uint *)FUN_3611fee0(this_00,iVar6);
        if (*puVar3 == uVar5) {
          FUN_3611b0c0(puVar3,(int)this,param_1);
          return;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_60[0]);
    }
    iVar6 = FUN_3611f910((int)this_00);
    if (iVar6 - *(int *)((int)this + 0xe00) < 1) {
      FUN_36123170(this_00,*(int *)((int)this + 0xe04));
    }
    iVar6 = *(int *)((int)this + 0xe00);
    *(int *)((int)this + 0xe00) = iVar6 + 1;
    puVar3 = (uint *)FUN_3611fee0(this_00,iVar6);
    FUN_3611b0b0((int)puVar3);
    *puVar3 = uVar5;
    piVar2 = *(int **)(*(int *)(*(int *)(piVar1[0x6b] + 0x38) + 0x14) + 0x668);
    (**(code **)(*piVar2 + 100))(auStack_3c);
    MakeRotationMatrixFast(aMStack_28,aVStack_34);
    local_60[0] = 0;
    puVar3[5] = 0;
    local_60[1] = 0;
    puVar3[6] = 0;
    local_60[2] = 0xc7c35000;
    puVar3[7] = 0xc7c35000;
    pfVar8 = &fStack_40;
    pfVar7 = afStack_50;
    this_01 = FUN_36059090((void *)(*piVar1 + 0x14),local_60,(float *)aMStack_28);
    puVar4 = (uint *)FUN_36058f40(this_01,pfVar7,pfVar8);
    puVar3[1] = *puVar4;
    puVar3[2] = puVar4[1];
    puVar3[3] = puVar4[2];
    puVar3[4] = puVar4[3];
    iVar6 = (**(code **)(*piVar2 + 0xcc))(uVar5,puVar3 + 0xe);
    if (iVar6 != 0) {
      FUN_3611b0c0(puVar3,unaff_ESI,iStack_8);
      return;
    }
    *puVar3 = 0xffffffff;
  }
  return;
}

