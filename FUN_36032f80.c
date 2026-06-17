
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __cdecl
FUN_36032f80(char *param_1,undefined4 param_2,CTString *param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  CTString *pCVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  CTFileStream local_3b8 [116];
  char *local_344;
  char *local_340;
  char *local_338;
  char *local_334;
  char *local_330;
  char *local_32c;
  char *local_328;
  undefined4 local_324;
  char *local_320;
  char *local_31c;
  char local_318 [256];
  char local_218 [256];
  char local_118 [256];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_3620fd06;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffc38;
  local_18 = DAT_362abd90;
  local_8 = 0;
  if (DAT_362c5474 == 0) {
    local_8 = 0xffffffff;
    ExceptionList = &local_10;
    local_14 = &stack0xfffffc38;
    StringFree(param_1);
LAB_360334eb:
    uVar6 = 0;
  }
  else {
    ExceptionList = &local_10;
    local_330 = StringDuplicate(&DAT_36222fa0);
    local_8._0_1_ = 2;
    CTFileStream::CTFileStream(local_3b8);
    local_8._0_1_ = 3;
    pcVar1 = StringDuplicate(s_Data_BaseForReplacingFiles_txt_362257c4);
    local_8._0_1_ = 4;
    local_334 = pcVar1;
    local_328 = StringDuplicate(pcVar1);
    local_324 = 0;
    local_8._0_1_ = 6;
    StringFree(pcVar1);
    CTFileStream::Open_t(local_3b8,(CTFileName *)&local_328,1);
    do {
      do {
        iVar2 = CTStream::AtEOF((CTStream *)local_3b8);
        if (iVar2 != 0) {
          CTFileStream::Close(local_3b8);
          local_8._0_1_ = 3;
          StringFree(local_328);
          local_8 = CONCAT31(local_8._1_3_,2);
          CTFileStream::~CTFileStream(local_3b8);
          local_8 = 1;
          local_32c = StringDuplicate(&DAT_36222fa0);
          local_8._0_1_ = 0xb;
          pcVar1 = param_1;
          pcVar3 = Translate(s_ETRSFor___s__362257f4,4);
          CTString::PrintF((CTString *)&local_32c,(char *)&local_32c,pcVar3,pcVar1);
          pcVar1 = StringDuplicate(&DAT_36222fa0);
          local_8._0_1_ = 0xc;
          local_338 = pcVar1;
          CTFileName::FileExt((CTFileName *)&param_1);
          local_8._0_1_ = 0xd;
          pCVar4 = (CTString *)CTFileName::FileName((CTFileName *)&param_1);
          local_8._0_1_ = 0xe;
          puVar5 = (undefined4 *)CTString::operator+(pCVar4,(CTString *)&local_31c);
          local_8._0_1_ = 0xf;
          pcVar3 = StringDuplicate((char *)*puVar5);
          local_334 = pcVar3;
          StringFree(pcVar1);
          local_8._0_1_ = 0xe;
          local_338 = pcVar3;
          StringFree(local_31c);
          local_8._0_1_ = 0xd;
          StringFree(local_328);
          local_8._0_1_ = 0xc;
          StringFree(local_340);
          puVar5 = FUN_36032e00(&local_328,local_32c,pcVar3,param_4);
          local_8._0_1_ = 0x10;
          local_31c = StringDuplicate((char *)*puVar5);
          pCVar4 = param_3;
          StringFree(*(char **)param_3);
          *(char **)pCVar4 = local_31c;
          *(undefined4 *)(pCVar4 + 4) = puVar5[1];
          local_8._0_1_ = 0xc;
          StringFree(local_328);
          iVar2 = CTString::operator==(pCVar4,&DAT_36225801);
          if (iVar2 == 0) {
            local_8._0_1_ = 0x11;
            pcVar1 = StringDuplicate(s_Data_BaseForReplacingFiles_txt_36225804);
            local_8._0_1_ = 0x12;
            local_344 = pcVar1;
            local_328 = StringDuplicate(pcVar1);
            local_324 = 0;
            local_8._0_1_ = 0x14;
            StringFree(pcVar1);
            local_320 = StringDuplicate(&DAT_36222fa0);
            local_8 = CONCAT31(local_8._1_3_,0x15);
            iVar2 = FileExists((CTFileName *)&local_328);
            if (iVar2 != 0) {
              CTString::Load_t((CTString *)&local_320,(CTFileName *)&local_328);
            }
            local_31c = StringDuplicate(&DAT_36222fa0);
            local_8._0_1_ = 0x16;
            CTString::PrintF(*(CTString **)pCVar4,(char *)&local_31c,s___s____s__36225824,param_1,
                             *(CTString **)pCVar4);
            CTString::operator+=((CTString *)&local_320,(CTString *)&local_31c);
            CTString::Save_t((CTString *)&local_320,(CTFileName *)&local_328);
            local_8._0_1_ = 0x15;
            StringFree(local_31c);
            local_8._0_1_ = 0x14;
            StringFree(local_320);
            local_8 = CONCAT31(local_8._1_3_,0x11);
            StringFree(local_328);
            local_8 = 0xb;
            StringFree(pcVar3);
            local_8._0_1_ = 1;
            StringFree(local_32c);
            local_8 = (uint)local_8._1_3_ << 8;
            StringFree(local_330);
            local_8 = 0xffffffff;
            StringFree(param_1);
            ExceptionList = local_10;
            return 1;
          }
          local_8._0_1_ = 0xb;
          StringFree(pcVar3);
          local_8._0_1_ = 1;
          StringFree(local_32c);
          local_8 = (uint)local_8._1_3_ << 8;
          StringFree(local_330);
          local_8 = 0xffffffff;
          StringFree(param_1);
          goto LAB_360334eb;
        }
        CTStream::GetLine_t((CTStream *)local_3b8,local_318,0x100,'\n');
        sscanf(local_318,s_________________362257e4,local_218,local_118);
        local_31c = StringDuplicate(local_218);
        local_8._0_1_ = 7;
        iVar2 = CTString::operator==((CTString *)&local_31c,local_118);
        local_8._0_1_ = 6;
        StringFree(local_31c);
      } while (iVar2 != 0);
      local_320 = StringDuplicate(local_218);
      local_8._0_1_ = 8;
      iVar2 = CTString::operator==((CTString *)&local_320,(CTString *)&param_1);
      local_8._0_1_ = 6;
      StringFree(local_320);
    } while (iVar2 == 0);
    pcVar1 = StringDuplicate(local_118);
    local_8._0_1_ = 9;
    local_334 = pcVar1;
    pcVar3 = StringDuplicate(pcVar1);
    pCVar4 = param_3;
    StringFree(*(char **)param_3);
    *(char **)pCVar4 = pcVar3;
    *(undefined4 *)(pCVar4 + 4) = 0;
    local_8._0_1_ = 6;
    StringFree(pcVar1);
    local_8._0_1_ = 3;
    StringFree(local_328);
    local_8._0_1_ = 2;
    CTFileStream::~CTFileStream(local_3b8);
    local_8 = (uint)local_8._1_3_ << 8;
    StringFree(local_330);
    local_8 = 0xffffffff;
    StringFree(param_1);
    uVar6 = 1;
  }
  ExceptionList = local_10;
  return uVar6;
}

