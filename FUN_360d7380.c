
void __thiscall FUN_360d7380(void *this,int param_1)

{
  if ((*(uint *)(param_1 + 0x44) & 4) == 0) {
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 4;
    FUN_360cc810(this,param_1);
    return;
  }
  return;
}

