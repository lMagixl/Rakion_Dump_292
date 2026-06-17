
void __thiscall thunk_FUN_360d7e00(void *this,int param_1,int param_2,int param_3)

{
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_3;
  FUN_360d8550((void *)((int)this + 0xc),param_1 * param_2);
  return;
}

