
uint __cdecl FUN_36170930(int param_1,uint param_2)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_3600c5a0((undefined4 *)(param_1 + 0xc));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      puVar2 = (ushort *)
               (*(int *)(param_1 + 0x10) + (iVar4 + (iVar1 - 1U & param_2) & iVar1 - 1U) * 0xc);
      iVar3 = 0;
      do {
        if (*puVar2 == param_2) {
          return (uint)puVar2[1];
        }
        if (puVar2[1] == 0xffff) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 2;
      } while (iVar3 < 3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0xffffffff;
}

