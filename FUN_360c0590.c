
void FUN_360c0590(void)

{
  uint uVar1;
  uint local_4;
  
  uVar1 = *(uint *)(&DAT_362a5f10 + DAT_362cba60 * 4);
  local_4 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  (*DAT_362c3f98)(&local_4);
  DAT_362cba60 = DAT_362cba60 + 1 & 0x8000001f;
  if ((int)DAT_362cba60 < 0) {
    DAT_362cba60 = (DAT_362cba60 - 1 | 0xffffffe0) + 1;
  }
  return;
}

