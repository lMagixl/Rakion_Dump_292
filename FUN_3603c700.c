
int __thiscall FUN_3603c700(void *this,int param_1)

{
  char *pcVar1;
  
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  pcVar1 = StringDuplicate(*(char **)(param_1 + 8));
  StringFree(*(char **)((int)this + 8));
  *(char **)((int)this + 8) = pcVar1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return (int)this;
}

