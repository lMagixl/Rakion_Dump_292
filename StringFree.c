
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl StringFree(char *) */

void __cdecl StringFree(char *param_1)

{
  uint uVar1;
  
                    /* 0x23310  3700  ?StringFree@@YAXPAD@Z */
  if (param_1 == &DAT_362a1b08) {
    _DAT_362b9028 = _DAT_362b9028 + -1;
    return;
  }
  DAT_362b901c = DAT_362b901c + -1;
  uVar1 = MEM_Size(param_1);
  DAT_362b9020 = DAT_362b9020 - uVar1;
  FreeMemory(param_1);
  return;
}

