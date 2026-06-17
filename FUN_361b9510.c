
undefined4 * __cdecl FUN_361b9510(int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined1 *)FUN_361b9310();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_361b92e0();
  }
  if (0 < param_2) {
    puVar2 = puVar1;
    iVar4 = param_2;
    do {
      *puVar2 = puVar2[param_1 - (int)puVar1];
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar1[param_2 + 1] = 0;
  puVar1[param_2] = 0;
  puVar3 = FUN_361b9490((int)puVar1,param_2 + 2);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_361b92e0();
  }
  puVar3[5] = 1;
  return puVar3;
}

