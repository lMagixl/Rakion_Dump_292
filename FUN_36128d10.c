
undefined4 __fastcall FUN_36128d10(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  
  fVar1 = *(float *)(in_EAX + 0x3c) - *param_2;
  fVar2 = *(float *)(in_EAX + 0x40) - param_2[1];
  fVar3 = *(float *)(in_EAX + 0x44) - param_2[2];
  *param_3 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  *param_1 = *(float *)(in_EAX + 0x3c);
  param_1[1] = *(float *)(in_EAX + 0x40);
  param_1[2] = *(float *)(in_EAX + 0x44);
  return 1;
}

