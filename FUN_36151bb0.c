
void __cdecl FUN_36151bb0(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x16b4);
  if (0xd < iVar1) {
    *(ushort *)(param_1 + 0x16b0) =
         *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
    *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
         *(undefined1 *)(param_1 + 0x16b0);
    iVar1 = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined1 *)(iVar1 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
    *(ushort *)(param_1 + 0x16b0) =
         (ushort)param_4 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0xd;
    FUN_361517c0(param_3,param_2,1);
    return;
  }
  *(int *)(param_1 + 0x16b4) = iVar1 + 3;
  *(ushort *)(param_1 + 0x16b0) =
       *(ushort *)(param_1 + 0x16b0) | (ushort)(param_4 << ((byte)iVar1 & 0x1f));
  FUN_361517c0(param_3,param_2,1);
  return;
}

