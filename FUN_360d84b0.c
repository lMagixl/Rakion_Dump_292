
void __thiscall FUN_360d84b0(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  
  piVar2 = (int *)(param_1 + 0x1c);
  uVar3 = (**(code **)((int)this + 0x14))(piVar2);
  puVar4 = FUN_360d7d00(this,uVar3,piVar2);
  if ((puVar4 != (uint *)0x0) && (puVar1 = (undefined4 *)puVar4[1], puVar1 != (undefined4 *)0x0)) {
    FUN_360d7e30(this,(int)puVar1);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0;
    operator_delete(puVar1);
  }
  return;
}

