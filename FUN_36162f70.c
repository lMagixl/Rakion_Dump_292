
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36162f70(ushort param_1)

{
  ushort in_AX;
  float *unaff_ESI;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (float)in_AX * _DAT_3622dcfc * _DAT_36227ce0 - _DAT_362280e0;
  fVar3 = (float)param_1 * _DAT_3622dcfc * _DAT_36227ce0 - _DAT_362280e0;
  fVar1 = Cos(fVar3);
  fVar2 = Sin(fVar4);
  *unaff_ESI = -(fVar2 * fVar1);
  fVar1 = Sin(fVar3);
  unaff_ESI[1] = fVar1;
  fVar3 = Cos(fVar3);
  fVar4 = Cos(fVar4);
  unaff_ESI[2] = -(fVar4 * fVar3);
  return;
}

