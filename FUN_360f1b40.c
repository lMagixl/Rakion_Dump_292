
void __thiscall FUN_360f1b40(void *this,int *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong local_8;
  
  for (; 0 < param_2; param_2 = param_2 - iVar3) {
    iVar2 = 0;
    iVar3 = *(int *)((int)this + 0x24);
    if (iVar3 < 1) {
      *(int *)((int)this + 0x24) = *param_1 + 0x10;
      if (*(void **)((int)this + 0x1c) == (void *)0x0) {
        param_1[2] = 0;
      }
      else {
        plVar1 = FUN_360f17f0(*(void **)((int)this + 0x1c),&local_8);
        param_1[2] = (int)*plVar1;
        iVar2 = *(int *)((int)plVar1 + 4);
      }
      param_1[3] = iVar2;
      iVar3 = *(int *)((int)this + 0x24);
    }
    if (param_2 < iVar3) {
      iVar3 = param_2;
    }
    (**(code **)(*(int *)this + 0x10))(param_1,iVar3);
    param_1 = (int *)((int)param_1 + iVar3);
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) - iVar3;
  }
  return;
}

