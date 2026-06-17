
void FUN_36038ef0(void)

{
  CTString *pCVar1;
  int iVar2;
  CTFileName *this;
  int iVar3;
  CShellSymbol *pCVar4;
  int *piVar5;
  void *this_00;
  CShell *this_01;
  CListHead local_50 [28];
  CTFileName local_34 [8];
  CTFileName local_2c [8];
  CTString local_24 [4];
  CTString local_20 [4];
  int local_1c;
  CTString local_18 [4];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_36210432;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffa4;
  ExceptionList = &local_10;
  FUN_36025a30(local_50);
  local_8 = 0;
  CTString::CTString((CTString *)&local_1c,s___ini_36225fa0);
  local_8._0_1_ = 1;
  pCVar1 = (CTString *)CTString::CTString(local_20,s_Scripts_Commands__36225fa8);
  local_8._0_1_ = 2;
  CTFileName::CTFileName(local_2c,pCVar1);
  local_8._0_1_ = 3;
  MakeDirList((CDynamicStackArray<class_CTFileName> *)local_50,local_2c,(CTString *)&local_1c,1);
  local_8._0_1_ = 2;
  CTFileName::~CTFileName(local_2c);
  local_8._0_1_ = 1;
  CTString::~CTString(local_20);
  local_8 = (uint)local_8._1_3_ << 8;
  CTString::~CTString((CTString *)&local_1c);
  local_1c = 0;
  while( true ) {
    iVar3 = local_1c;
    iVar2 = FUN_360259d0((int)local_50);
    if (iVar2 <= iVar3) break;
    this = (CTFileName *)thunk_FUN_360217c0(local_50,iVar3);
    CTString::CTString(local_18);
    local_8 = CONCAT31(local_8._1_3_,5);
    CTString::Load_t(local_18,this);
    local_8 = 4;
    pCVar1 = (CTString *)CTFileName::FileName(this);
    local_8._0_1_ = 7;
    CTString::CTString(local_20,pCVar1);
    local_8._0_1_ = 9;
    CTFileName::~CTFileName(local_34);
    iVar3 = FUN_3603a3d0();
    pCVar4 = CShell::GetSymbol(_pShell,local_20,0);
    FUN_361b5000(this_00,10,iVar3,(int *)pCVar4,0,0);
    FUN_3603a640(iVar3);
    piVar5 = (int *)thunk_FUN_36039b40(&DAT_362bec70,*(int *)pCVar4);
    if ((*piVar5 == 7) && (((byte)pCVar4[0x14] & 1) == 0)) {
      pCVar1 = (CTString *)operator+((char *)local_24,(CTString *)s__command_36225fc0);
      local_8._0_1_ = 10;
      CTString::operator=(*(CTString **)(pCVar4 + 8),pCVar1);
      local_8._0_1_ = 9;
      CTString::~CTString(local_24);
    }
    else {
      CShell::ErrorF(this_01,(char *)_pShell,s_Symbol___s__is_not_suitable_to_b_36225fcc,
                     *(undefined4 *)(pCVar4 + 4));
    }
    local_8._0_1_ = 4;
    CTString::~CTString(local_20);
    local_8 = (uint)local_8._1_3_ << 8;
    CTString::~CTString(local_18);
    local_1c = local_1c + 1;
  }
  local_8 = 0xffffffff;
  thunk_FUN_36021ad0((undefined4 *)local_50);
  ExceptionList = local_10;
  return;
}

