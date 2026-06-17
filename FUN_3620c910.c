
int __thiscall FUN_3620c910(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_3620c970(0,param_1,param_2);
  iVar3 = 1;
  if (1 < *(int *)this) {
    do {
      iVar2 = FUN_3620c970(iVar3,param_1,param_2);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
        local_4 = iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)this);
  }
  return local_4;
}

