
undefined4 * __thiscall FUN_36021b70(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_36021ad0(this);
  iVar1 = FUN_360216b0((int)param_1);
  if (iVar1 != 0) {
    piVar2 = FUN_36021930(this,iVar1);
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        puVar3 = (undefined4 *)FUN_360217c0(param_1,iVar5);
        pcVar4 = StringDuplicate((char *)*puVar3);
        StringFree((char *)piVar2[iVar5 * 2]);
        piVar2[iVar5 * 2] = (int)pcVar4;
        piVar2[iVar5 * 2 + 1] = puVar3[1];
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
  }
  return this;
}

