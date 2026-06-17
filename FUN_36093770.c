
void FUN_36093770(void)

{
  int unaff_ESI;
  
  if (*(void **)(unaff_ESI + 100) != (void *)0x0) {
    FreeMemory(*(void **)(unaff_ESI + 100));
    *(undefined4 *)(unaff_ESI + 100) = 0;
  }
  if (*(void **)(unaff_ESI + 0x68) != (void *)0x0) {
    FreeMemory(*(void **)(unaff_ESI + 0x68));
    *(undefined4 *)(unaff_ESI + 0x68) = 0;
  }
  return;
}

