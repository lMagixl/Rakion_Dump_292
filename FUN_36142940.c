
undefined4 __fastcall FUN_36142940(void *param_1)

{
  void *this;
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  this = (void *)((int)param_1 + 0x20);
  iVar4 = 0;
  iVar1 = FUN_361438e0((int)this);
  if (0 < iVar1) {
    do {
      piVar3 = *(int **)((int)param_1 + 0x44);
      piVar2 = (int *)FUN_361438a0(this,iVar4);
      if (piVar3 != piVar2) {
        iVar1 = FUN_361438a0(this,iVar4);
        if (*(int *)(iVar1 + 4) == *piVar3) {
          piVar2 = (int *)FUN_361438a0(this,iVar4);
          if (*piVar2 == *(int *)((int)param_1 + 0x48)) goto LAB_361429b6;
        }
        piVar2 = (int *)FUN_361438a0(this,iVar4);
        if (*piVar2 == piVar3[1]) {
          iVar1 = FUN_361438a0(this,iVar4);
          if (*(int *)(iVar1 + 4) == *(int *)((int)param_1 + 0x48)) goto LAB_361429b6;
        }
        piVar3 = (int *)FUN_361438a0(this,iVar4);
        iVar1 = FUN_361423a0(param_1,piVar3);
        if (iVar1 != 0) {
          return 1;
        }
      }
LAB_361429b6:
      iVar4 = iVar4 + 1;
      iVar1 = FUN_361438e0((int)this);
    } while (iVar4 < iVar1);
  }
  return 0;
}

