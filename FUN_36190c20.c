
undefined4 * __thiscall FUN_36190c20(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *local_8;
  
  FUN_36190b90(this);
  iVar1 = FUN_361904a0((int)param_1);
  if (iVar1 != 0) {
    local_8 = FUN_36190b40(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_361906e0(param_1,iVar4);
        piVar5 = local_8;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar2;
          piVar2 = piVar2 + 1;
          piVar5 = piVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        local_8 = local_8 + 10;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

