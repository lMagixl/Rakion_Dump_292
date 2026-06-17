
undefined4 * __thiscall FUN_3600ba20(void *this,undefined4 *param_1)

{
  char *pcVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  pcVar1 = StringDuplicate((char *)param_1[4]);
  StringFree(*(char **)((int)this + 0x10));
  *(char **)((int)this + 0x10) = pcVar1;
  pcVar1 = StringDuplicate((char *)param_1[5]);
  StringFree(*(char **)((int)this + 0x14));
  *(char **)((int)this + 0x14) = pcVar1;
  return this;
}

