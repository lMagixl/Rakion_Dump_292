
undefined4 * __thiscall FUN_361bf500(void *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    puVar1 = this;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
  }
  else if (param_1 == 1) {
    iVar3 = 4;
    puVar1 = this;
    puVar2 = this;
    do {
      *puVar1 = 0;
      iVar3 = iVar3 + -1;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar2 = 0x3f800000;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 5;
    } while (iVar3 != 0);
    return this;
  }
  return this;
}

