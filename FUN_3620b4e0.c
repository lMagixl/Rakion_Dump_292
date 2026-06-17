
void __thiscall FUN_3620b4e0(void *this,void *param_1)

{
  free(*(void **)((int)param_1 + 8));
  free(param_1);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
  return;
}

