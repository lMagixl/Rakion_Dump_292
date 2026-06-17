
undefined4 * __thiscall FUN_36030c40(void *this,undefined4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = StringDuplicate((char *)*param_1);
  StringFree(*(char **)this);
  *(char **)this = pcVar1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return this;
}

