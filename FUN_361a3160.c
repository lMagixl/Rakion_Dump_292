
void __fastcall FUN_361a3160(uint *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    do {
      CloseHandle(*(HANDLE *)(param_1[1] + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_1);
  }
  FUN_361a31e0((int)param_1);
  return;
}

