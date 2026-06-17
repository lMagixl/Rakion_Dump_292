
uint * __thiscall FUN_36102620(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar3 = 0;
  if (0 < *(int *)((int)this + 4)) {
    iVar2 = (param_1 % *(uint *)this) * *(int *)((int)this + 4) * 8;
    do {
      iVar1 = *(int *)(*(int *)((int)this + 0x10) + 4 + iVar2);
      puVar4 = (uint *)(*(int *)((int)this + 0x10) + iVar2);
      if ((iVar1 != 0) && (*puVar4 == param_1)) {
        iVar1 = (**(code **)((int)this + 0x18))(iVar1);
        if (iVar1 == *param_2) {
          return puVar4;
        }
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 8;
    } while (iVar3 < *(int *)((int)this + 4));
  }
  return (uint *)0x0;
}

