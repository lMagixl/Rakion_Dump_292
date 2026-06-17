
undefined4 * __thiscall FUN_36055830(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  FUN_360557e0(this);
  iVar1 = FUN_3604aa70((int)param_1);
  if (iVar1 != 0) {
    local_8 = (undefined4 *)FUN_3604c210(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)FUN_3604a710(param_1,iVar4);
        puVar5 = local_8;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        local_8 = local_8 + 10;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

