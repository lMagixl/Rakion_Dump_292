
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * __thiscall FUN_36143570(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_36219a04;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(int **)((int)this + 0x18) = param_1;
  *(int **)((int)this + 0x1c) = param_1 + 1;
  FUN_36143880((CListHead *)((int)this + 0x20));
  local_c = 0;
  FUN_361438f0((CListHead *)((int)this + 0xec));
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0x10;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x34) = 0xffffffff;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  iVar1 = *param_1;
  *(undefined4 *)this = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(iVar1 + 0x30);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(iVar1 + 0x3c);
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_361433f0((int)this);
  *(undefined4 *)((int)this + 0x118) = 0xffffffff;
  iVar1 = FUN_3600be20(*(undefined4 **)((int)this + 0x1c));
  DAT_362fd974 = 0;
  DAT_362fd970 = 0;
  local_24 = 0;
  iVar2 = FUN_361438e0((int)this + 0x20);
  if (0 < iVar2) {
    iVar1 = (iVar1 * 3 + -2) * 2;
    do {
      iVar2 = FUN_36143930((int)this + 0xec);
      if ((iVar1 < iVar2 / 3) || (iVar1 < local_24)) {
        *(undefined4 *)((int)this + 0x118) = 2;
        ExceptionList = local_14;
        return this;
      }
      FUN_36142f40(this);
      if (*(double *)((int)this + 0xd0) < _DAT_36227d98) {
        *(undefined4 *)((int)this + 0x118) = 1;
        ExceptionList = local_14;
        return this;
      }
      if (*(int *)((int)this + 0xd8) != 0) {
        *(undefined4 *)((int)this + 0x118) = 3;
        ExceptionList = local_14;
        return this;
      }
      if (_DAT_36227d98 < *(double *)((int)this + 0xd0)) {
        FUN_36143480((int)this);
      }
      FUN_361434c0(this);
      local_24 = local_24 + 1;
      iVar2 = FUN_361438e0((int)this + 0x20);
    } while (0 < iVar2);
  }
  *(undefined4 *)((int)this + 0x118) = 0;
  ExceptionList = local_14;
  return this;
}

