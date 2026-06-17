
void * __thiscall FUN_3615bc60(void *this,undefined4 *param_1)

{
  char *pcVar1;
  
  FUN_3615b530(this,param_1);
  FUN_360100e0((void *)((int)this + 0x10),param_1 + 4);
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  pcVar1 = StringDuplicate((char *)param_1[9]);
  StringFree(*(char **)((int)this + 0x24));
  *(char **)((int)this + 0x24) = pcVar1;
  FUN_360100e0((void *)((int)this + 0x28),param_1 + 10);
  FUN_360100e0((void *)((int)this + 0x30),param_1 + 0xc);
  FUN_3615ace0((void *)((int)this + 0x38),param_1 + 0xe);
  FUN_36010b30((void *)((int)this + 0x40),param_1 + 0x10);
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  return this;
}

