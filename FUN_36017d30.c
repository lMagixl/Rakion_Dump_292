
void __thiscall FUN_36017d30(void *this,uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_8 [2];
  
  uVar2 = *(uint *)((int)this + 0x30) ^ param_1;
  iVar1 = uVar2 + param_2;
  if ((int)uVar2 < iVar1) {
    do {
      param_1 = uVar2;
      FUN_36016c40((void *)((int)this + 0x14),local_8,&param_1);
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  return;
}

