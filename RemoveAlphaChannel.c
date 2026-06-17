
/* void __cdecl RemoveAlphaChannel(unsigned long *,unsigned char *,long) */

void __cdecl RemoveAlphaChannel(ulong *param_1,uchar *param_2,long param_3)

{
  ulong uVar1;
  uchar *puVar2;
  int iVar3;
  
                    /* 0x8a910  3120  ?RemoveAlphaChannel@@YAXPAKPAEJ@Z */
  iVar3 = 0;
  if (0 < param_3) {
    puVar2 = param_2 + 2;
    do {
      uVar1 = param_1[iVar3];
      puVar2[-2] = (uchar)uVar1;
      puVar2[-1] = (uchar)(uVar1 >> 8);
      *puVar2 = (uchar)(uVar1 >> 0x10);
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar3 < param_3);
  }
  return;
}

