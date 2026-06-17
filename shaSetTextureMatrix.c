
/* void __cdecl shaSetTextureMatrix(float const (&)[12],long) */

void __cdecl shaSetTextureMatrix(float *param_1,long param_2)

{
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
                    /* 0x8e5a0  4394  ?shaSetTextureMatrix@@YAXAAY0M@$$CBMJ@Z */
  if (param_2 != -1) {
    shaSetTextureUnit(param_2);
  }
  local_40 = *param_1;
  local_3c = param_1[4];
  local_38 = param_1[8];
  local_30 = param_1[1];
  local_2c = param_1[5];
  local_28 = param_1[9];
  local_20 = param_1[2];
  local_1c = param_1[6];
  local_18 = param_1[10];
  local_10 = param_1[3];
  local_c = param_1[7];
  local_8 = param_1[0xb];
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  local_4 = 0x3f800000;
  (*DAT_362c4670)(&local_40);
  return;
}

