
void __thiscall FUN_36102750(void *this,int param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  param_1 = (**(code **)((int)this + 0x18))(param_1);
  piVar3 = &param_1;
  uVar1 = (**(code **)((int)this + 0x14))(piVar3);
  puVar2 = FUN_36102620(this,uVar1,piVar3);
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
  }
  return;
}

