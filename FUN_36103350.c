
undefined4 __thiscall
FUN_36103350(void *this,int param_1,float param_2,undefined4 param_3,CEntityMessage *param_4,
            float *param_5)

{
  void *this_00;
  float *pfVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = &param_3;
  uVar2 = (**(code **)((int)this + 0x14))(piVar5);
  puVar3 = FUN_36102620(this,uVar2,piVar5);
  pfVar1 = param_5;
  if ((puVar3 != (uint *)0x0) && (this_00 = (void *)puVar3[1], this_00 != (void *)0x0)) {
    iVar4 = FUN_36102d40(this_00,param_1,param_2,param_5);
    if (iVar4 != 0) {
      FUN_36103130(this_00,param_1,param_4,pfVar1);
      return 1;
    }
    return 0;
  }
  return 0;
}

