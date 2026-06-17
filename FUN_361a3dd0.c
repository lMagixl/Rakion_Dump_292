
undefined4 * __thiscall FUN_361a3dd0(void *this,LPCRITICAL_SECTION param_1)

{
  *(LPCRITICAL_SECTION *)this = param_1;
  *(undefined1 *)((int)this + 4) = 0;
  FUN_361a3220(param_1);
  return this;
}

