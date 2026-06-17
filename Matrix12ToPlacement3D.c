
/* void __cdecl Matrix12ToPlacement3D(float const (&)[12],class CPlacement3D &) */

void __cdecl Matrix12ToPlacement3D(float *param_1,CPlacement3D *param_2)

{
  float fVar1;
  float fVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x18e2b0  2635  ?Matrix12ToPlacement3D@@YAXAAY0M@$$CBMAAVCPlacement3D@@@Z */
  local_24 = *param_1;
  local_20 = param_1[1];
  local_1c = param_1[2];
  local_18 = param_1[4];
  local_14 = param_1[5];
  local_10 = param_1[6];
  fVar1 = param_1[7];
  local_c = param_1[8];
  local_8 = param_1[9];
  local_4 = param_1[10];
  fVar2 = param_1[0xb];
  *(float *)param_2 = param_1[3];
  *(float *)(param_2 + 4) = fVar1;
  *(float *)(param_2 + 8) = fVar2;
  DecomposeRotationMatrix((Vector<float,3> *)(param_2 + 0xc),(Matrix<float,3,3> *)&local_24);
  return;
}

