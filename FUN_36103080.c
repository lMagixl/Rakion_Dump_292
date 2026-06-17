
void __thiscall FUN_36103080(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  void *this_00;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x1c);
  uVar1 = (**(code **)((int)this + 0x14))(piVar4);
  iVar2 = FUN_36102690(this,uVar1,piVar4);
  if (iVar2 == -1) {
    this_00 = (void *)FUN_361bf99c(0x6b8);
    if (this_00 != (void *)0x0) {
      puVar3 = FUN_36102d10(this_00,param_1);
      FUN_36102c90(this,(uint)puVar3);
      return;
    }
    FUN_36102c90(this,0);
  }
  return;
}

