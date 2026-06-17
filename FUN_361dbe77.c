
int __thiscall FUN_361dbe77(void *this,size_t param_1)

{
  int iVar1;
  
  *(size_t *)((int)this + 8) = param_1;
  iVar1 = FUN_361bf99c(param_1);
  *(int *)((int)this + 0xc) = iVar1;
  return (-(uint)(iVar1 != 0) & 0x7ff8fff2) + 0x8007000e;
}

