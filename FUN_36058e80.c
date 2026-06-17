
void __cdecl FUN_36058e80(float *param_1,float *param_2)

{
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_24 = *param_2;
  local_20 = param_2[1];
  local_1c = param_2[2];
  local_18 = param_2[3];
  local_c = param_2[6];
  local_14 = param_2[4];
  local_10 = param_2[5];
  local_8 = param_2[7];
  local_4 = param_2[8];
  FUN_36058df0(param_1,&local_24);
  FUN_36058df0(param_1,&local_18);
  FUN_36058df0(param_1,&local_c);
  *param_2 = local_24;
  param_2[3] = local_18;
  param_2[6] = local_c;
  param_2[1] = local_20;
  param_2[4] = local_14;
  param_2[7] = local_8;
  param_2[2] = local_1c;
  param_2[5] = local_10;
  param_2[8] = local_4;
  return;
}

