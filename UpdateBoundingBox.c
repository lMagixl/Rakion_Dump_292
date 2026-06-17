
/* public: void __thiscall CBrushMip::UpdateBoundingBox(void) */

void __thiscall CBrushMip::UpdateBoundingBox(CBrushMip *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x139400  3908  ?UpdateBoundingBox@CBrushMip@@QAEXXZ */
  puStack_8 = &LAB_362194d0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(this + 0x24) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x28) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x2c) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x30) = 0xff61b1e6;
  *(undefined4 *)(this + 0x34) = 0xff61b1e6;
  *(undefined4 *)(this + 0x38) = 0xff61b1e6;
  *(undefined4 *)(this + 0x3c) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x40) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x44) = 0x7f61b1e6;
  *(undefined4 *)(this + 0x48) = 0xff61b1e6;
  *(undefined4 *)(this + 0x4c) = 0xff61b1e6;
  iVar3 = 0;
  *(undefined4 *)(this + 0x50) = 0xff61b1e6;
  local_4 = 0;
  iVar1 = FUN_36043600((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_36043710(this,iVar3);
      FUN_360325c0((undefined4 *)(iVar1 + 0x90));
      iVar1 = FUN_36043710(this,iVar3);
      local_4._0_1_ = 1;
      if (0 < *(int *)(iVar1 + 0x18)) {
        iVar2 = 0;
        do {
          FUN_360325f0((undefined4 *)(iVar2 * 0x1d0 + 0x1b0 + *(int *)(iVar1 + 0x1c)));
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(iVar1 + 0x18));
      }
      local_4 = (uint)local_4._1_3_ << 8;
      iVar1 = FUN_36043710(this,iVar3);
      FUN_360b1850(this + 0x24,(float *)(iVar1 + 0x54));
      iVar1 = FUN_36043710(this,iVar3);
      FUN_360b1850(this + 0x3c,(float *)(iVar1 + 0x6c));
      iVar3 = iVar3 + 1;
      iVar1 = FUN_36043600((int)this);
    } while (iVar3 < iVar1);
  }
  iVar1 = *(int *)(*(int *)(this + 0x14) + 0x668);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x10) & 2) != 0)) {
    *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0x158) = 0;
  }
  ExceptionList = local_c;
  return;
}

