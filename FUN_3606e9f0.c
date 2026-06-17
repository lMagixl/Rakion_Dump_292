
void FUN_3606e9f0(void)

{
  int iVar1;
  
  iVar1 = FUN_36061f30(0x362c3a84);
  if (2 < iVar1) {
    *(float *)(DAT_362bef74 + 0x20) = (float)iVar1 + *(float *)(DAT_362bef74 + 0x20);
    *(int *)(_pGfx + 0xb34) = *(int *)(_pGfx + 0xb34) + iVar1;
    (*DAT_362c46a4)(iVar1,DAT_362c3a88);
    DAT_362c3a8c = 0;
  }
  return;
}

