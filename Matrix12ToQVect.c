
/* void __cdecl Matrix12ToQVect(struct QVect &,float const (&)[12]) */

void __cdecl Matrix12ToQVect(QVect *param_1,float *param_2)

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
  
                    /* 0x16e720  2636  ?Matrix12ToQVect@@YAXAAUQVect@@AAY0M@$$CBM@Z */
  local_24 = *param_2;
  local_20 = param_2[1];
  local_1c = param_2[2];
  local_18 = param_2[4];
  local_14 = param_2[5];
  local_c = param_2[8];
  local_10 = param_2[6];
  local_8 = param_2[9];
  local_4 = param_2[10];
  FUN_3616df40(param_1 + 0xc,&local_24);
  *(float *)param_1 = param_2[3];
  *(float *)(param_1 + 4) = param_2[7];
  *(float *)(param_1 + 8) = param_2[0xb];
  return;
}

