
int __thiscall FUN_3620af60(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar1 = *(int *)this;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        piVar3 = param_2;
        do {
          if (*(int *)((*(int *)(*(int *)(*(int *)(param_1 + 0x10) + iVar2 * 4) + 8) - (int)param_2)
                      + (int)piVar3) != *piVar3) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar4 < iVar1);
      }
      if (iVar4 == iVar1) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  return -1;
}

