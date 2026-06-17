
CTString * __cdecl FUN_36037960(CTString *param_1,CTString *param_2)

{
  CTString *pCVar1;
  int iVar2;
  CTString local_98 [4];
  CTFileName local_94 [8];
  CTString local_8c [4];
  undefined4 local_88;
  CTString local_84 [4];
  CTFileStream local_80 [116];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362101e3;
  local_c = ExceptionList;
  local_88 = 0;
  ExceptionList = &local_c;
  CTString::CTString(local_84,&DAT_36225e74);
  local_4 = 1;
  CTString::operator+(param_2,local_8c);
  local_4._0_1_ = 3;
  CTString::~CTString(local_84);
  CTFileStream::CTFileStream(local_80);
  local_4._0_1_ = 4;
  pCVar1 = (CTString *)CTString::CTString(local_98,s_Help_ShellSymbols_txt_36225e78);
  local_4._0_1_ = 5;
  CTFileName::CTFileName(local_94,pCVar1);
  local_4._0_1_ = 6;
  CTFileStream::Open_t(local_80,local_94,1);
  local_4._0_1_ = 5;
  CTFileName::~CTFileName(local_94);
  local_4 = CONCAT31(local_4._1_3_,4);
  CTString::~CTString(local_98);
  iVar2 = CTStream::AtEOF((CTStream *)local_80);
  do {
    if (iVar2 != 0) {
      CTString::CTString(param_1,&DAT_36225e8e);
      local_88 = 1;
LAB_36037b0b:
      local_4._0_1_ = 3;
      CTFileStream::~CTFileStream(local_80);
      local_4 = (uint)local_4._1_3_ << 8;
      CTString::~CTString(local_8c);
      ExceptionList = local_c;
      return param_1;
    }
    CTString::CTString(local_98);
    local_4._0_1_ = 7;
    CTStream::GetLine_t((CTStream *)local_80,local_98,':');
    CTString::TrimSpacesLeft(local_98);
    CTString::TrimSpacesRight(local_98);
    CTString::CTString((CTString *)local_94);
    local_4._0_1_ = 8;
    CTStream::GetLine_t((CTStream *)local_80,(CTString *)local_94,'$');
    CTString::TrimSpacesLeft((CTString *)local_94);
    CTString::TrimSpacesRight((CTString *)local_94);
    iVar2 = CTString::Matches(local_98,local_8c);
    if (iVar2 != 0) {
      CTString::CTString(param_1,(CTString *)local_94);
      local_88 = 1;
      local_4._0_1_ = 7;
      CTString::~CTString((CTString *)local_94);
      local_4 = CONCAT31(local_4._1_3_,4);
      CTString::~CTString(local_98);
      goto LAB_36037b0b;
    }
    local_4._0_1_ = 7;
    CTString::~CTString((CTString *)local_94);
    local_4 = CONCAT31(local_4._1_3_,4);
    CTString::~CTString(local_98);
    iVar2 = CTStream::AtEOF((CTStream *)local_80);
  } while( true );
}

