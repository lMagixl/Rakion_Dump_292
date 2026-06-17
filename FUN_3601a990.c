
undefined4 * __thiscall FUN_3601a990(void *this,undefined4 *param_1)

{
  char *pcVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  FUN_36017bc0((void *)((int)this + 0x18),param_1 + 6);
  FUN_360190f0((void *)((int)this + 0x20),param_1 + 8);
  pcVar1 = StringDuplicate((char *)param_1[10]);
  StringFree(*(char **)((int)this + 0x28));
  *(char **)((int)this + 0x28) = pcVar1;
  return this;
}

