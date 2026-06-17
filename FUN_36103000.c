
undefined4 * __fastcall FUN_36103000(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362175ea;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_36102b40(param_1);
  local_4 = 0;
  FUN_36102b90(param_1);
  FUN_36102720(param_1,DAT_362a60a0,DAT_362a60a4,DAT_362a60a8);
  FUN_36102600(param_1,&LAB_361025e0,&LAB_361025f0);
  ExceptionList = local_c;
  return param_1;
}

