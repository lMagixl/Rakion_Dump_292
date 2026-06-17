
undefined4 * __thiscall FUN_36190da0(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *local_8;
  
  FUN_36190980(this);
  iVar1 = FUN_36190440((int)param_1);
  if (iVar1 != 0) {
    local_8 = FUN_36190d50(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_361905c0(param_1,iVar4);
        piVar5 = local_8;
        for (iVar3 = 0x1e; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar5 = *piVar2;
          piVar2 = piVar2 + 1;
          piVar5 = piVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        local_8 = local_8 + 0x1e;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

