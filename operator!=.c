
/* void __cdecl operator!=(class Matrix<double,3,3> &,class Vector<float,3> const &) */

void __cdecl operator!=(Matrix<double,3,3> *param_1,Vector<float,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* 0x497e0  845  ??9@YAXAAV?$Matrix@N$02$02@@ABV?$Vector@M$02@@@Z */
  fVar1 = Sin(*(float *)param_2);
  fVar2 = Sin(*(float *)(param_2 + 8));
  fVar3 = Sin(*(float *)(param_2 + 4));
  fVar4 = Cos(*(float *)param_2);
  fVar5 = Cos(*(float *)(param_2 + 8));
  *(double *)param_1 = (double)(fVar5 * fVar4 + fVar3 * fVar2 * fVar1);
  fVar1 = Cos(*(float *)(param_2 + 8));
  fVar2 = Sin(*(float *)param_2);
  fVar3 = Sin(*(float *)(param_2 + 4));
  fVar4 = Cos(*(float *)param_2);
  fVar5 = Sin(*(float *)(param_2 + 8));
  *(double *)(param_1 + 0x18) = (double)(fVar3 * fVar2 * fVar1 - fVar5 * fVar4);
  fVar1 = Sin(*(float *)param_2);
  fVar2 = Cos(*(float *)(param_2 + 4));
  *(double *)(param_1 + 0x30) = (double)(fVar2 * fVar1);
  fVar1 = Sin(*(float *)(param_2 + 8));
  fVar2 = Cos(*(float *)(param_2 + 4));
  *(double *)(param_1 + 8) = (double)(fVar2 * fVar1);
  fVar1 = Cos(*(float *)(param_2 + 8));
  fVar2 = Cos(*(float *)(param_2 + 4));
  *(double *)(param_1 + 0x20) = (double)(fVar2 * fVar1);
  fVar1 = Sin(*(float *)(param_2 + 4));
  *(double *)(param_1 + 0x38) = (double)-fVar1;
  fVar1 = Cos(*(float *)param_2);
  fVar2 = Sin(*(float *)(param_2 + 8));
  fVar3 = Sin(*(float *)(param_2 + 4));
  fVar4 = Cos(*(float *)(param_2 + 8));
  fVar5 = Sin(*(float *)param_2);
  *(double *)(param_1 + 0x10) = (double)(fVar3 * fVar2 * fVar1 - fVar5 * fVar4);
  fVar1 = Cos(*(float *)param_2);
  fVar2 = Cos(*(float *)(param_2 + 8));
  fVar3 = Sin(*(float *)(param_2 + 4));
  fVar4 = Sin(*(float *)param_2);
  fVar5 = Sin(*(float *)(param_2 + 8));
  *(double *)(param_1 + 0x28) = (double)(fVar5 * fVar4 + fVar3 * fVar2 * fVar1);
  fVar1 = Cos(*(float *)param_2);
  fVar2 = Cos(*(float *)(param_2 + 4));
  *(double *)(param_1 + 0x40) = (double)(fVar2 * fVar1);
  return;
}

