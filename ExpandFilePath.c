
/* long __cdecl ExpandFilePath(unsigned long,class CTFileName const &,class CTFileName &) */

long __cdecl ExpandFilePath(ulong param_1,CTFileName *param_2,CTFileName *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  CTString *pCVar5;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x3f7a0  1588  ?ExpandFilePath@@YAJKABVCTFileName@@AAV1@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210b5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_3603f660();
  local_4 = 0;
  if ((((*local_14 == '\0') || (local_14[1] != ':')) &&
      ((*local_14 != '\\' || (local_14[1] != '\\')))) ||
     (((param_1 & 2) == 0 && (iVar1 = FUN_3603f2c0(), iVar1 == 0)))) {
    if ((param_1 & 2) == 0) {
      if ((param_1 & 1) != 0) {
        iVar1 = FUN_3603f4b0(&local_14,param_1);
        if (iVar1 == 0) {
          local_1c = StringDuplicate(local_14);
          local_18 = local_10;
          local_4 = CONCAT31(local_4._1_3_,2);
          iVar4 = FUN_3603f2f0();
          if (iVar4 != 0) {
            iVar1 = FUN_3603f4b0(&local_1c,param_1);
          }
          local_4 = local_4 & 0xffffff00;
          StringFree(local_1c);
          if (iVar1 == 0) {
            pCVar5 = (CTString *)
                     CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_1c);
            local_4._0_1_ = 4;
            CTFileName::operator=(param_3,pCVar5);
            local_4 = (uint)local_4._1_3_ << 8;
            StringFree(local_1c);
            local_4 = 0xffffffff;
            StringFree(local_14);
            ExceptionList = local_c;
            return 0;
          }
        }
        local_4 = 0xffffffff;
        StringFree(local_14);
        ExceptionList = local_c;
        return iVar1;
      }
      puVar3 = (undefined4 *)
               CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_20);
      local_4._0_1_ = 3;
      pcVar2 = StringDuplicate((char *)*puVar3);
      StringFree(*(char **)param_3);
      *(char **)param_3 = pcVar2;
      *(undefined4 *)(param_3 + 4) = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(local_20);
    }
    else {
      puVar3 = (undefined4 *)
               CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_20);
      local_4._0_1_ = 1;
      pcVar2 = StringDuplicate((char *)*puVar3);
      StringFree(*(char **)param_3);
      *(char **)param_3 = pcVar2;
      *(undefined4 *)(param_3 + 4) = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(local_20);
    }
    local_4 = 0xffffffff;
    StringFree(local_14);
  }
  else {
    pcVar2 = StringDuplicate(local_14);
    StringFree(*(char **)param_3);
    *(char **)param_3 = pcVar2;
    *(undefined4 *)(param_3 + 4) = local_10;
    local_4 = 0xffffffff;
    StringFree(local_14);
  }
  ExceptionList = local_c;
  return 1;
}

