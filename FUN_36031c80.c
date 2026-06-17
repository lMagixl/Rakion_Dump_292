
undefined4 * __thiscall FUN_36031c80(void *this,undefined4 *param_1)

{
  char *pcVar1;
  
  pcVar1 = StringDuplicate((char *)*param_1);
  StringFree(*(char **)this);
  *(char **)this = pcVar1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  pcVar1 = StringDuplicate((char *)param_1[2]);
  StringFree(*(char **)((int)this + 8));
  *(char **)((int)this + 8) = pcVar1;
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  return this;
}

