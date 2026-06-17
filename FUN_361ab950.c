
void __cdecl FUN_361ab950(float *param_1,float param_2,float param_3)

{
  float *extraout_EDX;
  float *unaff_EDI;
  float local_24 [3];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_361ab300(unaff_EDI,&local_c);
  FUN_361ab250(param_1,local_24);
  FUN_361ab610(&local_18,extraout_EDX,param_2,param_3);
  *unaff_EDI = local_18 + local_c;
  unaff_EDI[1] = local_14 + local_8;
  unaff_EDI[2] = local_10 + local_4;
  return;
}

