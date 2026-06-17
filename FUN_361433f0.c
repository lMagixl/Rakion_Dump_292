
void __fastcall FUN_361433f0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = FUN_3600be20(*(undefined4 **)(param_1 + 0x1c));
  FUN_36143dc0((void *)(param_1 + 0x20),iVar2);
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + iVar5 * 8);
      puVar3 = (undefined4 *)FUN_361438a0((void *)(param_1 + 0x20),iVar5);
      if (piVar1[1] == 0) {
        *puVar3 = *(undefined4 *)*piVar1;
        uVar4 = *(undefined4 *)(*piVar1 + 4);
      }
      else {
        *puVar3 = ((undefined4 *)*piVar1)[1];
        uVar4 = *(undefined4 *)*piVar1;
      }
      puVar3[1] = uVar4;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  return;
}

