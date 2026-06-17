
void __fastcall FUN_360feba0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
  param_1[4] = *puVar1;
  param_1[5] = puVar1[1];
  return;
}

