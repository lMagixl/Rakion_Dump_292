
undefined4 * __thiscall FUN_3604b240(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_3604b1f0(this);
  iVar1 = FUN_3604aa50((int)param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_3604b1a0(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar3 = (undefined4 *)FUN_3604a700(param_1,iVar4);
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        iVar4 = iVar4 + 1;
        puVar2 = puVar2 + 2;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

