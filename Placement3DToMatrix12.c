
/* void __cdecl Placement3DToMatrix12(class CPlacement3D const &,float (&)[12]) */

void __cdecl Placement3DToMatrix12(CPlacement3D *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x18e220  2766  ?Placement3DToMatrix12@@YAXABVCPlacement3D@@AAY0M@M@Z */
  MakeRotationMatrixFast((Matrix<float,3,3> *)&local_24,(Vector<float,3> *)(param_1 + 0xc));
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  param_2[1] = local_20;
  *param_2 = local_24;
  param_2[2] = local_1c;
  param_2[3] = fVar1;
  param_2[4] = local_18;
  param_2[5] = local_14;
  param_2[6] = local_10;
  param_2[7] = fVar2;
  param_2[8] = local_c;
  param_2[9] = local_8;
  param_2[10] = local_4;
  param_2[0xb] = fVar3;
  return;
}

