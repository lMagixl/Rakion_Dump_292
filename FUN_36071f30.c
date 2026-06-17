
undefined4 __cdecl FUN_36071f30(byte *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong *puVar8;
  undefined2 in_MM1_Wa;
  undefined1 uVar9;
  undefined2 in_MM1_Wb;
  undefined2 in_MM2_Wc;
  undefined2 in_MM2_Wd;
  ulonglong in_MM3;
  ulonglong in_MM4;
  ulonglong in_MM5;
  ulonglong in_MM6;
  
  uVar5 = DAT_36228830;
  puVar8 = (ulonglong *)(param_1 + param_2);
  for (uVar7 = param_2 >> 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    uVar1 = *(undefined8 *)param_1;
    uVar3 = (ushort)in_MM1_Wb >> 8;
    uVar9 = (undefined1)in_MM1_Wb;
    in_MM1_Wb = CONCAT11((char)((ulonglong)uVar1 >> 8),(char)((ushort)in_MM1_Wa >> 8));
    in_MM1_Wa = CONCAT11((char)uVar1,(char)in_MM1_Wa);
    uVar2 = (undefined1)in_MM2_Wc;
    uVar4 = (ushort)in_MM2_Wc >> 8;
    in_MM2_Wc = CONCAT11((char)((ulonglong)uVar1 >> 0x30),(char)in_MM2_Wd);
    in_MM2_Wd = CONCAT11((char)((ulonglong)uVar1 >> 0x38),(char)((ushort)in_MM2_Wd >> 8));
    in_MM3 = CONCAT44(CONCAT22(in_MM1_Wb,(short)(in_MM3 >> 0x10)),CONCAT22(in_MM1_Wa,(short)in_MM3))
             | uVar5;
    in_MM4 = CONCAT26(CONCAT11((char)((ulonglong)uVar1 >> 0x18),(char)uVar3),
                      CONCAT24((short)(in_MM4 >> 0x30),
                               CONCAT22(CONCAT11((char)((ulonglong)uVar1 >> 0x10),uVar9),
                                        (short)(in_MM4 >> 0x20)))) | uVar5;
    in_MM5 = CONCAT44(CONCAT22(CONCAT11((char)((ulonglong)uVar1 >> 0x28),(char)uVar4),
                               (short)(in_MM5 >> 0x10)),
                      CONCAT22(CONCAT11((char)((ulonglong)uVar1 >> 0x20),uVar2),(short)in_MM5)) |
             uVar5;
    in_MM6 = CONCAT26(in_MM2_Wd,
                      CONCAT24((short)(in_MM6 >> 0x30),CONCAT22(in_MM2_Wc,(short)(in_MM6 >> 0x20))))
             | uVar5;
    *puVar8 = in_MM3;
    puVar8[1] = in_MM4;
    puVar8[2] = in_MM5;
    puVar8[3] = in_MM6;
    param_1 = param_1 + 8;
    puVar8 = puVar8 + 4;
  }
  for (uVar7 = param_2 & 7; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(uint *)puVar8 = (uint)*param_1 << 0x18 | 0xffffff;
    param_1 = param_1 + 1;
    puVar8 = (ulonglong *)((int)puVar8 + 4);
  }
  if (DAT_362a40e8 == 0) {
    uVar6 = DAT_362c9b54;
    if (DAT_362a406c == 0) {
      uVar6 = DAT_362c9b5c;
    }
    return uVar6;
  }
  return DAT_362c9b64;
}

