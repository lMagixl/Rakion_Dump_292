
void __fastcall FUN_36010d50(int param_1)

{
  undefined1 local_1c [4];
  undefined **local_18;
  exception aeStack_14 [8];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620db90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_36001a30(local_1c,(LONG *)(param_1 + 0xc));
  local_4 = 0;
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(param_1 + 8) != 0)) {
    exception::exception((exception *)&local_18);
    local_18 = &PTR_FUN_36222fdc;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_3600eef0((exception *)&local_18);
    exception::~exception(aeStack_14);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  InterlockedExchange((LONG *)local_18,0);
  ExceptionList = puStack_8;
  return;
}

