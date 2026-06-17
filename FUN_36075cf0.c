
int __cdecl FUN_36075cf0(ushort *param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  switch(param_2) {
  case 0x15:
  case 0x16:
    bVar4 = (byte)*param_1;
    bVar3 = *(byte *)((int)param_1 + 1);
    bVar2 = (byte)param_1[1];
    *param_3 = 4;
    break;
  case 0x17:
    uVar1 = *param_1;
    bVar4 = (byte)(uVar1 >> 8);
    bVar2 = bVar4 & 0xf8 | bVar4 >> 5;
    bVar4 = (byte)(uVar1 >> 3);
    bVar3 = bVar4 & 0xfc;
    bVar4 = bVar4 >> 6;
    goto LAB_36075d69;
  case 0x18:
  case 0x19:
    uVar1 = *param_1;
    bVar4 = (byte)(uVar1 >> 7);
    bVar2 = bVar4 & 0xf8 | bVar4 >> 5;
    bVar4 = (byte)(uVar1 >> 2);
    bVar3 = bVar4 & 0xf8;
    bVar4 = bVar4 >> 5;
LAB_36075d69:
    bVar3 = bVar3 | bVar4;
    bVar4 = (char)uVar1 << 3;
    bVar4 = bVar4 | bVar4 >> 5;
    *param_3 = 2;
    break;
  case 0x1a:
    bVar4 = (byte)(*param_1 >> 4);
    bVar2 = bVar4 & 0xf0 | bVar4 >> 4;
    bVar4 = (byte)*param_1;
    bVar3 = bVar4 & 0xf0 | bVar4 >> 4;
    bVar4 = bVar4 << 4 | bVar4 & 0xf;
    *param_3 = 2;
    break;
  default:
    bVar4 = 0;
    bVar3 = 0;
    bVar2 = 0;
    *param_3 = 0;
  }
  return (uint)CONCAT21(CONCAT11(bVar2,bVar3),bVar4) << 8;
}

