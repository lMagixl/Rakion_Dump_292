
undefined4 __thiscall
FUN_361033c0(void *this,int param_1,undefined4 param_2,CEntityMessage *param_3,float *param_4)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  piVar3 = &param_2;
  uVar1 = (**(code **)((int)this + 0x14))(piVar3);
  puVar2 = FUN_36102620(this,uVar1,piVar3);
  if ((puVar2 != (uint *)0x0) && ((void *)puVar2[1] != (void *)0x0)) {
    FUN_36103130((void *)puVar2[1],param_1,param_3,param_4);
    return 1;
  }
  return 0;
}

