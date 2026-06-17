
void __cdecl FUN_361ab780(float param_1,float param_2)

{
  float *unaff_EBX;
  float *unaff_EDI;
  float local_30;
  float local_2c;
  float local_28;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_361ab300(unaff_EBX,&local_30);
  if (local_28 * unaff_EDI[2] + local_2c * unaff_EDI[1] + local_30 * *unaff_EDI < param_2) {
    local_30 = *unaff_EDI * param_1 + local_30;
    local_2c = unaff_EDI[1] * param_1 + local_2c;
    local_28 = unaff_EDI[2] * param_1 + local_28;
    if (param_2 <= local_28 * unaff_EDI[2] + local_2c * unaff_EDI[1] + local_30 * *unaff_EDI) {
      local_30 = *unaff_EDI * param_2;
      local_2c = unaff_EDI[1] * param_2;
      local_28 = unaff_EDI[2] * param_2;
    }
  }
  *unaff_EBX = local_c + local_30;
  unaff_EBX[1] = local_8 + local_2c;
  unaff_EBX[2] = local_4 + local_28;
  return;
}

