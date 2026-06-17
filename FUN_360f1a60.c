
int __thiscall FUN_360f1a60(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_retaddr;
  int iStack_18;
  undefined1 local_10 [12];
  undefined4 uStack_4;
  
  if (0 < *(int *)((int)this + 0x20)) {
    iVar1 = (**(code **)(*(int *)this + 0xc))(param_1);
    *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) - iVar1;
    return iVar1;
  }
  uVar2 = (**(code **)(*(int *)this + 0xc))(local_10,0x10);
  if (uVar2 < 0x10) {
    FUN_360f1510(this,uVar2);
    return 0;
  }
  iVar1 = FUN_360f1540((int)this);
  if (iVar1 < iStack_18) {
LAB_360f1ac1:
    FUN_360f1510(this,uVar2);
    return 0;
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    puVar3 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    iVar1 = FUN_360314e0(local_10,puVar3);
    if (iVar1 != 0) goto LAB_360f1ac1;
  }
  *(int *)((int)this + 0x20) = iStack_18 + 0x10;
  FUN_360f1510(this,uVar2);
  if (*(int *)((int)this + 0x20) < unaff_retaddr) {
    unaff_retaddr = *(int *)((int)this + 0x20);
  }
  iVar1 = (**(code **)(*(int *)this + 0xc))(uStack_4,unaff_retaddr);
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) - iVar1;
  return iVar1;
}

