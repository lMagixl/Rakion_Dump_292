
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36031720(CTString *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  CTimer::GetHighPrecisionTimer(_pTimer);
  fVar1 = (float)((float10)CONCAT44(uStack_4,local_8) / (float10)*(longlong *)_pTimer);
  if (_DAT_362be294 == _DAT_3622376c) {
    FUN_36031640(DAT_362befa4,s_BOOTUP_36225618,DAT_362befa0,fVar1);
    DAT_362be2a8 = DAT_362befa4;
    DAT_362be2a4 = DAT_362befa0;
    _DAT_362be298 = fVar1;
  }
  else {
    FUN_36031640((void *)((int)DAT_362befa4 - (int)DAT_362be2a0),DAT_362be3ac,
                 DAT_362befa0 - DAT_362be29c,fVar1 - _DAT_362be294);
  }
  DAT_362be2a0 = DAT_362befa4;
  DAT_362be29c = DAT_362befa0;
  _DAT_362be294 = fVar1;
  iVar2 = CTString::operator==(param_1,s_starting_server_36225620);
  if (iVar2 != 0) {
    FUN_36031640((void *)((int)DAT_362befa4 - (int)DAT_362be2a8),s_TOTAL_36225630,
                 DAT_362befa0 - DAT_362be2a4,fVar1 - _DAT_362be298);
    _DAT_362be294 = 0.0;
  }
  return;
}

