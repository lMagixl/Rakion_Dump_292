
void __cdecl FUN_3608ab30(undefined8 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  
  uVar4 = DAT_362a41d8;
  iVar7 = param_3 >> 1;
  iVar5 = param_4 >> 1;
  iVar6 = iVar7;
  do {
    do {
      uVar1 = *param_1;
      uVar2 = param_1[iVar7];
      uVar11 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
      uVar3 = (ushort)(((uint7)(byte)((ulonglong)uVar2 >> 0x18) << 0x30) >> 0x28);
      uVar8 = (ushort)(((ushort)uVar1 & 0xff) + ((ushort)uVar2 & 0xff) + (short)uVar4 +
                      (ushort)(byte)((ulonglong)uVar1 >> 0x20) +
                      (ushort)(byte)((ulonglong)uVar2 >> 0x20)) >> 2;
      uVar9 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) + (ushort)(byte)((ulonglong)uVar2 >> 8)
                       + (short)((ulonglong)uVar4 >> 0x10) +
                      (ushort)(byte)((ulonglong)uVar1 >> 0x28) +
                      (ushort)(byte)((ulonglong)uVar2 >> 0x28)) >> 2;
      uVar10 = (ushort)((short)CONCAT21(uVar11,(char)((ulonglong)uVar1 >> 0x10)) +
                        (short)CONCAT21(uVar3,(char)((ulonglong)uVar2 >> 0x10)) +
                        (short)((ulonglong)uVar4 >> 0x20) +
                       (ushort)(byte)((ulonglong)uVar1 >> 0x30) +
                       (ushort)(byte)((ulonglong)uVar2 >> 0x30)) >> 2;
      uVar11 = (ushort)((uVar11 >> 8) + (uVar3 >> 8) + (short)((ulonglong)uVar4 >> 0x30) +
                       (ushort)(byte)((ulonglong)uVar1 >> 0x38) +
                       (ushort)(byte)((ulonglong)uVar2 >> 0x38)) >> 2;
      *param_2 = CONCAT13((uVar11 != 0) * (uVar11 < 0x100) * (char)uVar11 - (0xff < uVar11),
                          CONCAT12((uVar10 != 0) * (uVar10 < 0x100) * (char)uVar10 - (0xff < uVar10)
                                   ,CONCAT11((uVar9 != 0) * (uVar9 < 0x100) * (char)uVar9 -
                                             (0xff < uVar9),
                                             (uVar8 != 0) * (uVar8 < 0x100) * (char)uVar8 -
                                             (0xff < uVar8))));
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    param_1 = param_1 + iVar7;
    iVar5 = iVar5 + -1;
    iVar6 = iVar7;
  } while (iVar5 != 0);
  return;
}

