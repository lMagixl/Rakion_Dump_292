
void __thiscall FUN_36031ce0(void *this,undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620fad0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = StringDuplicate((char *)*param_1);
  local_4 = 0;
  local_1c = StringDuplicate(local_20);
  local_18 = 0;
  local_4._0_1_ = 1;
  puVar2 = (undefined4 *)CTFileName::FileName((CTFileName *)&local_1c);
  local_4._0_1_ = 2;
  pcVar3 = StringDuplicate((char *)*puVar2);
  StringFree(*(char **)this);
  *(char **)this = pcVar3;
  local_4._0_1_ = 1;
  StringFree(local_14);
  local_4._0_1_ = 0;
  StringFree(local_1c);
  local_1c = StringDuplicate(local_20);
  local_18 = 0;
  local_4._0_1_ = 3;
  puVar2 = (undefined4 *)CTFileName::FileDir((CTFileName *)&local_1c);
  local_4._0_1_ = 4;
  pcVar3 = StringDuplicate((char *)*puVar2);
  StringFree(local_20);
  local_4._0_1_ = 3;
  local_20 = pcVar3;
  StringFree(local_14);
  local_4._0_1_ = 0;
  StringFree(local_1c);
  pcVar3 = local_20;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  CTString::TrimRight((CTString *)&local_20,(long)(pcVar3 + (-1 - (int)(local_20 + 1))));
  local_1c = StringDuplicate(s__HKEY_CLASSES_ROOT__3622565f + 1);
  local_4._0_1_ = 5;
  iVar4 = CTString::RemovePrefix((CTString *)&local_20,(CTString *)&local_1c);
  local_4._0_1_ = 0;
  StringFree(local_1c);
  if (iVar4 == 0) {
    local_1c = StringDuplicate(s_HKEY_CURRENT_CONFIG__36225674);
    local_4._0_1_ = 6;
    iVar4 = CTString::RemovePrefix((CTString *)&local_20,(CTString *)&local_1c);
    local_4._0_1_ = 0;
    StringFree(local_1c);
    if (iVar4 == 0) {
      local_1c = StringDuplicate(s_HKEY_CURRENT_USER__3622568c);
      local_4._0_1_ = 7;
      iVar4 = CTString::RemovePrefix((CTString *)&local_20,(CTString *)&local_1c);
      local_4._0_1_ = 0;
      StringFree(local_1c);
      if (iVar4 == 0) {
        local_1c = StringDuplicate(s_HKEY_LOCAL_MACHINE__362256a0);
        local_4._0_1_ = 8;
        iVar4 = CTString::RemovePrefix((CTString *)&local_20,(CTString *)&local_1c);
        local_4._0_1_ = 0;
        StringFree(local_1c);
        if (iVar4 == 0) {
          local_1c = StringDuplicate(s_HKEY_USERS__362256b4);
          local_4._0_1_ = 9;
          iVar4 = CTString::RemovePrefix((CTString *)&local_20,(CTString *)&local_1c);
          local_4._0_1_ = 0;
          StringFree(local_1c);
          *param_2 = (uint)(iVar4 != 0) * 2 + -0x7fffffff;
        }
        else {
          *param_2 = -0x7ffffffe;
        }
      }
      else {
        *param_2 = -0x7fffffff;
      }
    }
    else {
      *param_2 = -0x7ffffffb;
    }
  }
  else {
    *param_2 = -0x80000000;
  }
  pcVar3 = StringDuplicate(local_20);
  StringFree((char *)*param_3);
  *param_3 = pcVar3;
  local_4 = 0xffffffff;
  StringFree(local_20);
  ExceptionList = local_c;
  return;
}

