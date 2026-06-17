
int __thiscall FUN_3604b940(void *this,int param_1)

{
  char *pcVar1;
  
  pcVar1 = StringDuplicate(*(char **)(param_1 + 8));
  StringFree(*(char **)((int)this + 8));
  *(char **)((int)this + 8) = pcVar1;
  pcVar1 = StringDuplicate(*(char **)(param_1 + 0xc));
  StringFree(*(char **)((int)this + 0xc));
  *(char **)((int)this + 0xc) = pcVar1;
  pcVar1 = StringDuplicate(*(char **)(param_1 + 0x10));
  StringFree(*(char **)((int)this + 0x10));
  *(char **)((int)this + 0x10) = pcVar1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return (int)this;
}

