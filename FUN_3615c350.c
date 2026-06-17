
CTextureObject * __thiscall FUN_3615c350(void *this,CTextureObject *param_1)

{
  CTFileName *pCVar1;
  char *pcVar2;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a110;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  pCVar1 = CTextureObject::GetName(param_1);
  pcVar2 = StringDuplicate(*(char **)pCVar1);
  local_4 = 0;
  local_14 = StringDuplicate(pcVar2);
  local_10 = 0;
  local_4._0_1_ = 1;
  CTextureObject::SetData_t(this,(CTFileName *)&local_14);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_14);
  CAnimObject::SetData((CAnimObject *)param_1,(CAnimData *)0x0);
  local_4 = 0xffffffff;
  StringFree(pcVar2);
  ExceptionList = local_c;
  return this;
}

