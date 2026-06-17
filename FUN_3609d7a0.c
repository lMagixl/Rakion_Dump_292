
void FUN_3609d7a0(void)

{
  if (DAT_362c9f94 != 0) {
    (*DAT_362c9fa0)();
    FUN_3609d4e0();
    FreeLibrary(DAT_362c9f98);
    DAT_362c9f98 = (HMODULE)0x0;
    DAT_362c9f94 = 0;
  }
  if (DAT_362c9fc4 != 0) {
    FUN_3609d5f0();
    FreeLibrary(DAT_362c9fc8);
    DAT_362c9fc8 = (HMODULE)0x0;
    DAT_362c9fc4 = 0;
  }
  return;
}

