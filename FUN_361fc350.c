
undefined4 __cdecl
FUN_361fc350(void *param_1,float *param_2,float *param_3,int param_4,int *param_5,int param_6,
            undefined *param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  piVar7 = param_5;
  pfVar6 = param_3;
  pfVar5 = param_2;
  if (param_1 == (void *)0x0) {
    return 0xffffffff;
  }
  if ((param_6 != 3) && (param_6 != 4)) {
    return 0xfffffffe;
  }
  if ((9 < *(short *)((int)param_5 + 0x32)) && (*(short *)((int)param_5 + 0x32) < 0xe)) {
    pfVar4 = param_2;
    if ((short)param_5[0xc] == 0x51) {
      pfVar4 = (float *)((int)param_2 / 6);
    }
    if (((pfVar4 == (float *)0x0) ||
        ((((pfVar4 != (float *)0x1 && (((uint)pfVar4 & (int)pfVar4 - 1U) != 0)) ||
          (param_3 == (float *)0x0)) ||
         ((param_3 != (float *)0x1 && (((uint)param_3 & (int)param_3 - 1U) != 0)))))) &&
       (*param_5 == 0)) {
      return 0xfffffffd;
    }
  }
  DAT_36383cc4 = (undefined4 *)FUN_361bf99c(0x23b4);
  puVar9 = DAT_36383cc4;
  for (iVar3 = 0x8ed; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  uVar2 = FUN_361bf99c(0x4dc);
  DAT_36383cc4[1] = uVar2;
  puVar9 = (undefined4 *)DAT_36383cc4[1];
  for (iVar3 = 0x137; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  piVar10 = DAT_36383cc4 + 0x8de;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar10 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar10 = piVar10 + 1;
  }
  pvVar8 = (void *)0x0;
  iVar3 = param_4;
  if (((pfVar5 == (float *)0x0) ||
      ((pfVar5 != (float *)0x1 && (((uint)pfVar5 & (int)pfVar5 - 1U) != 0)))) ||
     ((pfVar6 == (float *)0x0 ||
      ((pfVar6 != (float *)0x1 && (((uint)pfVar6 & (int)pfVar6 - 1U) != 0)))))) {
    iVar1 = *param_5;
    if (iVar1 == 1) {
      FUN_361fc060((uint)pfVar5,(uint)pfVar6,(uint *)&param_3,(uint *)&param_2);
      iVar3 = param_4;
      pvVar8 = (void *)FUN_361fc1e0((int)param_1,pfVar5,(float)pfVar6,param_6,param_4,(float)param_3
                                    ,(float)param_2);
      if (pvVar8 != (void *)0x0) {
        pfVar5 = param_3;
        pfVar6 = param_2;
        iVar3 = (int)param_3 * param_6;
        param_1 = pvVar8;
      }
    }
    else if (iVar1 == 2) {
      FUN_361fc0e0((uint)pfVar5,(uint)pfVar6,(uint *)&param_3,(uint *)&param_2);
      iVar3 = param_4;
      pvVar8 = (void *)FUN_361fc1e0((int)param_1,pfVar5,(float)pfVar6,param_6,param_4,(float)param_3
                                    ,(float)param_2);
      if (pvVar8 != (void *)0x0) {
        pfVar5 = param_3;
        pfVar6 = param_2;
        iVar3 = (int)param_3 * param_6;
        param_1 = pvVar8;
      }
    }
    else if (iVar1 == 3) {
      FUN_361fc160((uint)pfVar5,(uint)pfVar6,(uint *)&param_3,(uint *)&param_2);
      iVar3 = param_4;
      pvVar8 = (void *)FUN_361fc1e0((int)param_1,pfVar5,(float)pfVar6,param_6,param_4,(float)param_3
                                    ,(float)param_2);
      if (pvVar8 != (void *)0x0) {
        pfVar5 = param_3;
        pfVar6 = param_2;
        iVar3 = (int)param_3 * param_6;
        param_1 = pvVar8;
      }
    }
  }
  *(short *)(DAT_36383cc4[1] + 0x30) = (short)pfVar5;
  *(short *)(DAT_36383cc4[1] + 0x2e) = (short)pfVar6;
  *(undefined2 *)(DAT_36383cc4[1] + 0x34) = (undefined2)param_6;
  DAT_36383cc4[0x804] = param_1;
  *(undefined2 *)(DAT_36383cc4[1] + 0x346) = 0;
  *(undefined2 *)(DAT_36383cc4[1] + 0x34a) = *(undefined2 *)(DAT_36383cc4[1] + 0x30);
  *(undefined2 *)(DAT_36383cc4[1] + 0x344) = 0;
  *(undefined2 *)(DAT_36383cc4[1] + 0x348) = *(undefined2 *)(DAT_36383cc4[1] + 0x2e);
  *(undefined2 *)(DAT_36383cc4[1] + 0x350) = *(undefined2 *)(DAT_36383cc4[1] + 0x34);
  *(int *)(DAT_36383cc4[1] + 0x354) = iVar3;
  *(undefined4 *)(DAT_36383cc4[1] + 0x358) = 1;
  *(undefined4 *)(DAT_36383cc4[1] + 0x340) = DAT_36383cc4[0x804];
  *(undefined2 *)(DAT_36383cc4[1] + 0x34c) = 0;
  *(short *)(DAT_36383cc4[1] + 0x34e) = *(short *)(DAT_36383cc4[1] + 0x34) + -1;
  FUN_361fe510((int)DAT_36383cc4,(int)*(short *)((int)DAT_36383cc4 + 0x23aa),param_7);
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  operator_delete((void *)DAT_36383cc4[1]);
  operator_delete(DAT_36383cc4);
  return 0;
}

