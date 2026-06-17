
void __cdecl FUN_36183020(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iStack00000008;
  
  iStack00000008 = *(int *)(param_1 + 0x18) + -1;
  bVar1 = (byte)*(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x28) < 0) {
    iStack00000008 = iStack00000008 >> (-bVar1 & 0x1f);
  }
  else {
    iStack00000008 = iStack00000008 << (bVar1 & 0x1f);
  }
  uVar7 = FUN_361bfd6c();
  uVar8 = FUN_361bfd6c();
  uVar9 = FUN_361bfd6c();
  iVar4 = (int)uVar9 - (int)uVar8;
  uVar9 = FUN_361bfd6c();
  iVar2 = (int)uVar9 - (int)uVar7;
  if (0 < iVar2) {
    puVar5 = (undefined4 *)
             (*(int *)(*(int *)(param_1 + 0x10) + 0x60) +
             ((int)uVar7 * iStack00000008 + (int)uVar8) * 4);
    do {
      iVar3 = iVar4;
      puVar6 = puVar5;
      if (0 < iVar4) {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = 0xff000000;
          puVar6 = puVar6 + 1;
        }
      }
      puVar5 = puVar5 + iStack00000008;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

