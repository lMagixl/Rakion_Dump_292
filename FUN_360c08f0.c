
void __cdecl FUN_360c08f0(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_EDI;
  
  iVar2 = 0;
  if (0 < unaff_EDI) {
    do {
      uVar3 = (uint)*(byte *)((uint)*(ushort *)(DAT_362cba2c + iVar2 * 2) + param_1);
      puVar1 = (undefined1 *)(DAT_362cba50 + iVar2 * 4);
      *puVar1 = (char)(*(byte *)(DAT_362cba50 + iVar2 * 4) * uVar3 >> 8);
      puVar1[1] = (char)((byte)puVar1[1] * uVar3 >> 8);
      iVar2 = iVar2 + 1;
      puVar1[2] = (char)((byte)puVar1[2] * uVar3 >> 8);
    } while (iVar2 < unaff_EDI);
  }
  return;
}

