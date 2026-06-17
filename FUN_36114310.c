
void __cdecl FUN_36114310(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((-1 < param_1) && (1 < _iStatsMode)) {
    iVar1 = DAT_362bef7c + param_1 * 0x28;
    puVar2 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar1 + 0x10) = *puVar2;
    *(undefined4 *)(iVar1 + 0x14) = puVar2[1];
  }
  DAT_362a645c = param_1;
  return;
}

