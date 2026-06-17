
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl shaSetLightDirection(class Vector<float,3> const &) */

void __cdecl shaSetLightDirection(Vector<float,3> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* 0x8fc90  4374  ?shaSetLightDirection@@YAXABV?$Vector@M$02@@@Z */
  fVar1 = *(float *)param_1;
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  fVar4 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  if (fVar4 < (float)_DAT_36223438) {
    DAT_362c9868 = fVar1 * _DAT_3622376c;
    DAT_362c986c = fVar2 * _DAT_3622376c;
    DAT_362c9870 = fVar3 * _DAT_3622376c;
    return;
  }
  fVar4 = _DAT_36223384 / fVar4;
  DAT_362c9868 = fVar1 * fVar4;
  DAT_362c986c = fVar2 * fVar4;
  DAT_362c9870 = fVar3 * fVar4;
  return;
}

