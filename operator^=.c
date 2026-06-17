
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl operator^=(class Vector<float,3> &,class Matrix<double,3,3> const &) */

void __cdecl operator^=(Vector<float,3> *param_1,Matrix<double,3,3> *param_2)

{
  Vector<float,3> *pVVar1;
  float10 fVar2;
  float10 fVar3;
  
                    /* 0x499b0  866  ??_6@YAXAAV?$Vector@M$02@@ABV?$Matrix@N$02$02@@@Z */
  pVVar1 = param_1 + 8;
  fVar2 = (float10)_CIasin();
  *(float *)(param_1 + 4) = (float)(fVar2 * (float10)_DAT_36227d18);
  fVar2 = SQRT((float10)_DAT_36227d28 -
               (float10)*(double *)(param_2 + 0x28) * (float10)*(double *)(param_2 + 0x28));
  if ((float10)_DAT_36227d50 <= fVar2) {
    fVar2 = (float10)_DAT_36227d28 / fVar2;
    fVar3 = (float10)fpatan(fVar2 * (float10)*(double *)(param_2 + 0x18),
                            fVar2 * (float10)*(double *)(param_2 + 0x20));
    *(float *)pVVar1 = (float)(fVar3 * (float10)_DAT_36227d18);
    fVar3 = fVar2 * (float10)*(double *)(param_2 + 0x10);
    fVar2 = fVar2 * (float10)*(double *)(param_2 + 0x40);
  }
  else {
    *(float *)pVVar1 = 0.0;
    fVar3 = (float10)*(double *)(param_2 + 8) / -(float10)*(double *)(param_2 + 0x28);
    fVar2 = (float10)*(double *)param_2;
  }
  fVar2 = (float10)fpatan(fVar3,fVar2);
  *(float *)param_1 = (float)(fVar2 * (float10)_DAT_36227d18);
  Snap((float *)param_1,0.25);
  Snap((float *)(param_1 + 4),0.25);
  Snap((float *)pVVar1,0.25);
  return;
}

