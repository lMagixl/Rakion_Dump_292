
/* public: void __thiscall CBrushMip::RemoveDummyPortals(int) */

void __thiscall CBrushMip::RemoveDummyPortals(CBrushMip *this,int param_1)

{
  uint uVar1;
  int iVar2;
  CRelationDst *pCVar3;
  int iVar4;
  int *piVar5;
  int local_1c;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x139830  3131  ?RemoveDummyPortals@CBrushMip@@QAEXH@Z */
  puStack_8 = &LAB_362194fc;
  local_c = ExceptionList;
  local_14 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar2 = FUN_36043600((int)this);
  if (0 < iVar2) {
    do {
      iVar2 = FUN_36043710(this,local_14);
      local_1c = 0;
      local_4._0_1_ = 1;
      if (0 < *(int *)(iVar2 + 0x18)) {
        do {
          iVar4 = local_1c * 0x1d0 + *(int *)(iVar2 + 0x1c);
          if ((*(byte *)(local_1c * 0x1d0 + 200 + *(int *)(iVar2 + 0x1c)) & 1) != 0) {
            for (piVar5 = *(int **)(iVar4 + 0x1b0); *piVar5 != 0; piVar5 = (int *)*piVar5) {
              pCVar3 = CRelationLnk::GetDst((CRelationLnk *)(piVar5 + -2));
              if (*(CBrushMip **)(pCVar3 + -0x58) == this) goto LAB_36139934;
            }
            uVar1 = *(uint *)(iVar4 + 200);
            *(uint *)(iVar4 + 200) = uVar1 & 0xfffffffe;
            if (param_1 != 0) {
              *(uint *)(iVar4 + 200) = uVar1 & 0xffbff7fe;
            }
            *(undefined1 *)(iVar4 + 0x4d) = 0;
            *(undefined1 *)(iVar4 + 0x18a) = 1;
            FUN_360325f0((undefined4 *)(iVar4 + 0x1b0));
            *(undefined4 *)(*(int *)(*(int *)(*(int *)(this + 0x14) + 0x668) + 0xa8) + 0x158) = 0;
          }
LAB_36139934:
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(iVar2 + 0x18));
      }
      local_14 = local_14 + 1;
      local_4 = (uint)local_4._1_3_ << 8;
      iVar2 = FUN_36043600((int)this);
    } while (local_14 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

