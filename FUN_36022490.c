
void __cdecl FUN_36022490(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(&crc_aulCRCTable)[param_2 >> 0x18 ^ (uint)(byte)*param_1] ^ *param_1 >> 8;
  *param_1 = uVar1;
  uVar1 = (uint)(&crc_aulCRCTable)[param_2 >> 0x10 & 0xff ^ uVar1 & 0xff] ^ uVar1 >> 8;
  *param_1 = uVar1;
  uVar1 = (uint)(&crc_aulCRCTable)[param_2 >> 8 & 0xff ^ uVar1 & 0xff] ^ uVar1 >> 8;
  *param_1 = uVar1;
  *param_1 = uVar1 >> 8 ^ (uint)(&crc_aulCRCTable)[uVar1 & 0xff ^ param_2 & 0xff];
  return;
}

