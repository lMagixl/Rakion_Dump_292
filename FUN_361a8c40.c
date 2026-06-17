
void __thiscall FUN_361a8c40(void *this,undefined4 param_1,void *param_2)

{
  int local_4;
  
  local_4 = **(int **)((int)this + 0xc);
  if ((int *)local_4 != *(int **)((int)this + 0xc)) {
    do {
      FUN_361a8a70(param_2,local_4 + 0xc,*(int *)(local_4 + 0x28));
      FUN_3600a9a0(&local_4);
    } while (local_4 != *(int *)((int)this + 0xc));
  }
  return;
}

