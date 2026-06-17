
void __fastcall FUN_361a95d0(undefined4 *param_1)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_3621bd5d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_36243888;
  local_4 = 1;
  FUN_361a9510(param_1,0);
  local_4 = local_4 & 0xffffff00;
  FUN_361a3160(param_1 + 10);
  local_4 = 0xffffffff;
  FUN_361a3210((LPCRITICAL_SECTION)(param_1 + 4));
  ExceptionList = pvStack_c;
  return;
}

