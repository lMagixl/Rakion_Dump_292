
uint FUN_3614ba60(void)

{
  byte bVar1;
  int *piVar2;
  size_t sVar3;
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[0xf] != 0) {
    return 0xffffffff;
  }
  if (unaff_ESI[1] == 0) {
    piVar2 = _errno();
    *piVar2 = 0;
    sVar3 = fread((void *)unaff_ESI[0x11],1,0x4000,(FILE *)unaff_ESI[0x10]);
    unaff_ESI[1] = sVar3;
    if (sVar3 == 0) {
      unaff_ESI[0xf] = 1;
      if ((*(byte *)(unaff_ESI[0x10] + 0xc) & 0x20) == 0) {
        return 0xffffffff;
      }
      unaff_ESI[0xe] = 0xffffffff;
      return 0xffffffff;
    }
    *unaff_ESI = unaff_ESI[0x11];
  }
  unaff_ESI[1] = unaff_ESI[1] + -1;
  bVar1 = *(byte *)*unaff_ESI;
  *unaff_ESI = (byte *)*unaff_ESI + 1;
  return (uint)bVar1;
}

