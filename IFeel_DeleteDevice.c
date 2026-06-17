
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl IFeel_DeleteDevice(void) */

void __cdecl IFeel_DeleteDevice(void)

{
                    /* 0x274f0  2269  ?IFeel_DeleteDevice@@YAXXZ */
  if (DAT_362b9314 != (code *)0x0) {
    (*DAT_362b9314)();
  }
  DAT_362b9310 = 0;
  DAT_362b9314 = (code *)0x0;
  DAT_362b9318 = 0;
  DAT_362b931c = 0;
  _DAT_362b9320 = 0;
  DAT_362b9324 = 0;
  DAT_362b9328 = 0;
  DAT_362b932c = 0;
  if (DAT_362b930c != (HMODULE)0x0) {
    FreeLibrary(DAT_362b930c);
  }
  DAT_362b930c = (HMODULE)0x0;
  return;
}

