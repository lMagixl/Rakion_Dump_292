
void __thiscall FUN_360cceb0(void *this,int param_1)

{
  if ((*(uint *)(param_1 + 0x10) & 1) == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
    FUN_360ccb70(this,param_1);
    return;
  }
  return;
}

