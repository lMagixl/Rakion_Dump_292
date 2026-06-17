
void __cdecl FUN_36106440(void *param_1)

{
  code *pcVar1;
  
  if ((DAT_362cfacc == 0) && (dbg_bAtHome != 0)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FreeMemory(param_1);
  return;
}

