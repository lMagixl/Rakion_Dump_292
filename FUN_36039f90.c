
undefined4 * __thiscall FUN_36039f90(void *this,void *param_1)

{
  int iVar1;
  int *this_00;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_36039ed0(this);
  iVar1 = FUN_36039a70((int)param_1);
  if (iVar1 != 0) {
    this_00 = FUN_36039c90(this,iVar1);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)thunk_FUN_360399b0(param_1,iVar3);
        FUN_36039b00(this_00,puVar2);
        iVar3 = iVar3 + 1;
        this_00 = this_00 + 6;
      } while (iVar3 < iVar1);
    }
  }
  return this;
}

