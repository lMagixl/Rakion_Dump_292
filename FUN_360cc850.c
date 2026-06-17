
void __thiscall FUN_360cc850(void *this,int param_1)

{
  if ((*(uint *)(param_1 + 0x44) & 1) == 0) {
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1;
    FUN_360cc810(this,param_1);
    return;
  }
  return;
}

