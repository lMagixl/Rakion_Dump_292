
void __thiscall FUN_36032d10(void *this,char *param_1)

{
  CTString *this_00;
  char *pcVar1;
  int iVar2;
  long lVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620fbe8;
  local_c = ExceptionList;
  local_4 = 0;
  this_00 = (CTString *)((int)this + 0x18);
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(param_1);
  StringFree(*(char **)this_00);
  *(char **)this_00 = pcVar1;
  iVar2 = CTString::operator!=(this_00,&DAT_36222fa0);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  }
  else {
    lVar3 = ska_StringToID(this_00);
    *(long *)((int)this + 0x1c) = lVar3;
  }
  local_4 = 0xffffffff;
  StringFree(param_1);
  ExceptionList = local_c;
  return;
}

