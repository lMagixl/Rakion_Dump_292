
/* int __cdecl IsGray(unsigned long) */

int __cdecl IsGray(ulong param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  
                    /* 0x62eb0  2400  ?IsGray@@YAHK@Z */
  uVar3 = param_1 >> 0x18;
  bVar4 = (byte)(param_1 >> 0x10);
  bVar2 = (byte)(param_1 >> 0x18);
  uVar1 = param_1 >> 0x10;
  if (bVar4 <= bVar2) {
    uVar1 = uVar3;
  }
  bVar5 = (byte)(param_1 >> 8);
  if ((byte)uVar1 < bVar5) {
    uVar1 = param_1 >> 8;
  }
  if (bVar4 < bVar2) {
    uVar3 = param_1 >> 0x10 & 0xff;
  }
  if (bVar5 < (byte)uVar3) {
    uVar3 = param_1 >> 8 & 0xff;
  }
  return (uint)((int)((uVar1 & 0xff) - uVar3) < 4);
}

