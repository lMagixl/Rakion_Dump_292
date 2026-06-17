
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __cdecl FUN_361bf5f0(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  float local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621ca87;
  local_c = ExceptionList;
  iVar5 = 0;
  ExceptionList = &local_c;
  FUN_361bc750(&local_20);
  do {
    iVar4 = 4;
    pfVar3 = param_3;
    fVar2 = _DAT_3622376c;
    do {
      pfVar3 = pfVar3 + 1;
      fVar1 = *param_2;
      param_2 = param_2 + 1;
      iVar4 = iVar4 + -1;
      fVar2 = fVar1 * *pfVar3 + fVar2;
    } while (iVar4 != 0);
    local_1c[iVar5] = fVar2;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  param_1[1] = local_1c[0];
  param_1[2] = local_1c[1];
  param_1[3] = local_1c[2];
  param_1[4] = local_1c[3];
  param_1[1] = local_1c[0];
  param_1[2] = local_1c[1];
  param_1[3] = local_1c[2];
  param_1[4] = local_1c[3];
  *param_1 = &PTR_FUN_362488f4;
  FUN_361bc7c0(&local_20);
  ExceptionList = local_c;
  return param_1;
}

