
void __fastcall FUN_36177a00(void *param_1)

{
  int in_EAX;
  float *pfVar1;
  float *pfVar2;
  float local_18 [6];
  
  pfVar2 = (float *)(in_EAX * 0x2c + *(int *)((int)param_1 + 0xf4));
  pfVar1 = FUN_36177880(param_1,local_18,in_EAX);
  *pfVar2 = *pfVar1;
  pfVar2[1] = pfVar1[1];
  pfVar2[2] = pfVar1[2];
  pfVar2[3] = pfVar1[3];
  pfVar2[4] = pfVar1[4];
  pfVar2[5] = pfVar1[5];
  return;
}

