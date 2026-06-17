
void FUN_360ffcc0(void)

{
  if (DAT_362cf514 != (void *)0x0) {
    FreeMemory(DAT_362cf514);
  }
  if (DAT_362cf51c != (void *)0x0) {
    FreeMemory(DAT_362cf51c);
  }
  DAT_362cf514 = (void *)0x0;
  DAT_362cf51c = (void *)0x0;
  return;
}

