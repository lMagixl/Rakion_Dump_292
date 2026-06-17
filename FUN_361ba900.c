
void __fastcall FUN_361ba900(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    param_1[1] = 0;
  }
  return;
}

