
undefined4 * __thiscall FUN_3603b880(void *this,undefined4 *param_1)

{
  char *pcVar1;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210658;
  local_c = ExceptionList;
  local_10 = 0;
  ExceptionList = &local_c;
  CTString::CTString(this,(long)&local_14,(char *)0x0,*(undefined4 *)((int)this + 8),
                     ((double)*(longlong *)((int)this + 0x18) / (double)*(longlong *)_pTimer) *
                     (double)*(float *)((int)this + 0x20));
  local_4 = 1;
  pcVar1 = StringDuplicate(local_14);
  *param_1 = pcVar1;
  local_10 = 1;
  local_4 = local_4 & 0xffffff00;
  StringFree(local_14);
  ExceptionList = local_c;
  return param_1;
}

