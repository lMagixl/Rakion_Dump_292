
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3609b490(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  
  iVar1 = *(int *)this;
  DAT_362c9c7c = *(undefined4 *)(iVar1 + 0x74);
  DAT_362c9c70 = *(undefined4 *)(iVar1 + 0x6c);
  _DAT_362c9c6c = *(undefined4 *)(iVar1 + 0x70);
  DAT_362c9c80 = iVar1;
  bVar2 = FUN_36098750((int)this);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    DAT_362c9c78 = param_2;
    DAT_362c9c74 = param_3;
    DAT_362c9c64 = param_1;
    FUN_36099f90();
    return;
  }
  DAT_362c9c78 = *(int *)(iVar1 + 0x20) >> ((byte)param_1 & 0x1f);
  DAT_362c9c74 = *(int *)(iVar1 + 0x24) >> ((byte)param_1 & 0x1f);
  FUN_3609b370();
  return;
}

