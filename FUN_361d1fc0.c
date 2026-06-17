
void FUN_361d1fc0(void)

{
  int iVar1;
  
  iVar1 = FUN_361dae2b();
  if (iVar1 == 0) {
    PTR_FUN_362acc98 = FUN_361d1c1f;
    PTR_FUN_362acc9c = FUN_361d1d96;
  }
  else {
    PTR_FUN_362acc98 = FUN_361d1e7e;
    PTR_FUN_362acc9c = FUN_361d1e7e;
  }
                    /* WARNING: Could not recover jumptable at 0x361d1ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_362acc98)();
  return;
}

