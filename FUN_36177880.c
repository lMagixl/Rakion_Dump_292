
float * __thiscall FUN_36177880(void *this,float *param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int local_44;
  float *local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621a863;
  local_c = ExceptionList;
  iVar2 = param_2 * 0x160 + *(int *)((int)this + 0x104);
  local_44 = 0;
  local_40 = (float *)0x0;
  iVar3 = *(int *)((int)this + 0x54) + 1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_3604f220(&local_44,iVar3 * iVar3);
  FUN_3617b1f0(this,*(int *)(iVar2 + 0x38),*(int *)(iVar2 + 0x3c),*(int *)(iVar2 + 0x40),
               *(int *)(iVar2 + 0x44),(int)&local_44);
  iVar2 = FUN_3604f2b0(&local_44);
  pfVar1 = local_40;
  local_3c = *local_40;
  local_38 = local_40[1];
  local_34 = local_40[2];
  local_30 = local_3c;
  local_2c = local_38;
  local_28 = local_34;
  local_24 = local_3c;
  local_20 = local_38;
  local_1c = local_34;
  local_18 = local_3c;
  local_14 = local_38;
  local_10 = local_34;
  if (1 < iVar2) {
    pfVar4 = local_40 + 4;
    iVar2 = iVar2 + -1;
    do {
      local_24 = pfVar4[-1];
      local_20 = *pfVar4;
      local_1c = pfVar4[1];
      local_18 = local_24;
      local_14 = local_20;
      local_10 = local_1c;
      FUN_360b1850(&local_3c,&local_24);
      pfVar4 = pfVar4 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *param_1 = local_3c;
  param_1[1] = local_38;
  param_1[2] = local_34;
  param_1[3] = local_30;
  param_1[4] = local_2c;
  param_1[5] = local_28;
  if (local_44 != 0) {
    operator_delete__(pfVar1);
  }
  ExceptionList = local_c;
  return param_1;
}

