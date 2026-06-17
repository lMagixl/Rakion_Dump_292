
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_3603ee60(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  DWORD DVar4;
  BOOL BVar5;
  char *local_38;
  char *local_30;
  undefined4 local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_36210a5e;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  ExceptionList = &local_10;
  local_30 = StringDuplicate((char *)*param_1);
  local_2c = param_1[1];
  local_8 = 1;
  CTFileName::RemoveApplicationPath_t((CTFileName *)&local_30);
  local_8 = 0;
  puVar2 = (undefined4 *)CTFileName::FileDir((CTFileName *)&local_30);
  local_8._0_1_ = 3;
  local_1c = StringDuplicate((char *)*puVar2);
  local_8._0_1_ = 5;
  StringFree(local_38);
  local_18 = StringDuplicate(&DAT_36222fa0);
  local_8._0_1_ = 6;
  local_20 = StringDuplicate(&DAT_36222fa0);
  pcVar1 = local_1c;
  local_8 = CONCAT31(local_8._1_3_,7);
  pcVar3 = strchr(local_1c,0x5c);
  do {
    if (pcVar3 == (char *)0x0) {
      local_8._1_3_ = (uint3)((uint)local_8 >> 8);
      local_8._0_1_ = 6;
      StringFree(local_20);
      local_8._0_1_ = 5;
      StringFree(local_18);
      local_8 = (uint)local_8._1_3_ << 8;
      StringFree(local_1c);
      local_8 = 0xffffffff;
      StringFree(local_30);
      ExceptionList = local_10;
      return 1;
    }
    CTString::Split((CTString *)&local_1c,(int)(pcVar3 + 1) - (int)pcVar1,(CTString *)&local_18,
                    (CTString *)&local_20);
    puVar2 = (undefined4 *)operator+((char *)&local_24,__fnmApplicationPath);
    DVar4 = GetFileAttributesA((LPCSTR)*puVar2);
    StringFree(local_24);
    if (DVar4 == 0xffffffff) {
      puVar2 = (undefined4 *)operator+((char *)&local_28,__fnmApplicationPath);
      BVar5 = CreateDirectoryA((LPCSTR)*puVar2,(LPSECURITY_ATTRIBUTES)0x0);
      StringFree(local_28);
      if (BVar5 == 0) {
        local_8._0_1_ = 6;
        StringFree(local_20);
        local_8._0_1_ = 5;
        StringFree(local_18);
        local_8 = (uint)local_8._1_3_ << 8;
        StringFree(local_1c);
        local_8 = 0xffffffff;
        StringFree(local_30);
        ExceptionList = local_10;
        return 0;
      }
    }
    pcVar3 = strchr(pcVar3 + 1,0x5c);
  } while( true );
}

