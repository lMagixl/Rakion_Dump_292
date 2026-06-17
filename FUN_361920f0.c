
int __cdecl FUN_361920f0(uint *param_1,uint *param_2,byte param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  if ((((((uint)param_2 & 7) == 0) && ((uint *)0xf < param_2)) && (param_2 < (uint *)0x21)) &&
     ((param_3 & 3) != 0)) {
    uVar3 = (uint)param_2 >> 2;
    *(byte *)(param_4 + 0x82) = (byte)param_4[0x82] ^ ((byte)param_4[0x82] ^ param_3) & 3;
    *param_4 = uVar3;
    uVar5 = uVar3;
    if (uVar3 < 5) {
      uVar5 = 4;
    }
    param_4[1] = uVar5 + 6;
    puVar1 = param_4 + 2;
    *puVar1 = *param_1;
    param_4[3] = param_1[1];
    param_4[4] = param_1[2];
    param_4[5] = param_1[3];
    puVar2 = puVar1 + (((uVar5 + 6) * 4 + 4) - uVar3);
    if (uVar3 == 4) {
      puVar6 = &DAT_3623dec8;
      do {
        uVar5 = puVar1[3];
        uVar3 = *(uint *)(&DAT_36240740 + (uVar5 >> 0x18) * 4) ^
                *(uint *)(&DAT_36240340 + (uVar5 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_3623ff40 + (uVar5 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_36240b40 + (uVar5 & 0xff) * 4) ^ *puVar1 ^ *puVar6;
        uVar4 = puVar1[1] ^ uVar3;
        puVar1[4] = uVar3;
        uVar3 = puVar1[2] ^ uVar4;
        puVar1[6] = uVar3;
        puVar1[5] = uVar4;
        puVar1[7] = uVar3 ^ uVar5;
        puVar1 = puVar1 + 4;
        puVar6 = puVar6 + 1;
      } while (puVar1 < puVar2);
    }
    else if (uVar3 == 6) {
      param_4[6] = param_1[4];
      param_4[7] = param_1[5];
      param_2 = &DAT_3623dec8;
      do {
        uVar5 = puVar1[5];
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        uVar3 = *(uint *)(&DAT_36240740 + (uVar5 >> 0x18) * 4) ^
                *(uint *)(&DAT_36240340 + (uVar5 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_3623ff40 + (uVar5 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_36240b40 + (uVar5 & 0xff) * 4) ^ *puVar1 ^ uVar3;
        uVar4 = puVar1[1] ^ uVar3;
        uVar7 = puVar1[2] ^ uVar4;
        puVar1[6] = uVar3;
        puVar1[7] = uVar4;
        uVar4 = puVar1[3] ^ uVar7;
        uVar3 = puVar1[4] ^ uVar4;
        puVar1[10] = uVar3;
        puVar1[8] = uVar7;
        puVar1[9] = uVar4;
        puVar1[0xb] = uVar3 ^ uVar5;
        puVar1 = puVar1 + 6;
      } while (puVar1 < puVar2);
    }
    else if (uVar3 == 8) {
      param_4[6] = param_1[4];
      param_4[7] = param_1[5];
      param_4[8] = param_1[6];
      param_4[9] = param_1[7];
      puVar6 = &DAT_3623dec8;
      do {
        uVar5 = puVar1[7];
        uVar4 = *(uint *)(&DAT_36240740 + (uVar5 >> 0x18) * 4) ^
                *(uint *)(&DAT_36240340 + (uVar5 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_3623ff40 + (uVar5 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_36240b40 + (uint)(byte)puVar1[7] * 4) ^ *puVar1 ^ *puVar6;
        uVar3 = puVar1[1] ^ uVar4;
        puVar1[8] = uVar4;
        uVar4 = puVar1[2] ^ uVar3;
        puVar1[9] = uVar3;
        puVar6 = puVar6 + 1;
        puVar1[10] = uVar4;
        uVar4 = puVar1[3] ^ uVar4;
        puVar1[0xb] = uVar4;
        uVar3 = *(uint *)(&DAT_36240b40 + (uVar4 >> 0x18) * 4) ^
                *(uint *)(&DAT_36240740 + (uVar4 >> 0x10 & 0xff) * 4) ^
                *(uint *)(&DAT_36240340 + (uVar4 >> 8 & 0xff) * 4) ^
                *(uint *)(&DAT_3623ff40 + (uint)(byte)puVar1[0xb] * 4) ^ puVar1[4];
        uVar4 = puVar1[5] ^ uVar3;
        puVar1[0xc] = uVar3;
        uVar3 = puVar1[6] ^ uVar4;
        puVar1[0xe] = uVar3;
        puVar1[0xd] = uVar4;
        puVar1[0xf] = uVar3 ^ uVar5;
        puVar1 = puVar1 + 8;
      } while (puVar1 < puVar2);
    }
    if ((param_4[0x82] & 3) != 1) {
      puVar2 = param_4 + param_4[1] * 4 + 0x42;
      *puVar2 = param_4[2];
      puVar2[1] = param_4[3];
      puVar2[2] = param_4[4];
      puVar2[3] = param_4[5];
      uVar5 = 1;
      puVar1 = param_4 + 6;
      puVar2 = puVar2 + -4;
      if (1 < param_4[1]) {
        do {
          uVar3 = *puVar1;
          *puVar2 = *(uint *)(&DAT_36242b40 + (uVar3 >> 0x18) * 4) ^
                    *(uint *)(&DAT_36242740 + (uVar3 >> 0x10 & 0xff) * 4) ^
                    *(uint *)(&DAT_36242340 + (uVar3 >> 8 & 0xff) * 4) ^
                    *(uint *)(&DAT_36241f40 + (uint)(byte)*puVar1 * 4);
          uVar3 = puVar1[1];
          puVar2[1] = *(uint *)(&DAT_36242b40 + (uVar3 >> 0x18) * 4) ^
                      *(uint *)(&DAT_36242740 + (uVar3 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_36242340 + (uVar3 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_36241f40 + (uint)(byte)puVar1[1] * 4);
          uVar3 = puVar1[2];
          puVar2[2] = *(uint *)(&DAT_36242b40 + (uVar3 >> 0x18) * 4) ^
                      *(uint *)(&DAT_36242740 + (uVar3 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_36242340 + (uVar3 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_36241f40 + (uint)(byte)puVar1[2] * 4);
          uVar3 = puVar1[3];
          puVar2[3] = *(uint *)(&DAT_36242b40 + (uVar3 >> 0x18) * 4) ^
                      *(uint *)(&DAT_36242740 + (uVar3 >> 0x10 & 0xff) * 4) ^
                      *(uint *)(&DAT_36242340 + (uVar3 >> 8 & 0xff) * 4) ^
                      *(uint *)(&DAT_36241f40 + (uint)(byte)puVar1[3] * 4);
          puVar1 = puVar1 + 4;
          puVar2 = puVar2 + -4;
          uVar5 = uVar5 + 1;
        } while (uVar5 < param_4[1]);
      }
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar1 = (uint *)puVar1[3];
      puVar2[3] = (uint)puVar1;
    }
    return CONCAT22((short)((uint)puVar1 >> 0x10),1);
  }
  if (param_2 == (uint *)0x0) {
    return (int)(short)((short)*param_4 << 2);
  }
  *(byte *)(param_4 + 0x82) = (byte)param_4[0x82] & 0xfc;
  return 0;
}

