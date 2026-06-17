
void __fastcall FUN_3608ecc0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_EAX;
  
  fVar1 = DAT_362c99bc * *in_EAX;
  fVar3 = DAT_362c99c0 * in_EAX[1];
  fVar2 = DAT_362c99c4 * in_EAX[2];
  *param_1 = (DAT_362c99b8 * in_EAX[2] + DAT_362c99b4 * in_EAX[1] + DAT_362c99b0 * *in_EAX +
             DAT_362c9778) * DAT_362c3b1c;
  param_1[1] = (DAT_362c9774 + fVar2 + fVar3 + fVar1) * DAT_362c3b20;
  return;
}

