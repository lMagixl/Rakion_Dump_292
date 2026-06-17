
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36118660(void *this,int param_1)

{
  int iVar1;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x658);
  local_20 = *(float *)(iVar1 + 0x164);
  local_1c = *(undefined4 *)(iVar1 + 0x168);
  local_18 = *(undefined4 *)(iVar1 + 0x16c);
  local_14 = *(float *)(iVar1 + 0x170) - _DAT_362253e4;
  FUN_36118410(this,&local_20);
  iVar1 = *(int *)(param_1 + 0x658);
  local_20 = *(float *)(iVar1 + 0x174);
  local_1c = *(undefined4 *)(iVar1 + 0x178);
  local_18 = *(undefined4 *)(iVar1 + 0x17c);
  local_14 = *(float *)(iVar1 + 0x180) - _DAT_362253e4;
  FUN_36118410(this,&local_20);
  iVar1 = *(int *)(param_1 + 0x658);
  local_20 = *(float *)(iVar1 + 0x144);
  local_1c = *(undefined4 *)(iVar1 + 0x148);
  local_18 = *(undefined4 *)(iVar1 + 0x14c);
  local_14 = *(float *)(iVar1 + 0x150) - _DAT_362253e4;
  FUN_36118410(this,&local_20);
  iVar1 = *(int *)(param_1 + 0x658);
  local_20 = *(float *)(iVar1 + 0x154);
  local_1c = *(undefined4 *)(iVar1 + 0x158);
  local_18 = *(undefined4 *)(iVar1 + 0x15c);
  local_14 = *(float *)(iVar1 + 0x160) - _DAT_362253e4;
  FUN_36118410(this,&local_20);
  local_20 = 0.0;
  local_1c = 0;
  local_18 = 0xbf800000;
  local_10[0] = 0.0;
  local_10[1] = 0.0;
  local_10[2] = -1.0;
  local_10[3] = *(float *)(*(int *)(param_1 + 0x658) + 0x4c);
  FUN_36118410(this,local_10);
  if (_DAT_3622376c < *(float *)(*(int *)(param_1 + 0x658) + 0x50)) {
    local_1c = 0;
    local_10[3] = -*(float *)(*(int *)(param_1 + 0x658) + 0x50);
    local_20 = 0.0;
    local_10[1] = 0.0;
    local_10[0] = 0.0;
    local_18 = 0x3f800000;
    local_10[2] = 1.0;
    FUN_36118410(this,local_10);
  }
  iVar1 = *(int *)(param_1 + 0x658);
  if ((*(int *)(iVar1 + 0x7c) != 0) || (*(int *)(iVar1 + 0x80) != 0)) {
    FUN_36118410(this,(float *)(iVar1 + 0x94));
  }
  return;
}

