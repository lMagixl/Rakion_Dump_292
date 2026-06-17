
void __cdecl FUN_36162620(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *param_1 = fVar1 * *param_2 + fVar2 * param_2[1] + fVar3 * param_2[2] + param_2[3];
  param_1[1] = fVar1 * param_2[4] + fVar2 * param_2[5] + fVar3 * param_2[6] + param_2[7];
  param_1[2] = fVar1 * param_2[8] + fVar2 * param_2[9] + fVar3 * param_2[10] + param_2[0xb];
  return;
}

