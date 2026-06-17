
undefined4 * __thiscall FUN_36055a40(void *this,void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  FUN_36055960(this);
  iVar1 = FUN_36054350((int)param_1);
  if (iVar1 != 0) {
    piVar2 = FUN_3604c2b0(this,iVar1);
    iVar5 = 0;
    if (0 < iVar1) {
      piVar2 = piVar2 + 3;
      do {
        iVar3 = FUN_3604f3f0(param_1,iVar5);
        pcVar4 = StringDuplicate(*(char **)(iVar3 + 8));
        StringFree((char *)piVar2[-1]);
        piVar2[-1] = (int)pcVar4;
        pcVar4 = StringDuplicate(*(char **)(iVar3 + 0xc));
        StringFree((char *)*piVar2);
        *piVar2 = (int)pcVar4;
        pcVar4 = StringDuplicate(*(char **)(iVar3 + 0x10));
        StringFree((char *)piVar2[1]);
        piVar2[1] = (int)pcVar4;
        piVar2[2] = *(int *)(iVar3 + 0x14);
        iVar5 = iVar5 + 1;
        piVar2 = piVar2 + 6;
      } while (iVar5 < iVar1);
    }
  }
  return this;
}

