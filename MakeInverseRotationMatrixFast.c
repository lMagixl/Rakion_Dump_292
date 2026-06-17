
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl MakeInverseRotationMatrixFast(class Matrix<float,3,3> &,class Vector<float,3> const
   &) */

void __cdecl MakeInverseRotationMatrixFast(Matrix<float,3,3> *param_1,Vector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
                    /* 0x492e0  2610
                       ?MakeInverseRotationMatrixFast@@YAXAAV?$Matrix@M$02$02@@ABV?$Vector@M$02@@@Z
                        */
  fVar5 = (float10)fsin((float10)*(float *)param_2 * (float10)_DAT_3622300c);
  fVar6 = (float10)fcos((float10)*(float *)param_2 * (float10)_DAT_3622300c);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fsin((float10)*(float *)(param_2 + 4) * (float10)_DAT_3622300c);
  fVar7 = (float10)fcos((float10)*(float *)(param_2 + 4) * (float10)_DAT_3622300c);
  fVar2 = (float)fVar7;
  fVar7 = (float10)fsin((float10)*(float *)(param_2 + 8) * (float10)_DAT_3622300c);
  fVar3 = (float)fVar7;
  fVar7 = (float10)fcos((float10)*(float *)(param_2 + 8) * (float10)_DAT_3622300c);
  fVar4 = (float)fVar7;
  *(float *)param_1 = (float)((float10)fVar4 * (float10)fVar1 + (float10)fVar3 * fVar6 * fVar5);
  *(float *)(param_1 + 0xc) =
       (float)((float10)fVar4 * fVar6 * fVar5 - (float10)fVar3 * (float10)fVar1);
  *(float *)(param_1 + 0x18) = (float)((float10)fVar2 * fVar5);
  *(float *)(param_1 + 4) = fVar3 * fVar2;
  *(float *)(param_1 + 0x10) = fVar4 * fVar2;
  *(float *)(param_1 + 0x1c) = (float)-fVar6;
  *(float *)(param_1 + 8) =
       (float)((float10)(float)((float10)fVar3 * fVar6) * (float10)fVar1 - (float10)fVar4 * fVar5);
  *(float *)(param_1 + 0x14) =
       (float)((float10)fVar3 * fVar5 + (float10)(float)((float10)fVar4 * fVar6) * (float10)fVar1);
  *(float *)(param_1 + 0x20) = fVar2 * fVar1;
  return;
}

