
void __thiscall FUN_361bf920(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_80 [16];
  undefined4 local_40 [16];
  
  FUN_361bf450(local_80);
  FUN_361bf830(local_80,local_40,(int)this);
  puVar6 = local_80;
  iVar5 = 4;
  puVar2 = this;
  do {
    iVar4 = 4;
    puVar3 = puVar6;
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 4;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar6 = puVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *param_1 = *(undefined4 *)this;
    this = (undefined4 *)((int)this + 4);
    param_1 = param_1 + 1;
  }
  return;
}

