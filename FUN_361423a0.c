
undefined4 __thiscall FUN_361423a0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *param_1;
  iVar1 = param_1[1];
  local_18 = *(undefined4 *)(iVar2 + 0x20);
  local_14 = *(undefined4 *)(iVar2 + 0x24);
  local_10 = *(undefined4 *)(iVar2 + 0x28);
  local_c = *(undefined4 *)(iVar2 + 0x2c);
  local_8 = *(undefined4 *)(iVar2 + 0x30);
  local_4 = *(undefined4 *)(iVar2 + 0x34);
  local_30 = *(undefined4 *)(iVar1 + 0x20);
  local_2c = *(undefined4 *)(iVar1 + 0x24);
  local_28 = *(undefined4 *)(iVar1 + 0x28);
  local_24 = *(undefined4 *)(iVar1 + 0x2c);
  local_20 = *(undefined4 *)(iVar1 + 0x30);
  local_1c = *(undefined4 *)(iVar1 + 0x34);
  iVar2 = FUN_36141f70((double *)&local_18,(double *)&local_30,(double *)((int)this + 0x50));
  if (iVar2 != 0) {
    iVar2 = FUN_36141f70((double *)&local_18,(double *)&local_30,(double *)((int)this + 0x70));
    if (iVar2 != 0) {
      iVar2 = FUN_36141f70((double *)&local_18,(double *)&local_30,(double *)((int)this + 0x90));
      if (iVar2 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

