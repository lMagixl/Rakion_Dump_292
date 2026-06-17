
undefined4 FUN_361c9068(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x8876086c;
  }
  else {
    puVar3 = (undefined4 *)(param_1 + 0xc);
    for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

