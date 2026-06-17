
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Variable defined which should be unmapped: param_1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CTFileName * __cdecl FUN_36026430(CTFileName *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  CTString *pCVar6;
  int iVar7;
  CTFileStream local_2b4 [116];
  char *local_240;
  char *local_238;
  char *local_230;
  char *local_228;
  char *local_224;
  char *local_220;
  undefined4 local_21c;
  char local_218 [256];
  char local_118 [256];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_3620f339;
  local_10 = ExceptionList;
  local_18 = DAT_362abd90;
  local_14 = &stack0xfffffd40;
  if (DAT_362c5460 != 0) {
    ExceptionList = &local_10;
    puVar3 = &stack0xfffffd40;
    if (DAT_362a1b2c != 0) {
      _DAT_362b92f8 = 0x10;
      local_8 = 0;
      ExceptionList = &local_10;
      CTFileStream::CTFileStream(local_2b4);
      local_8._0_1_ = 1;
      pcVar4 = StringDuplicate(s_Data_ExcludedEditorModels_lst_36224238);
      local_8._0_1_ = 2;
      local_228 = pcVar4;
      local_220 = StringDuplicate(pcVar4);
      local_21c = 0;
      local_8._0_1_ = 3;
      CTFileStream::Open_t(local_2b4,(CTFileName *)&local_220,1);
      local_8._0_1_ = 2;
      StringFree(local_220);
      local_8._0_1_ = 1;
      StringFree(pcVar4);
      local_224 = StringDuplicate(&DAT_36222fa0);
      local_8._0_1_ = 4;
      while( true ) {
        iVar5 = CTStream::AtEOF((CTStream *)local_2b4);
        if (iVar5 != 0) break;
        CTStream::GetLine_t((CTStream *)local_2b4,local_218,0x100,'\n');
        sscanf(local_218,s_________36224258,local_118);
        local_228 = local_118;
        do {
          cVar2 = *local_228;
          local_228 = local_228 + 1;
        } while (cVar2 != '\0');
        local_228 = local_228 + -(int)(local_118 + 1);
        if (local_228 != (char *)0x0) {
          iVar7 = DAT_362b92f4 + 1;
          DAT_362b92f4 = iVar7;
          iVar5 = FUN_36026b60((undefined4 *)&DAT_362b92ec);
          if (iVar5 < iVar7) {
            iVar5 = FUN_36026b60((undefined4 *)&DAT_362b92ec);
            FUN_36026e70(&DAT_362b92ec,iVar5 + _DAT_362b92f8);
          }
          puVar1 = (undefined4 *)(DAT_362b92f0 + -4 + DAT_362b92f4 * 4);
          pcVar4 = StringDuplicate(local_118);
          StringFree((char *)*puVar1);
          *puVar1 = pcVar4;
        }
      }
      CTFileStream::Close(local_2b4);
      local_8._0_1_ = 1;
      StringFree(local_224);
      local_8 = (uint)local_8._1_3_ << 8;
      CTFileStream::~CTFileStream(local_2b4);
      DAT_362a1b2c = 0;
      puVar3 = local_14;
    }
    local_14 = puVar3;
    local_8 = 0xffffffff;
    local_228 = (char *)FUN_36026a90(0x362b92ec);
    local_224 = (char *)0x0;
    if (0 < (int)local_228) {
      do {
        pcVar4 = local_224;
        local_220 = StringDuplicate(*(char **)(DAT_362b92f0 + (int)local_224 * 4));
        local_21c = 0;
        local_8 = 6;
        iVar5 = CTString::operator==((CTString *)&local_220,(CTString *)param_1);
        if (iVar5 != 0) {
          pCVar6 = (CTString *)CTFileName::FileExt(param_1);
          local_8._0_1_ = 7;
          iVar5 = CTString::operator==(pCVar6,&DAT_36224260);
          local_8._0_1_ = 6;
          StringFree(local_238);
          if (iVar5 != 0) {
            local_8 = 0xffffffff;
            StringFree(local_220);
            ExceptionList = local_10;
            return param_1;
          }
          pCVar6 = (CTString *)CTFileName::FileExt(param_1);
          local_8._0_1_ = 8;
          iVar5 = CTString::operator==(pCVar6,&DAT_36224268);
          local_8._0_1_ = 6;
          StringFree(local_230);
          if (iVar5 != 0) {
            local_8 = 0xffffffff;
            StringFree(local_220);
            ExceptionList = local_10;
            return param_1;
          }
          pCVar6 = (CTString *)CTFileName::FileExt(param_1);
          local_8._0_1_ = 9;
          iVar5 = CTString::operator==(pCVar6,&DAT_36224270);
          local_8 = CONCAT31(local_8._1_3_,6);
          StringFree(local_240);
          pcVar4 = local_224;
          if (iVar5 != 0) {
            local_8 = 0xffffffff;
            StringFree(local_220);
            ExceptionList = local_10;
            return param_1;
          }
        }
        local_8 = 0xffffffff;
        StringFree(local_220);
        local_224 = (char *)((int)pcVar4 + 1);
      } while ((int)local_224 < (int)local_228);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

