
undefined4 * __thiscall FUN_360b24c0(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_360b2430(this);
  iVar1 = FUN_360b0ea0((int)param_1);
  if ((iVar1 != 0) && (piVar2 = FUN_360b23e0(this,iVar1), 0 < iVar1)) {
    piVar2 = piVar2 + 8;
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_360b0e90(param_1,iVar5);
      piVar2[-8] = *piVar3;
      piVar2[-1] = piVar3[7];
      *piVar2 = piVar3[8];
      piVar2[1] = piVar3[9];
      piVar2[0x1a] = piVar3[0x22];
      piVar2[0x1b] = piVar3[0x23];
      piVar2[0x1c] = piVar3[0x24];
      piVar2[0x1d] = piVar3[0x25];
      piVar2[0x1e] = piVar3[0x26];
      piVar2[0x1f] = piVar3[0x27];
      piVar2[0x23] = piVar3[0x2b];
      pcVar4 = StringDuplicate((char *)piVar3[0x2c]);
      StringFree((char *)piVar2[0x24]);
      piVar2[0x24] = (int)pcVar4;
      piVar2[0x25] = piVar3[0x2d];
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 0x2e;
    } while (iVar5 < iVar1);
  }
  return this;
}

