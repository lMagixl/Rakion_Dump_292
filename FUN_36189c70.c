
undefined4 * __thiscall FUN_36189c70(void *this,undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621af58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar2 = StringDuplicate((char *)*param_1);
  *(char **)this = pcVar2;
  *(undefined4 *)((int)this + 4) = param_1[1];
  iVar1 = param_1[2];
  local_4 = 0;
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 != 0) {
    FUN_36010d50(iVar1);
  }
  ExceptionList = local_c;
  return this;
}

