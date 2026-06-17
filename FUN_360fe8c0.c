
void __cdecl FUN_360fe8c0(void *param_1)

{
  code *pcVar1;
  
  if ((DAT_362cf4f4 == 0) && (dbg_bAtHome != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FreeMemory(param_1);
  return;
}

