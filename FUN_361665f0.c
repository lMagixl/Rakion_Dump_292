
void __cdecl FUN_361665f0(float *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = *param_2;
  fVar2 = *(float *)(iVar1 + 0x90);
  fVar3 = *(float *)(iVar1 + 0x94);
  fVar4 = *(float *)(iVar1 + 0x98);
  if (0 < param_2[1]) {
    FUN_361665f0(&local_c,(int *)(param_2[1] * 0x8c + DAT_362fe994));
    *param_1 = fVar2 * local_c;
    param_1[1] = fVar3 * local_8;
    param_1[2] = fVar4 * local_4;
    return;
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  param_1[2] = fVar4;
  return;
}

