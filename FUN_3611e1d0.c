
void __fastcall FUN_3611e1d0(void *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  void *this;
  
  FUN_36114360(1);
  if ((*(int *)((int)param_1 + 0xd40) != 0) || (DAT_362fcbc0 != 0)) {
    FUN_3611d910(param_1);
  }
  this = (void *)((int)param_1 + 0xdb0);
  iVar3 = 0;
  iVar2 = FUN_3611f3f0((int)this);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_3611fde0(this,iVar3);
      puVar1 = (uint *)(*(int *)(iVar2 + 0xc) + 0x10);
      *puVar1 = *puVar1 & 0xffffffef;
      iVar3 = iVar3 + 1;
      iVar2 = FUN_3611f3f0((int)this);
    } while (iVar3 < iVar2);
  }
  FUN_36114360(0);
  return;
}

