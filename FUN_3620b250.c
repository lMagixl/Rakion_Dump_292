
void __thiscall FUN_3620b250(void *this,int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (0 < *(int *)this) {
    iVar3 = param_1 - (int)param_3;
    iVar4 = param_2 - (int)param_3;
    do {
      iVar1 = *param_3;
      if (*(int *)(iVar3 + (int)param_3) < iVar1) {
        *(int *)(iVar3 + (int)param_3) = iVar1;
      }
      else if (iVar1 < *(int *)(iVar4 + (int)param_3)) {
        *(int *)(iVar4 + (int)param_3) = iVar1;
      }
      iVar2 = iVar2 + 1;
      param_3 = param_3 + 1;
    } while (iVar2 < *(int *)this);
  }
  return;
}

