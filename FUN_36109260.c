
void __thiscall FUN_36109260(void *this,CNetworkMessage *param_1,int param_2)

{
  CListHead *this_00;
  int iVar1;
  int local_a0;
  int local_9c;
  CPlayerAction local_98 [8];
  double local_90;
  CPlayerAction local_50 [76];
  
  CPlayerAction::CPlayerAction(local_50);
  FUN_361064e0(param_1);
  this_00 = (CListHead *)((int)this + 0xac);
  FUN_360f0fc0(this_00,(undefined4 *)local_50);
  local_a0 = 0;
  CNetworkMessage::ReadBits(param_1,&local_a0,2);
  local_9c = 0;
  if (0 < local_a0) {
    do {
      CPlayerAction::CPlayerAction(local_98);
      FUN_361064e0(param_1);
      if (*(double *)((int)this + 0x60) < local_90) {
        FUN_360f0fc0(this_00,(undefined4 *)local_98);
      }
      local_9c = local_9c + 1;
    } while (local_9c < local_a0);
  }
  iVar1 = CListHead::Count(this_00);
  while (param_2 < iVar1) {
    FUN_360f10c0((undefined4 *)this_00);
    iVar1 = CListHead::Count(this_00);
  }
  return;
}

