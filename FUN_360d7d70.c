
int __thiscall FUN_360d7d70(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = (param_1 % *(uint *)this) * *(int *)((int)this + 4);
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x10) + 4 + iVar3 * 8);
      if (((iVar1 != 0) && (*(uint *)(*(int *)((int)this + 0x10) + iVar3 * 8) == param_1)) &&
         (iVar1 = (**(code **)((int)this + 0x18))(iVar1), iVar1 == *param_2)) {
        return iVar3;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return -1;
}

