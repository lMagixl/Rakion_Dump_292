
undefined4 * __thiscall FUN_36047af0(void *this,undefined4 *param_1)

{
  char *pcVar1;
  
  *(undefined4 *)this = *param_1;
  pcVar1 = StringDuplicate((char *)param_1[1]);
  StringFree(*(char **)((int)this + 4));
  *(char **)((int)this + 4) = pcVar1;
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return this;
}

