
undefined4 * __thiscall FUN_3604c3f0(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *local_8;
  
  FUN_3604c3a0(this);
  iVar1 = FUN_3604b9e0((int)param_1);
  if (iVar1 != 0) {
    local_8 = (undefined4 *)FUN_3604c350(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar2 = (undefined4 *)FUN_3604bc20(param_1,iVar4);
        puVar5 = local_8;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar5 = puVar5 + 1;
        }
        iVar4 = iVar4 + 1;
        local_8 = local_8 + 0xe;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

