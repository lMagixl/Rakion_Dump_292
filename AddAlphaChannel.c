
/* void __cdecl AddAlphaChannel(unsigned char *,unsigned long *,long,unsigned char *) */

void __cdecl AddAlphaChannel(uchar *param_1,ulong *param_2,long param_3,uchar *param_4)

{
  uint3 uVar1;
  uchar uVar2;
  int iVar3;
  uchar *puVar4;
  
                    /* 0x8a8a0  948  ?AddAlphaChannel@@YAXPAEPAKJ0@Z */
  iVar3 = param_3 + -1;
  if (-1 < iVar3) {
    puVar4 = param_1 + param_3 + 1 + iVar3 * 2;
    do {
      if (param_4 == (uchar *)0x0) {
        uVar2 = 0xff;
      }
      else {
        uVar2 = param_4[iVar3];
      }
      uVar1 = CONCAT21(CONCAT11(puVar4[-2],puVar4[-1]),*puVar4);
      param_2[iVar3] =
           (uint)puVar4[-2] | uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 |
           CONCAT31(uVar1,uVar2) << 0x18;
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + -3;
    } while (-1 < iVar3);
  }
  return;
}

