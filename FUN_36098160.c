
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36098160(int param_1,ushort param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  ulonglong uVar4;
  
  psVar2 = (short *)(param_1 + 0xc);
  iVar3 = 5;
  do {
    if (*psVar2 < 0x30) {
      sVar1 = *psVar2 + 1;
      *psVar2 = sVar1;
      if (sVar1 < 8) {
        fsin((float10)(int)sVar1 * (float10)_DAT_3622ec80);
        uVar4 = FUN_361bfd6c();
        FUN_3609b700((uint)*(byte *)(psVar2 + -2),(uint)*(byte *)((int)psVar2 + -3),(int)uVar4);
      }
    }
    else {
      DAT_362c9c58 = DAT_362c9c58 * 0x40003;
      *(byte *)(psVar2 + -2) = (char)DAT_362c9c70 - 1U & (byte)((uint)DAT_362c9c58 >> 0x10);
      DAT_362c9c58 = DAT_362c9c58 * 0x40003;
      *(byte *)((int)psVar2 + -3) = DAT_362c9c6c - 1U & (byte)((uint)DAT_362c9c58 >> 0x10);
      DAT_362c9c58 = DAT_362c9c58 * 0x40003;
      psVar2[-1] = (ushort)((uint)DAT_362c9c58 >> 0x10) & param_2;
      *psVar2 = 0;
    }
    psVar2 = psVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

