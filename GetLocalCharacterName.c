
/* public: class CTString __thiscall FieldInfo::GetLocalCharacterName(void) */

undefined4 * __thiscall FieldInfo::GetLocalCharacterName(FieldInfo *this)

{
  int iVar1;
  char *pcVar2;
  undefined4 *in_stack_00000004;
  undefined1 local_388 [892];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x19f70  1956  ?GetLocalCharacterName@FieldInfo@@QAE?AVCTString@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e43a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = GetLocalCharacterInfo(this);
  local_4 = 1;
  pcVar2 = StringDuplicate((char *)(iVar1 + 0x10));
  *in_stack_00000004 = pcVar2;
  local_4 = local_4 & 0xffffff00;
  FUN_360195c0((int)local_388);
  ExceptionList = local_c;
  return in_stack_00000004;
}

