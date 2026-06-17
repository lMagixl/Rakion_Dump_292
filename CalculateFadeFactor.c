
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl CalculateFadeFactor(struct AnimList const &) */

float __cdecl CalculateFadeFactor(AnimList *param_1)

{
  float fVar1;
  float fVar2;
  
                    /* 0x16e790  1129  ?CalculateFadeFactor@@YAMABUAnimList@@@Z */
  if (*(float *)(param_1 + 4) == _DAT_3622376c) {
    return _DAT_36223384;
  }
  fVar1 = ((CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc)) -
          *(float *)param_1) / *(float *)(param_1 + 4);
  fVar2 = _DAT_3622376c;
  if ((_DAT_3622376c <= fVar1) &&
     (fVar2 = fVar1,
     (NAN(fVar1) || NAN(_DAT_36223384)) || fVar1 < _DAT_36223384 == (fVar1 == _DAT_36223384))) {
    return _DAT_36223384;
  }
  return fVar2;
}

