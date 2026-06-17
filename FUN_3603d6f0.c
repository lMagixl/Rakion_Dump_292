
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_3603d6f0(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  CTString *pCVar6;
  char *pcVar7;
  _SYSTEM_INFO local_2a4;
  char *local_280;
  char *local_27c;
  undefined4 local_278;
  char *local_274;
  char *local_270;
  char *local_26c;
  char *local_268;
  char *local_264;
  char *local_260;
  char *local_25c;
  char *local_258;
  char *local_254;
  char *local_250;
  char local_249;
  undefined1 local_248 [20];
  char local_234 [260];
  undefined1 local_130 [20];
  char local_11c [260];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_362108ae;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffd50;
  local_18 = DAT_362abd90;
  pcVar7 = (char *)0x0;
  local_254 = (char *)0x0;
  ExceptionList = &local_10;
  GetSystemInfo(&local_2a4);
  DAT_362bef94 = local_2a4.dwPageSize << 4;
  pcVar1 = StringDuplicate(__fnmApplicationPath);
  StringFree(DAT_362bf118);
  DAT_362bf11c = DAT_362bf088;
  _DAT_362bf080 = 0xffffffff;
  DAT_362bf118 = pcVar1;
  iVar2 = CTString::operator==(&_strModExt,&DAT_36226dd4);
  if (iVar2 != 0) {
    pcVar1 = StringDuplicate(&DAT_36226dd8);
    local_8 = 0;
    local_268 = pcVar1;
    pcVar3 = StringDuplicate(pcVar1);
    StringFree(__strModExt);
    local_8 = 0xffffffff;
    __strModExt = pcVar3;
    StringFree(pcVar1);
  }
  pcVar1 = Translate(s_ETRSLoading_group_files____36226ddc,4);
  CPrintF(pcVar1);
  local_254 = StringDuplicate(s___gro_36226df8);
  local_8 = 1;
  puVar4 = (undefined4 *)
           CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_250);
  iVar2 = findfirst(*puVar4,local_248);
  StringFree(local_250);
  local_8 = 0xffffffff;
  StringFree(local_254);
  if (iVar2 != -1) {
    do {
      local_25c = StringDuplicate(local_234);
      pcVar7 = (char *)((uint)pcVar7 | 1);
      local_8 = 2;
      local_254 = pcVar7;
      iVar5 = CTString::Matches((CTString *)&local_25c,s___gro_36226e00);
      if (iVar5 == 0) {
LAB_3603d8b1:
        local_249 = '\0';
      }
      else {
        local_260 = StringDuplicate(local_234);
        pcVar7 = (char *)0x3;
        iVar5 = FUN_3603d6e0();
        local_249 = '\x01';
        if (iVar5 == 0) goto LAB_3603d8b1;
      }
      if (((uint)pcVar7 & 2) != 0) {
        pcVar7 = (char *)((uint)pcVar7 & 0xfffffffd);
        local_254 = pcVar7;
        StringFree(local_260);
      }
      local_8 = 0xffffffff;
      if (((uint)pcVar7 & 1) != 0) {
        pcVar7 = (char *)((uint)pcVar7 & 0xfffffffe);
        StringFree(local_25c);
      }
      if (local_249 != '\0') {
        local_250 = StringDuplicate(local_234);
        local_8 = 3;
        puVar4 = (undefined4 *)
                 CTString::operator+((CTString *)&_fnmApplicationPath,(CTString *)&local_258);
        local_8._0_1_ = 4;
        local_26c = StringDuplicate((char *)*puVar4);
        local_268 = (char *)0x0;
        local_8._0_1_ = 5;
        FUN_36047780(&local_26c);
        local_8._0_1_ = 4;
        StringFree(local_26c);
        local_8 = CONCAT31(local_8._1_3_,3);
        StringFree(local_258);
        local_8 = 0xffffffff;
        StringFree(local_250);
      }
      iVar5 = findnext(iVar2,local_248);
      local_264 = (char *)(uint)(iVar5 == 0);
    } while (local_264 != (char *)0x0);
  }
  _findclose(iVar2);
  iVar2 = CTString::operator!=((CTString *)&_fnmCDPath,&DAT_36226e06);
  if (iVar2 != 0) {
    local_250 = StringDuplicate(s___gro_36226e08);
    local_8 = 6;
    puVar4 = (undefined4 *)CTString::operator+((CTString *)&_fnmCDPath,(CTString *)&local_258);
    iVar2 = findfirst(*puVar4,local_130);
    StringFree(local_258);
    local_8 = 0xffffffff;
    StringFree(local_250);
    if (iVar2 != -1) {
      do {
        local_250 = StringDuplicate(local_11c);
        pcVar1 = (char *)((uint)pcVar7 | 4);
        local_8 = 7;
        local_254 = pcVar1;
        iVar5 = CTString::Matches((CTString *)&local_250,s___gro_36226e10);
        if (iVar5 == 0) {
LAB_3603daa4:
          local_249 = '\0';
          pcVar7 = pcVar1;
        }
        else {
          local_258 = StringDuplicate(local_11c);
          pcVar1 = (char *)((uint)pcVar7 | 0xc);
          iVar5 = FUN_3603d6e0();
          local_249 = '\x01';
          pcVar7 = pcVar1;
          if (iVar5 == 0) goto LAB_3603daa4;
        }
        if (((uint)pcVar7 & 8) != 0) {
          pcVar7 = (char *)((uint)pcVar7 & 0xfffffff7);
          local_254 = pcVar7;
          StringFree(local_258);
        }
        local_8 = 0xffffffff;
        if (((uint)pcVar7 & 4) != 0) {
          pcVar7 = (char *)((uint)pcVar7 & 0xfffffffb);
          StringFree(local_250);
        }
        if (local_249 != '\0') {
          local_25c = StringDuplicate(local_11c);
          local_8 = 8;
          puVar4 = (undefined4 *)CTString::operator+((CTString *)&_fnmCDPath,(CTString *)&local_268)
          ;
          local_8._0_1_ = 9;
          local_27c = StringDuplicate((char *)*puVar4);
          local_278 = 0;
          local_8._0_1_ = 10;
          FUN_36047780(&local_27c);
          local_8._0_1_ = 9;
          StringFree(local_27c);
          local_8 = CONCAT31(local_8._1_3_,8);
          StringFree(local_268);
          local_8 = 0xffffffff;
          StringFree(local_25c);
        }
        iVar5 = findnext(iVar2,local_130);
        local_264 = (char *)(uint)(iVar5 == 0);
      } while (local_264 != (char *)0x0);
    }
    _findclose(iVar2);
  }
  local_8 = 0xb;
  FUN_360475c0();
  local_8 = 0xffffffff;
  CPrintF(&DAT_36226e40);
  local_260 = StringDuplicate(&DAT_36226e50);
  local_8 = 0xd;
  local_270 = StringDuplicate(s__iCPU_36226e48);
  local_8._0_1_ = 0xe;
  local_274 = StringDuplicate(&DAT_36226e44);
  local_8._0_1_ = 0xf;
  pCVar6 = (CTString *)CTString::operator+((CTString *)&local_274,(CTString *)&local_264);
  local_8._0_1_ = 0x10;
  pCVar6 = (CTString *)CTString::operator+(pCVar6,(CTString *)&local_280);
  local_8._0_1_ = 0x11;
  CShell::SetINDEX(_pShell,pCVar6,1);
  local_8._0_1_ = 0x10;
  StringFree(local_280);
  local_8._0_1_ = 0xf;
  StringFree(local_264);
  local_8._0_1_ = 0xe;
  StringFree(local_274);
  local_8 = CONCAT31(local_8._1_3_,0xd);
  StringFree(local_270);
  local_8 = 0xffffffff;
  StringFree(local_260);
  ExceptionList = local_10;
  return;
}

