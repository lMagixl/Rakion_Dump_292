
void __cdecl FUN_36037c10(CTString *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_36210207;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_36037960((CTString *)&local_18,param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar1 = CTString::operator!=((CTString *)&local_18,&DAT_36225e90);
  if (iVar1 == 0) {
    pcVar2 = Translate(s_ETRSNo_help_found_for___s___36225e98,4);
    local_18 = *(undefined4 *)param_1;
  }
  else {
    pcVar2 = &DAT_36225e94;
  }
  CPrintF(pcVar2,local_18);
  local_8 = local_8 & 0xffffff00;
  CTString::~CTString((CTString *)&local_18);
  ExceptionList = local_10;
  return;
}

