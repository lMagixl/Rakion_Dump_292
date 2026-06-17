
void __thiscall FUN_360cc890(void *this,int param_1)

{
  if ((*(uint *)(param_1 + 0x10) & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
    FUN_360cc660(this,param_1);
    return;
  }
  return;
}

