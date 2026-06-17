
void __fastcall FUN_36109030(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_36217a4a;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  CPlayerCharacter::~CPlayerCharacter((CPlayerCharacter *)(param_1 + 0xb8));
  local_4 = local_4 & 0xffffff00;
  thunk_FUN_360f1160((undefined4 *)(param_1 + 0xac));
  local_4 = 0xffffffff;
  CTCriticalSection::~CTCriticalSection((CTCriticalSection *)(param_1 + 8));
  ExceptionList = local_c;
  return;
}

