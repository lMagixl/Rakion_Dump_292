
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CShell::~CShell(void) */

void __thiscall CShell::~CShell(CShell *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x38e70  477  ??1CShell@@QAE@XZ */
  puStack_8 = &LAB_362103e8;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_36021a30((undefined4 *)&DAT_362bec34);
  _DAT_362bec48 = 0;
  FUN_36039dd0((undefined4 *)&DAT_362bec50);
  DAT_362bec64 = 0;
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_36039ed0((undefined4 *)(this + 8));
  local_4 = 0xffffffff;
  CTCriticalSection::~CTCriticalSection((CTCriticalSection *)this);
  ExceptionList = local_c;
  return;
}

