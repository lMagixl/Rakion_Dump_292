
/* int __cdecl GetCharsetFromLang(unsigned short) */

int __cdecl GetCharsetFromLang(ushort param_1)

{
  int iVar1;
  
                    /* 0x187d50  1755  ?GetCharsetFromLang@@YAHG@Z */
  iVar1 = 0;
  switch(param_1 & 0x3ff) {
  case 1:
    return 0xb2;
  case 2:
  case 0x19:
  case 0x22:
  case 0x23:
    iVar1 = 0xcc;
    break;
  case 4:
    if (param_1 >> 10 == 1) {
      return 0x88;
    }
    if (param_1 >> 10 == 2) {
      return 0x86;
    }
    break;
  case 5:
  case 0xe:
  case 0x15:
  case 0x18:
  case 0x1a:
  case 0x1b:
  case 0x24:
  case 0x2f:
    return 0xee;
  case 8:
    return 0xa1;
  case 0xd:
    return 0xb1;
  case 0x11:
    return 0x80;
  case 0x12:
    return 0x81;
  case 0x1e:
    return 0xde;
  case 0x1f:
    return 0xa2;
  case 0x25:
  case 0x26:
  case 0x27:
    return 0xba;
  }
  return iVar1;
}

