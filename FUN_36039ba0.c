
void __thiscall FUN_36039ba0(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    *(int *)this = param_1;
    uVar1 = thunk_FUN_361bf99c((param_1 + 1) * 0x1c);
    *(undefined4 *)((int)this + 4) = uVar1;
  }
  return;
}

