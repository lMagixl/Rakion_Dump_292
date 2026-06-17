
/* void __cdecl MakeSubMipmap(unsigned long *,unsigned long *,long) */

void __cdecl MakeSubMipmap(ulong *param_1,ulong *param_2,long param_3)

{
  undefined8 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  do {
    uVar1 = *(undefined8 *)param_1;
    uVar5 = (ushort)(((uint7)(byte)((ulonglong)uVar1 >> 0x18) << 0x30) >> 0x28);
    uVar2 = (ushort)(((ushort)uVar1 & 0xff) + (ushort)(byte)((ulonglong)uVar1 >> 0x20)) >> 1;
    uVar3 = (ushort)((ushort)(byte)((ulonglong)uVar1 >> 8) +
                    (ushort)(byte)((ulonglong)uVar1 >> 0x28)) >> 1;
    uVar4 = (ushort)((short)CONCAT21(uVar5,(char)((ulonglong)uVar1 >> 0x10)) +
                    (ushort)(byte)((ulonglong)uVar1 >> 0x30)) >> 1;
    uVar5 = (ushort)((uVar5 >> 8) + (ushort)(byte)((ulonglong)uVar1 >> 0x38)) >> 1;
    *param_2 = CONCAT13((uVar5 != 0) * (uVar5 < 0x100) * (char)uVar5 - (0xff < uVar5),
                        CONCAT12((uVar4 != 0) * (uVar4 < 0x100) * (char)uVar4 - (0xff < uVar4),
                                 CONCAT11((uVar3 != 0) * (uVar3 < 0x100) * (char)uVar3 -
                                          (0xff < uVar3),
                                          (uVar2 != 0) * (uVar2 < 0x100) * (char)uVar2 -
                                          (0xff < uVar2))));
    param_1 = param_1 + 2;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

