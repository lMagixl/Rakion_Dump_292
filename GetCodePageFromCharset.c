
/* int __cdecl GetCodePageFromCharset(int) */

int __cdecl GetCodePageFromCharset(int param_1)

{
  int iVar1;
  
                    /* 0x187e30  1765  ?GetCodePageFromCharset@@YAHH@Z */
  iVar1 = 0x4e4;
  switch(param_1) {
  case 0x80:
    return 0x3a4;
  case 0x81:
    return 0x3b5;
  case 0x86:
    return 0x3a8;
  case 0x88:
    return 0x3b6;
  case 0xa1:
    return 0x4e5;
  case 0xa2:
    return 0x4e6;
  case 0xb1:
    return 0x4e7;
  case 0xb2:
    return 0x4e8;
  case 0xba:
    return 0x4e9;
  case 0xde:
    return 0x36a;
  case 0xee:
    iVar1 = 0x4e2;
  }
  return iVar1;
}

