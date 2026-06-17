
void __thiscall FUN_361242c0(void *this,int param_1)

{
  if ((*(uint *)(param_1 + 0x3c) & 2) == 0) {
    *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 2;
    FUN_361241e0(this,param_1);
    return;
  }
  return;
}

