
void __thiscall FUN_361030e0(void *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  
  piVar2 = (int *)(param_1 + 0x1c);
  uVar3 = (**(code **)((int)this + 0x14))(piVar2);
  puVar4 = FUN_36102620(this,uVar3,piVar2);
  if ((puVar4 != (uint *)0x0) && (pvVar1 = (void *)puVar4[1], pvVar1 != (void *)0x0)) {
    FUN_36102750(this,(int)pvVar1);
    operator_delete(pvVar1);
  }
  return;
}

