
void __thiscall FUN_360d0b30(void *this,float *param_1,float *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36214b1a;
  local_c = ExceptionList;
  piVar1 = *(int **)((int)this + 0xec);
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *piVar1) {
    do {
      FUN_360cfc80(this,iVar2 * 0x40 + piVar1[1],param_1,param_2,param_3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  ExceptionList = local_c;
  return;
}

