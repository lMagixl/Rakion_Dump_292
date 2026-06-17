
/* void __cdecl InitTranslation(void) */

void __cdecl InitTranslation(void)

{
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x456c0  2323  ?InitTranslation@@YAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621134d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_36045c20((undefined4 *)&DAT_362bf308);
  FUN_360e4c10((undefined4 *)&DAT_362bf2f4);
  FUN_360e4c40(&DAT_362bf2f4,100,5,5);
  local_10 = StringDuplicate(s_user_INDEX_dbg_bCheckTranslation_36227770);
  local_4 = 0;
  CShell::DeclareSymbol(_pShell,(CTString *)&local_10,&DAT_362bf220);
  local_4 = 0xffffffff;
  StringFree(local_10);
  ExceptionList = local_c;
  return;
}

