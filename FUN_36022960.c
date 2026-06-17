
void __thiscall FUN_36022960(void *this,int param_1,int param_2,int param_3)

{
  *(int *)this = param_1;
  *(int *)((int)this + 4) = param_2;
  *(int *)((int)this + 8) = param_3;
  FUN_36022e90((void *)((int)this + 0xc),param_1 * param_2);
  return;
}

