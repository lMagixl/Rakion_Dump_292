
void __fastcall FUN_361090d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  CPlayerAction::Clear((CPlayerAction *)(param_1 + 4));
  CPlayerAction::Clear((CPlayerAction *)(param_1 + 0x16));
  param_1[0x29] = 0xffffffff;
  return;
}

