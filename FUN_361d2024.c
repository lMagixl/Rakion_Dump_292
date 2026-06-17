
void FUN_361d2024(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_361dae2b();
  if (iVar1 == 0) {
    PTR_FUN_362acc98 = FUN_361d1c1f;
    UNRECOVERED_JUMPTABLE = FUN_361d1d96;
  }
  else {
    UNRECOVERED_JUMPTABLE = FUN_361d1e7e;
    PTR_FUN_362acc98 = FUN_361d1e7e;
  }
  PTR_FUN_362acc9c = UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x361d2051. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

