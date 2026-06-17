
void __cdecl FUN_361708b0(int param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_3600c5a0((undefined4 *)(in_EAX + 0xc));
  iVar1 = *(int *)(in_EAX + 8);
  iVar5 = 0;
  if (iVar2 < 1) {
    return;
  }
  do {
    puVar3 = (undefined2 *)
             (*(int *)(in_EAX + 0x10) +
             (iVar5 + (*(uint *)(param_1 * 0x60 + iVar1) & iVar2 - 1U) & iVar2 - 1U) * 0xc);
    iVar4 = 0;
    do {
      if (puVar3[1] == -1) {
        puVar3[1] = (undefined2)param_1;
        *puVar3 = *(undefined2 *)(param_1 * 0x60 + iVar1);
        return;
      }
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar4 < 3);
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar2);
  return;
}

