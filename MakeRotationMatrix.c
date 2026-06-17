
/* void __cdecl MakeRotationMatrix(class Matrix<float,3,3> &,class Vector<float,3> const &) */

void __cdecl MakeRotationMatrix(Matrix<float,3,3> *param_1,Vector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* 0x49020  2618
                       ?MakeRotationMatrix@@YAXAAV?$Matrix@M$02$02@@ABV?$Vector@M$02@@@Z */
  fVar1 = Sin(*(float *)param_2);
  fVar2 = Cos(*(float *)param_2);
  fVar3 = Sin(*(float *)(param_2 + 4));
  fVar4 = Cos(*(float *)(param_2 + 4));
  fVar5 = Sin(*(float *)(param_2 + 8));
  fVar6 = Cos(*(float *)(param_2 + 8));
  *(float *)param_1 = fVar6 * fVar2 + fVar1 * fVar5 * fVar3;
  *(float *)(param_1 + 4) = fVar6 * fVar3 * fVar1 - fVar5 * fVar2;
  *(float *)(param_1 + 8) = fVar4 * fVar1;
  *(float *)(param_1 + 0xc) = fVar5 * fVar4;
  *(float *)(param_1 + 0x10) = fVar6 * fVar4;
  *(float *)(param_1 + 0x14) = -fVar3;
  *(float *)(param_1 + 0x18) = fVar5 * fVar3 * fVar2 - fVar6 * fVar1;
  *(float *)(param_1 + 0x1c) = fVar5 * fVar1 + fVar6 * fVar3 * fVar2;
  *(float *)(param_1 + 0x20) = fVar4 * fVar2;
  return;
}

