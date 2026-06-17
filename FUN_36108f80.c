
undefined4 * __fastcall FUN_36108f80(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217a27;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTCriticalSection::CTCriticalSection((CTCriticalSection *)(param_1 + 2));
  local_4 = 0;
  CPlayerAction::CPlayerAction((CPlayerAction *)(param_1 + 4));
  CPlayerAction::CPlayerAction((CPlayerAction *)(param_1 + 0x16));
  FUN_360f0f80((CListHead *)(param_1 + 0x2b));
  local_4._0_1_ = 1;
  CPlayerCharacter::CPlayerCharacter((CPlayerCharacter *)(param_1 + 0x2e));
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0xffffffff;
  CPlayerAction::Clear((CPlayerAction *)(param_1 + 0x16));
  CPlayerAction::Clear((CPlayerAction *)(param_1 + 4));
  FUN_360f1160(param_1 + 0x2b);
  param_1[0x29] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

