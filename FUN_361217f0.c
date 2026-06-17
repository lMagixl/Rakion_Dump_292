
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361217f0(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float unaff_ESI;
  float *pfVar3;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_88 [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float afStack_64 [9];
  undefined1 auStack_40 [64];
  
  (**(code **)((int)*param_1 + 0xd8))(&local_b4);
  fStack_94 = _DAT_36223384 / unaff_ESI;
  local_b4 = _DAT_36223384 / local_b4;
  fStack_b0 = _DAT_36223384 / fStack_b0;
  fStack_a0 = param_1[0x26] * ABS(fStack_94);
  fStack_ac = ABS(fStack_94) * param_1[0x23];
  fStack_9c = param_1[0x27] * ABS(local_b4);
  fStack_a8 = ABS(local_b4) * param_1[0x24];
  fStack_98 = param_1[0x28] * ABS(fStack_b0);
  fStack_a4 = ABS(fStack_b0) * param_1[0x25];
  afStack_88[0] = param_1[0x1b] * param_2[2] + param_1[0x18] * param_2[1] + *param_2 * param_1[0x15]
  ;
  afStack_88[1] = param_1[0x1c] * param_2[2] + *param_2 * param_1[0x16] + param_1[0x19] * param_2[1]
  ;
  afStack_88[2] = param_1[0x17] * *param_2 + param_1[0x1a] * param_2[1] + param_1[0x1d] * param_2[2]
  ;
  afStack_88[3] =
       param_1[0x15] * param_2[3] + param_2[4] * param_1[0x18] + param_2[5] * param_1[0x1b];
  fStack_78 = param_1[0x16] * param_2[3] + param_1[0x19] * param_2[4] + param_1[0x1c] * param_2[5];
  fStack_74 = param_2[4] * param_1[0x1a] + param_2[5] * param_1[0x1d] + param_1[0x17] * param_2[3];
  fStack_70 = param_1[0x15] * param_2[6] + param_2[7] * param_1[0x18] + param_2[8] * param_1[0x1b];
  fStack_6c = param_1[0x16] * param_2[6] + param_1[0x19] * param_2[7] + param_1[0x1c] * param_2[8];
  fStack_68 = param_2[7] * param_1[0x1a] + param_2[8] * param_1[0x1d] + param_1[0x17] * param_2[6];
  pfVar1 = afStack_88;
  pfVar3 = afStack_64;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    pfVar3 = pfVar3 + 1;
  }
  fStack_90 = local_b4;
  fStack_8c = fStack_b0;
  pfVar1 = FUN_360bf170(auStack_40,&fStack_ac,param_1,afStack_64);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

