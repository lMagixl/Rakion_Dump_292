
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl DecomposeRotationMatrixNoSnap(class Vector<float,3> &,class Matrix<float,3,3> const
   &) */

void __cdecl DecomposeRotationMatrixNoSnap(Vector<float,3> *param_1,Matrix<float,3,3> *param_2)

{
  float fVar1;
  float10 fVar2;
  
                    /* 0x493c0  1457
                       ?DecomposeRotationMatrixNoSnap@@YAXAAV?$Vector@M$02@@ABV?$Matrix@M$02$02@@@Z
                        */
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = (float10)_CIasin();
  *(float *)(param_1 + 4) = (float)(fVar2 * (float10)_DAT_36227d14);
  fVar1 = _DAT_36223384 - fVar1 * fVar1;
  if (fVar1 < _DAT_3622376c) {
    fVar1 = _DAT_3622376c;
  }
  if ((float)_DAT_36227d38 <= SQRT(fVar1)) {
    fVar2 = (float10)fpatan((float10)*(float *)(param_2 + 0xc),(float10)*(float *)(param_2 + 0x10));
    *(float *)(param_1 + 8) = (float)(fVar2 * (float10)_DAT_36227d14);
    fVar2 = (float10)fpatan((float10)*(float *)(param_2 + 8),(float10)*(float *)(param_2 + 0x20));
    *(float *)param_1 = (float)(fVar2 * (float10)_DAT_36227d14);
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  fVar2 = (float10)fpatan((float10)*(float *)(param_2 + 4) / -(float10)*(float *)(param_2 + 0x14),
                          (float10)*(float *)param_2);
  *(float *)param_1 = (float)(fVar2 * (float10)_DAT_36227d14);
  return;
}

