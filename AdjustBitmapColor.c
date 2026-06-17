
/* void __cdecl AdjustBitmapColor(unsigned long *,unsigned long *,long,long,long,long) */

void __cdecl
AdjustBitmapColor(ulong *param_1,ulong *param_2,long param_3,long param_4,long param_5,long param_6)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x8b1b0  1039  ?AdjustBitmapColor@@YAXPAK0JJJJ@Z */
  iVar3 = param_3 * param_4;
  if (0 < iVar3) {
    iVar4 = (int)param_1 - (int)param_2;
    do {
      uVar1 = *(uint *)(iVar4 + (int)param_2);
      uVar2 = AdjustColor(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                          uVar1 << 0x18,param_5,param_6);
      *param_2 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

