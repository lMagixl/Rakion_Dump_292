
undefined4 * __thiscall FUN_36208d20(void *this,undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_3;
  uVar1 = FUN_361bf99c(param_2 * param_3 * 4);
  *(undefined4 *)this = uVar1;
  return this;
}

