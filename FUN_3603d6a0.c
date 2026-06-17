
void __cdecl FUN_3603d6a0(uint *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(uVar2 + param_2);
      uVar2 = uVar2 + 1;
      *param_1 = *param_1 >> 8 ^ (uint)(&crc_aulCRCTable)[(byte)(*pbVar1 ^ (byte)*param_1)];
    } while (uVar2 < param_3);
  }
  return;
}

