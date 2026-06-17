
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RM_SetLightDirection(class Vector<float,3> &) */

void __cdecl RM_SetLightDirection(Vector<float,3> *param_1)

{
  float fVar1;
  
                    /* 0x1657f0  2932  ?RM_SetLightDirection@@YAXAAV?$Vector@M$02@@@Z */
  if ((float)_DAT_36223438 <=
      SQRT(*(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
           *(float *)(param_1 + 4) * *(float *)(param_1 + 4) + *(float *)param_1 * *(float *)param_1
          )) {
    fVar1 = _DAT_36223384 /
            SQRT(*(float *)(param_1 + 8) * *(float *)(param_1 + 8) +
                 *(float *)(param_1 + 4) * *(float *)(param_1 + 4) +
                 *(float *)param_1 * *(float *)param_1);
    *(float *)param_1 = fVar1 * *(float *)param_1;
    *(float *)(param_1 + 4) = fVar1 * *(float *)(param_1 + 4);
    fVar1 = fVar1 * *(float *)(param_1 + 8);
  }
  else {
    *(float *)param_1 = *(float *)param_1 * _DAT_3622376c;
    *(float *)(param_1 + 4) = *(float *)(param_1 + 4) * _DAT_3622376c;
    fVar1 = *(float *)(param_1 + 8) * _DAT_3622376c;
  }
  *(float *)(param_1 + 8) = fVar1;
  DAT_362fe200 = *(float *)param_1 * _DAT_36227d20;
  DAT_362fe204 = *(float *)(param_1 + 4) * _DAT_36227d20;
  DAT_362fe208 = *(float *)(param_1 + 8) * _DAT_36227d20;
  return;
}

