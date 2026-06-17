
/* public: class CTString __thiscall FieldInfo::GetCharacterName(long) */

long __thiscall FieldInfo::GetCharacterName(FieldInfo *this,long param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 local_388 [892];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1db70  1754  ?GetCharacterName@FieldInfo@@QAE?AVCTString@@J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ea1a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = GetCharacterInfo(this,(long)local_388);
  local_4 = 1;
  pcVar2 = StringDuplicate((char *)(iVar1 + 0x10));
  *(char **)param_1 = pcVar2;
  local_4 = local_4 & 0xffffff00;
  FUN_360195c0((int)local_388);
  ExceptionList = local_c;
  return param_1;
}

