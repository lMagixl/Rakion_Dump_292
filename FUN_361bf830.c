
void __thiscall FUN_361bf830(void *this,undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 4;
  puVar1 = this;
  do {
    iVar2 = 4;
    do {
      *puVar1 = *(undefined4 *)((param_2 - (int)this) + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *(undefined4 *)this;
    this = (undefined4 *)((int)this + 4);
    param_1 = param_1 + 1;
  }
  return;
}

