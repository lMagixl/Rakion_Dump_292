
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_360e24d0(double *param_1,double *param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  double dVar1;
  undefined4 uVar2;
  double *pdVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  double *pdVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  int local_98;
  double *local_94;
  int local_90;
  double *local_8c;
  int local_88 [4];
  int local_78;
  void *local_74;
  int local_50 [4];
  int local_40;
  void *local_3c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_3621554b;
  local_14 = ExceptionList;
  pdVar3 = param_1;
  puVar5 = param_4;
  ExceptionList = &local_14;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    puVar5 = puVar5 + 1;
  }
  param_4[0xd] = *(undefined4 *)((int)param_1 + 0x34);
  pdVar3 = param_1;
  puVar5 = param_5;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *(undefined4 *)pdVar3;
    pdVar3 = (double *)((int)pdVar3 + 4);
    puVar5 = puVar5 + 1;
  }
  param_5[0xd] = *(undefined4 *)((int)param_1 + 0x34);
  local_c8 = param_2[1] * param_1[2] - param_2[2] * param_1[1];
  local_b0._0_4_ = SUB84(local_c8,0);
  uVar2 = local_b0._0_4_;
  local_c0 = *param_1 * param_2[2] - param_1[2] * *param_2;
  local_b8 = *param_2 * param_1[1] - param_2[1] * *param_1;
  local_b0 = local_c8;
  local_a8 = local_c0;
  local_a0 = local_b8;
  if ((double)_DAT_362a29a0 * _DAT_36232860 <=
      SQRT(local_c8 * local_c8 + local_c0 * local_c0 + local_b8 * local_b8)) {
    FUN_360e13d0((int)local_50);
    local_c = 0;
    FUN_360e13d0((int)local_88);
    FUN_360df3a0(local_50,&local_c8);
    local_c8 = -(double)CONCAT44((int)((ulonglong)local_b0 >> 0x20),uVar2);
    local_c0 = -local_a8;
    local_b8 = -local_a0;
    local_b0 = local_c8;
    local_a8 = local_c0;
    local_a0 = local_b8;
    FUN_360df3a0(local_88,&local_b0);
    pdVar3 = param_1 + 4;
    iVar6 = 0;
    local_90 = 0;
    local_c = CONCAT31(local_c._1_3_,2);
    local_8c = pdVar3;
    iVar4 = FUN_3604b9e0((int)pdVar3);
    if (0 < iVar4) {
      do {
        local_98 = FUN_3604bc20(pdVar3,iVar6);
        local_94 = (double *)FUN_3604bc20(pdVar3,iVar6);
        piVar10 = local_88;
        piVar9 = local_50;
        pdVar7 = param_2;
        puVar5 = param_4;
        puVar8 = param_5;
        iVar4 = FUN_3604bc20(pdVar3,iVar6);
        FUN_360e1e70(local_94,(double *)(local_98 + 0x18),*(undefined4 *)(iVar4 + 0x30),pdVar7,
                     puVar5,puVar8,piVar9,piVar10);
        iVar6 = iVar6 + 1;
        local_90 = iVar6;
        iVar4 = FUN_3604b9e0((int)pdVar3);
      } while (iVar6 < iVar4);
    }
    local_c = CONCAT31(local_c._1_3_,1);
    FUN_360dfff0(local_50);
    FUN_360dfff0(local_88);
    FUN_360e0070(local_50);
    FUN_360e0070(local_88);
    FUN_360e13f0(local_50,param_4 + 8,param_3);
    FUN_360e13f0(local_88,param_5 + 8,param_3);
    if (local_78 != 0) {
      operator_delete__(local_74);
    }
    if (local_40 != 0) {
      operator_delete__(local_3c);
    }
    ExceptionList = local_14;
    return 0;
  }
  pdVar3 = (double *)FUN_360dfda0(param_1,&local_b0);
  dVar1 = (*pdVar3 * *param_2 + pdVar3[2] * param_2[2] + pdVar3[1] * param_2[1]) - param_2[3];
  if ((double)_DAT_362a29a0 * _DAT_36232860 < dVar1) {
    FUN_3604bda0(param_4 + 8,(CListHead *)(param_1 + 4));
    ExceptionList = local_14;
    return 0;
  }
  if ((double)_DAT_362a29a0 * _DAT_36232878 <= dVar1) {
    ExceptionList = local_14;
    return 1;
  }
  FUN_3604bda0(param_5 + 8,(CListHead *)(param_1 + 4));
  ExceptionList = local_14;
  return 0;
}

