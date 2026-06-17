
undefined4 * __thiscall FUN_360cccb0(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_360cc760(this);
  iVar1 = FUN_360cb700((int)param_1);
  if (iVar1 != 0) {
    piVar2 = FUN_360cca20(this,iVar1);
    iVar4 = 0;
    if (0 < iVar1) {
      piVar2 = piVar2 + 9;
      do {
        iVar3 = FUN_360cb990(param_1,iVar4);
        piVar2[-8] = *(int *)(iVar3 + 4);
        piVar2[-7] = *(int *)(iVar3 + 8);
        piVar2[-3] = 0;
        piVar2[-2] = 0;
        piVar2[-1] = 0;
        *piVar2 = 0;
        piVar2[1] = *(int *)(iVar3 + 0x28);
        piVar2[2] = *(int *)(iVar3 + 0x2c);
        iVar4 = iVar4 + 1;
        piVar2 = piVar2 + 0xc;
      } while (iVar4 < iVar1);
    }
  }
  return this;
}

