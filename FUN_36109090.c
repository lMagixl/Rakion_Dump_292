
void __thiscall FUN_36109090(void *this,undefined4 param_1)

{
  *(undefined4 *)this = 1;
  CPlayerAction::Clear((CPlayerAction *)((int)this + 0x10));
  CPlayerAction::Clear((CPlayerAction *)((int)this + 0x58));
  *(undefined4 *)((int)this + 0xa4) = param_1;
  FUN_360f1160((undefined4 *)((int)this + 0xac));
  return;
}

