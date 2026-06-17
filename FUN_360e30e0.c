
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_360e30e0(float *param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

{
  float *this;
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  int *piVar10;
  float local_6c;
  float *local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_54 [2];
  int local_4c;
  void *local_48;
  int local_30 [2];
  int local_28;
  void *local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36215598;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_4 = *param_1;
  param_4[1] = param_1[1];
  param_4[2] = param_1[2];
  param_4[3] = param_1[3];
  param_4[9] = param_1[9];
  *param_5 = *param_1;
  param_5[1] = param_1[1];
  param_5[2] = param_1[2];
  param_5[3] = param_1[3];
  param_5[9] = param_1[9];
  local_6c = param_2[1] * param_1[2] - param_2[2] * param_1[1];
  local_68 = (float *)(*param_1 * param_2[2] - param_1[2] * *param_2);
  local_64 = *param_2 * param_1[1] - param_2[1] * *param_1;
  local_60 = local_6c;
  local_5c = (float)local_68;
  local_58 = local_64;
  if (_DAT_362a29a0 * (float)_DAT_36232860 <=
      SQRT(local_6c * local_6c + (float)local_68 * (float)local_68 + local_64 * local_64)) {
    FUN_360e1610((int)local_30);
    local_4 = 0;
    FUN_360e1610((int)local_54);
    FUN_360df640(local_30,&local_6c);
    local_6c = -local_60;
    local_68 = (float *)-local_5c;
    local_64 = -local_58;
    local_60 = local_6c;
    local_5c = (float)local_68;
    local_58 = local_64;
    FUN_360df640(local_54,&local_60);
    this = param_1 + 4;
    fVar4 = 0.0;
    local_6c = 0.0;
    local_4 = CONCAT31(local_4._1_3_,2);
    local_68 = this;
    iVar1 = FUN_360defb0((int)this);
    if (0 < iVar1) {
      do {
        iVar1 = FUN_360def70(this,(int)fVar4);
        pfVar2 = (float *)FUN_360def70(this,(int)fVar4);
        piVar10 = local_54;
        piVar9 = local_30;
        pfVar6 = param_2;
        pfVar7 = param_4;
        pfVar8 = param_5;
        iVar3 = FUN_360def70(this,(int)fVar4);
        FUN_360e2bb0(pfVar2,(float *)(iVar1 + 0xc),*(undefined4 *)(iVar3 + 0x18),pfVar6,pfVar7,
                     pfVar8,piVar9,piVar10);
        fVar4 = (float)((int)fVar4 + 1);
        local_6c = fVar4;
        iVar1 = FUN_360defb0((int)this);
      } while ((int)fVar4 < iVar1);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_360e0840(local_30);
    FUN_360e0840(local_54);
    FUN_360e08c0(local_30);
    FUN_360e08c0(local_54);
    FUN_360e1630(local_30,param_4 + 4,param_3);
    FUN_360e1630(local_54,param_5 + 4,param_3);
    if (local_4c != 0) {
      operator_delete__(local_48);
    }
    if (local_28 != 0) {
      operator_delete__(local_24);
    }
    ExceptionList = local_c;
    return 0;
  }
  fVar5 = FUN_360e1030(param_2,param_1);
  if (fVar5 <= (float10)_DAT_362a29a0 * (float10)_DAT_36232860) {
    if ((float10)_DAT_362a29a0 * (float10)_DAT_36232878 <= fVar5) {
      ExceptionList = local_c;
      return 1;
    }
    FUN_360dfc70(param_5 + 4,(CListHead *)(param_1 + 4));
    ExceptionList = local_c;
    return 0;
  }
  FUN_360dfc70(param_4 + 4,(CListHead *)(param_1 + 4));
  ExceptionList = local_c;
  return 0;
}

