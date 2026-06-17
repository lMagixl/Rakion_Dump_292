
void __thiscall FUN_360ccda0(void *this,int param_1)

{
  if ((*(uint *)(param_1 + 200) & 0x100) == 0) {
    *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 0x100;
    FUN_360cca70(this,param_1);
    return;
  }
  return;
}

