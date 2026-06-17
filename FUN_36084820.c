
void FUN_36084820(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211ff3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CPrintF(&DAT_3622b59c);
  local_14 = &stack0xffffffe4;
  pcVar1 = StringDuplicate(*(char **)(_pGfx + 0xac8));
  puVar2 = FUN_360846f0(&local_14,pcVar1);
  local_4 = 0;
  CPrintF(s___Published_extensions___s_3622b5a0,*puVar2);
  local_4 = 0xffffffff;
  StringFree(local_14);
  iVar3 = CTString::operator!=((CTString *)(_pGfx + 0xacc),&DAT_3622b5bb);
  if (iVar3 != 0) {
    local_14 = &stack0xffffffe4;
    pcVar1 = StringDuplicate(*(char **)(_pGfx + 0xacc));
    puVar2 = FUN_360846f0(&local_14,pcVar1);
    local_4 = 1;
    CPrintF(&DAT_3622b5bc,*puVar2);
    local_4 = 0xffffffff;
    StringFree(local_14);
  }
  local_10 = &stack0xffffffe4;
  pcVar1 = StringDuplicate(*(char **)(_pGfx + 0xad0));
  puVar2 = FUN_360846f0(&local_10,pcVar1);
  local_4 = 2;
  CPrintF(s___Supported_extensions___s_3622b5c0,*puVar2);
  local_4 = 0xffffffff;
  StringFree(local_10);
  CPrintF(&DAT_3622b5e0);
  ExceptionList = local_c;
  return;
}

