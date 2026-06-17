
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FUN_360bd4b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_c8 [27];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  iVar3 = 0;
  if (*(int *)(_pGfx + 0xa38) == 0) {
    (*DAT_362c4624)();
    (*DAT_362c461c)();
    (*DAT_362c462c)();
    (*DAT_362c4628)();
    (*DAT_362c4634)();
    aiStack_c8[0x1a] = param_1;
    uStack_58 = param_3;
    uStack_4c = param_3;
    uStack_54 = param_4;
    uStack_48 = param_4;
    iStack_40 = param_6;
    iStack_34 = param_6;
    uStack_3c = param_1;
    uStack_30 = param_1;
    uStack_5c = param_2;
    uStack_50 = param_2;
    uStack_44 = param_2;
    uStack_38 = param_2;
    uStack_28 = param_3;
    uStack_1c = param_3;
    uStack_24 = param_4;
    uStack_18 = param_4;
    uStack_2c = param_5;
    uStack_20 = param_5;
    uStack_14 = param_5;
    iStack_10 = param_6;
    aiStack_c8[0] = param_6;
    uStack_c = param_1;
    uStack_8 = param_5;
    iStack_4 = param_6;
    aiStack_c8[2] = 0;
    aiStack_c8[3] = 1;
    aiStack_c8[4] = 1;
    aiStack_c8[5] = 2;
    aiStack_c8[6] = 2;
    aiStack_c8[7] = 3;
    aiStack_c8[8] = 3;
    aiStack_c8[9] = 0;
    aiStack_c8[10] = 0;
    aiStack_c8[0xb] = 4;
    aiStack_c8[0xc] = 1;
    aiStack_c8[0xd] = 5;
    aiStack_c8[0xe] = 2;
    aiStack_c8[0xf] = 6;
    aiStack_c8[0x10] = 3;
    aiStack_c8[0x15] = 6;
    aiStack_c8[0x16] = 6;
    aiStack_c8[0x11] = 7;
    aiStack_c8[0x12] = 4;
    aiStack_c8[0x13] = 5;
    aiStack_c8[0x14] = 5;
    aiStack_c8[0x17] = 7;
    aiStack_c8[0x18] = 7;
    aiStack_c8[0x19] = 4;
    aiStack_c8[1] =
         param_7 >> 0x18 | (param_7 & 0xff0000) >> 8 | (param_7 & 0xff00) << 8 | param_7 << 0x18;
    (*DAT_362c3f98)(aiStack_c8 + 1);
    (*DAT_362c3e6c)(1);
    do {
      iVar1 = aiStack_c8[iVar3 * 2];
      iVar2 = aiStack_c8[iVar3 * 2U + 1];
      (*DAT_362c3e88)(aiStack_c8[iVar1 * 3U + 0x18],aiStack_c8[iVar1 * 3U + 0x19],
                      aiStack_c8[iVar1 * 3U + 0x1a]);
      (*DAT_362c3e88)(aiStack_c8[iVar2 * 3U + 0x18],aiStack_c8[iVar2 * 3U + 0x19],
                      aiStack_c8[iVar2 * 3U + 0x1a]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    (*DAT_362c3e70)();
  }
  return;
}

