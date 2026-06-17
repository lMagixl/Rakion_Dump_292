
undefined4 * __fastcall FUN_361009b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_360f1290(param_1);
  puVar2 = param_1 + 7;
  *param_1 = &PTR_FUN_36230528;
  iVar3 = 600;
  puVar1 = puVar2;
  do {
    *puVar1 = 0xbf800000;
    puVar1[1] = 0xffffffff;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined2 *)((int)puVar1 + 10) = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined2 *)(param_1 + 0x70f) = 0;
  param_1[0x710] = 0;
  param_1[0x711] = 0;
  iVar3 = 600;
  do {
    puVar2[1] = 0xffffffff;
    *puVar2 = 0xbf800000;
    *(undefined1 *)(puVar2 + 2) = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return param_1;
}

