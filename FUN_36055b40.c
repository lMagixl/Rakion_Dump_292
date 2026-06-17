
undefined4 * __thiscall FUN_36055b40(void *this,void *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_36055af0(this);
  iVar1 = FUN_360543c0((int)param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_3604c300(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        puVar3 = (undefined4 *)FUN_36054380(param_1,iVar4);
        *puVar2 = *puVar3;
        puVar2[1] = puVar3[1];
        puVar2[2] = puVar3[2];
        puVar2[3] = puVar3[3];
        puVar2[4] = puVar3[4];
        iVar4 = iVar4 + 1;
        puVar2[5] = puVar3[5];
        puVar2 = puVar2 + 6;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

