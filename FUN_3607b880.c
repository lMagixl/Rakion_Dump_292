
void __cdecl FUN_3607b880(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(_pGfx + 0xae8);
  fVar1 = *param_1;
  fVar3 = -*(float *)(_pGfx + 0xae8);
  if ((-*(float *)(_pGfx + 0xae8) <= fVar1) && (fVar3 = fVar2, fVar1 < fVar2 != (fVar1 == fVar2))) {
    fVar3 = fVar1;
  }
  *param_1 = fVar3;
  if (*(float *)(_pGfx + 0xae4) == fVar3) {
    return;
  }
  *(float *)(_pGfx + 0xae4) = fVar3;
  FUN_3607b4e0(*param_1);
  return;
}

