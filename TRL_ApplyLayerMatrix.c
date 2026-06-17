
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl TRL_ApplyLayerMatrix(class CTerrain *,long) */

void __cdecl TRL_ApplyLayerMatrix(CTerrain *param_1,long param_2)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  float10 fVar5;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [3];
  int local_54;
  float local_4c;
  int local_44;
  undefined4 local_38;
  float local_30 [4];
  float local_20;
  float local_1c;
  undefined4 local_8;
  
                    /* 0x17a160  3719  ?TRL_ApplyLayerMatrix@@YAXPAVCTerrain@@J@Z */
  piVar3 = (int *)(param_2 * 0x94 + *(int *)(*(int *)(param_1 + 0x2c) + 0x10c));
  pfVar1 = (float *)*piVar3;
  pfVar4 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = 0.0;
    pfVar4 = pfVar4 + 1;
  }
  local_8 = 0x3f800000;
  pfVar4 = local_60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar4 = 0.0;
    pfVar4 = pfVar4 + 1;
  }
  local_38 = 0x3f800000;
  fVar5 = (float10)fcos((float10)(float)piVar3[9] * (float10)_DAT_3622300c);
  local_30[0] = (float)fVar5;
  fVar5 = (float10)fsin((float10)(float)piVar3[10] * (float10)_DAT_3622300c);
  local_30[1] = (float)-fVar5;
  fVar5 = (float10)fsin((float10)(float)piVar3[9] * (float10)_DAT_3622300c);
  local_20 = (float)fVar5;
  fVar5 = (float10)fcos((float10)(float)piVar3[10] * (float10)_DAT_3622300c);
  local_1c = (float)fVar5;
  local_54 = piVar3[7];
  local_44 = piVar3[8];
  local_60[0] = _DAT_36223384 / (float)piVar3[0xb];
  local_4c = _DAT_36223384 / (float)piVar3[0xc];
  FUN_36162680(&local_90,local_30,local_60);
  *pfVar1 = local_90;
  pfVar1[1] = local_8c;
  pfVar1[2] = local_88;
  pfVar1[3] = local_84;
  pfVar1[4] = local_80;
  pfVar1[5] = local_7c;
  pfVar1[6] = local_78;
  pfVar1[7] = local_74;
  pfVar1[8] = local_70;
  pfVar1[9] = local_6c;
  pfVar1[10] = local_68;
  pfVar1[0xb] = local_64;
  return;
}

