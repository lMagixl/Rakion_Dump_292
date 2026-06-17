
undefined4 * __thiscall FUN_3615fd00(void *this,undefined4 *param_1)

{
  char *pcVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  pcVar1 = StringDuplicate((char *)param_1[6]);
  StringFree(*(char **)((int)this + 0x18));
  *(char **)((int)this + 0x18) = pcVar1;
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  return this;
}

