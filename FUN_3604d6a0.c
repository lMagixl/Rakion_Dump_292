
int __thiscall FUN_3604d6a0(void *this,undefined4 *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362118f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate((char *)*param_1);
  *(char **)((int)this + 8) = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)((int)this + 0xc) = pcVar1;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)((int)this + 0x10) = pcVar1;
  ExceptionList = local_c;
  return (int)this;
}

