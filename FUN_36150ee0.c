
void __cdecl FUN_36150ee0(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_EAX + 0x16b4);
  if (iVar2 < 0xc) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_1 + -0x101 << ((byte)iVar2 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar2 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_1 + -0x101 << ((byte)iVar2 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar2 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    iVar2 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar2 + -0xb;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_1 + -0x101) >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar2 = *(int *)(in_EAX + 0x16b4);
  if (iVar2 < 0xc) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_2 + -1 << ((byte)iVar2 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar2 + 5;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_2 + -1 << ((byte)iVar2 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar2 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    iVar2 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar2 + -0xb;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_2 + -1) >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar2 = *(int *)(in_EAX + 0x16b4);
  if (iVar2 < 0xd) {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_3 + -4 << ((byte)iVar2 & 0x1f));
    *(int *)(in_EAX + 0x16b4) = iVar2 + 4;
  }
  else {
    *(ushort *)(in_EAX + 0x16b0) =
         *(ushort *)(in_EAX + 0x16b0) | (ushort)(param_3 + -4 << ((byte)iVar2 & 0x1f));
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b0);
    iVar2 = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x14) = iVar2;
    *(undefined1 *)(iVar2 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
    iVar2 = *(int *)(in_EAX + 0x16b4);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(int *)(in_EAX + 0x16b4) = iVar2 + -0xc;
    *(ushort *)(in_EAX + 0x16b0) = (ushort)(param_3 + -4) >> (0x10U - (char)iVar2 & 0x1f);
  }
  iVar2 = 0;
  if (0 < param_3) {
    do {
      iVar3 = *(int *)(in_EAX + 0x16b4);
      if (iVar3 < 0xe) {
        *(ushort *)(in_EAX + 0x16b0) =
             *(ushort *)(in_EAX + 0x16b0) |
             *(short *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_3623c06c)[iVar2] * 4) <<
             ((byte)iVar3 & 0x1f);
        *(int *)(in_EAX + 0x16b4) = iVar3 + 3;
      }
      else {
        uVar1 = *(ushort *)(in_EAX + 0xa76 + (uint)(byte)(&DAT_3623c06c)[iVar2] * 4);
        *(ushort *)(in_EAX + 0x16b0) = *(ushort *)(in_EAX + 0x16b0) | uVar1 << ((byte)iVar3 & 0x1f);
        *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
             *(undefined1 *)(in_EAX + 0x16b0);
        iVar3 = *(int *)(in_EAX + 0x14) + 1;
        *(int *)(in_EAX + 0x14) = iVar3;
        *(undefined1 *)(iVar3 + *(int *)(in_EAX + 8)) = *(undefined1 *)(in_EAX + 0x16b1);
        iVar3 = *(int *)(in_EAX + 0x16b4);
        *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
        *(int *)(in_EAX + 0x16b4) = iVar3 + -0xd;
        *(ushort *)(in_EAX + 0x16b0) = uVar1 >> (0x10U - (char)iVar3 & 0x1f);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  iVar2 = FUN_361509d0((void *)(in_EAX + 0x8c),param_1 + -1);
  FUN_361509d0((void *)(iVar2 + 0x980),param_2 + -1);
  return;
}

