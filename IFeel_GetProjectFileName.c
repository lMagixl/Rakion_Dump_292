
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class CTString __cdecl IFeel_GetProjectFileName(void) */

undefined4 * __cdecl IFeel_GetProjectFileName(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  CTString *pCVar4;
  CTString *pCVar5;
  bool bVar6;
  undefined4 *in_stack_00000004;
  char *local_238;
  undefined4 local_234;
  char *local_230;
  undefined4 local_22c;
  int local_228;
  char *local_224;
  char *local_220;
  char *local_21c;
  char local_218 [256];
  CTString local_118 [256];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0x271a0  2271  ?IFeel_GetProjectFileName@@YA?AVCTString@@XZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620f3f1;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffdbc;
  local_18 = DAT_362abd90;
  local_22c = 0;
  ExceptionList = &local_10;
  local_21c = StringDuplicate(&DAT_36222fa0);
  local_8 = 1;
  pcVar1 = StringDuplicate(s_Data_IFeel_txt_362242a4);
  local_8._0_1_ = 2;
  local_230 = pcVar1;
  local_238 = StringDuplicate(pcVar1);
  local_234 = 0;
  local_8._0_1_ = 4;
  StringFree(pcVar1);
  pcVar1 = StringDuplicate(s_Data_Default_ifr_362242b4);
  local_8._0_1_ = 5;
  local_230 = pcVar1;
  IFeel_GetProductName();
  local_8 = CONCAT31(local_8._1_3_,7);
  CTString::Load_t((CTString *)&local_21c,(CTFileName *)&local_238);
  local_8 = 6;
  local_220 = StringDuplicate(&DAT_36222fa0);
  local_8 = CONCAT31(local_8._1_3_,9);
  local_228 = 0;
  do {
    pcVar2 = StringDuplicate(local_21c);
    StringFree(local_220);
    local_220 = pcVar2;
    CTString::OnlyFirstLine((CTString *)&local_220);
    iVar3 = CTString::operator==((CTString *)&local_220,(CTString *)&local_21c);
    pcVar2 = pcVar1;
    if (iVar3 != 0) break;
    CTString::RemovePrefix((CTString *)&local_21c,(CTString *)&local_220);
    CTString::DeleteChar((CTString *)&local_21c,0);
    CTString::ScanF(local_118,(char *)&local_21c);
    iVar3 = 8;
    bVar6 = true;
    pCVar4 = local_118;
    pCVar5 = (CTString *)s_Default_362242e8;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pCVar4 == *pCVar5;
      pCVar4 = pCVar4 + 1;
      pCVar5 = pCVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      pcVar2 = StringDuplicate(local_218);
      StringFree(pcVar1);
      local_230 = pcVar2;
    }
    iVar3 = CTString::operator==((CTString *)&local_224,(char *)local_118);
    if (iVar3 != 0) {
      pcVar1 = StringDuplicate(local_218);
      *in_stack_00000004 = pcVar1;
      local_22c = 1;
      local_8._0_1_ = 6;
      StringFree(local_220);
      local_8._0_1_ = 5;
      StringFree(local_224);
      local_8._0_1_ = 4;
      StringFree(pcVar2);
      local_8._0_1_ = 1;
      StringFree(local_238);
      local_8 = (uint)local_8._1_3_ << 8;
      StringFree(local_21c);
      ExceptionList = local_10;
      return in_stack_00000004;
    }
    local_228 = local_228 + 1;
    pcVar1 = pcVar2;
  } while (local_228 < 1000);
  CPrintF(s_No_project_file_specified_for_de_362242f0,local_224);
  pcVar1 = StringDuplicate(pcVar2);
  *in_stack_00000004 = pcVar1;
  local_22c = 1;
  local_8._0_1_ = 6;
  StringFree(local_220);
  local_8._0_1_ = 5;
  StringFree(local_224);
  local_8._0_1_ = 4;
  StringFree(pcVar2);
  local_8._0_1_ = 1;
  StringFree(local_238);
  local_8 = (uint)local_8._1_3_ << 8;
  StringFree(local_21c);
  ExceptionList = local_10;
  return in_stack_00000004;
}

