
int __cdecl FUN_3600fd80(int param_1)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  iVar3 = -0x21524111;
  if (uVar2 != 0) {
    iVar4 = (uVar2 >> 4) + 1;
    uVar5 = 0;
    do {
      puVar6 = (undefined4 *)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar6 = *(undefined4 **)(param_1 + 4);
      }
      pcVar1 = (char *)((int)puVar6 + uVar5);
      uVar5 = uVar5 + iVar4;
      iVar3 = iVar3 + *pcVar1;
    } while (uVar5 <= uVar2 - iVar4);
  }
  return iVar3;
}

