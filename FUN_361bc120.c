
uint FUN_361bc120(void)

{
  uint uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_36383050);
  DAT_362abd80 = DAT_362abd80 * 0x343fd + 0x269ec3;
  uVar1 = DAT_362abd80 >> 0x10;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_36383050);
  return uVar1 & 0x7fff;
}

