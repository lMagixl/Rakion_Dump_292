
void __thiscall FUN_360d0bb0(void *this,int *param_1)

{
  int *piVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36214b2c;
  local_c = ExceptionList;
  piVar1 = *(int **)((int)this + 0xec);
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  if (0 < *piVar1) {
    do {
      FUN_360cf200(this,iVar2 * 0x40 + piVar1[1],param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  ExceptionList = local_c;
  return;
}

