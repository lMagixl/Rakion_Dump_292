
void __cdecl FUN_361bc1b0(undefined4 *param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float local_10 [4];
  
  FUN_361bc160(local_10);
  pfVar3 = (float *)(param_3 + 4);
  iVar4 = 3;
  do {
    pfVar1 = (float *)((param_2 - param_3) + (int)pfVar3);
    fVar2 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
    *(float *)(&stack0xffffffec + -param_3 + (int)pfVar3) = *pfVar1 + fVar2;
  } while (iVar4 != 0);
  param_1[1] = local_10[1];
  param_1[2] = local_10[2];
  param_1[3] = local_10[3];
  param_1[1] = local_10[1];
  param_1[2] = local_10[2];
  param_1[3] = local_10[3];
  *param_1 = &PTR_FUN_3623dc04;
  FUN_361bc1a0(local_10);
  return;
}

