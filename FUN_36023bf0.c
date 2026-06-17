
void FUN_36023bf0(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
  pvVar2 = *(void **)(iVar1 + 0x24);
  if (pvVar2 != (void *)0x0) {
    FreeMemory(pvVar2);
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  return;
}

