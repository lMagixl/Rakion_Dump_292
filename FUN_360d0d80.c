
void __fastcall FUN_360d0d80(void *param_1)

{
  int *piVar1;
  CBrushMip *this;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214b60;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = CBrush3D::GetFirstMip(*(CBrush3D **)(*(int *)((int)param_1 + 0xc) + 0x7c));
  iVar5 = 0;
  local_4 = 0;
  iVar2 = FUN_36043600((int)this);
  if (0 < iVar2) {
    do {
      fVar6 = 0.01;
      iVar2 = (int)param_1 + 0x1a8;
      iVar3 = FUN_36043710(this,iVar5);
      iVar2 = FUN_360cd6d0((void *)(iVar3 + 0x54),iVar2,fVar6);
      if (iVar2 != 0) {
        iVar2 = FUN_36043710(this,iVar5);
        iVar3 = 0;
        local_4._0_1_ = 1;
        if (0 < *(int *)(iVar2 + 0x18)) {
          do {
            piVar1 = (int *)(iVar3 * 0x1d0 + *(int *)(iVar2 + 0x1c));
            if (((*(uint *)(iVar3 * 0x1d0 + 200 + *(int *)(iVar2 + 0x1c)) & 0x800) == 0) &&
               (iVar4 = FUN_360cd6d0(piVar1 + 0x65,(int)param_1 + 0x1a8,0.01), iVar4 != 0)) {
              FUN_360d0bb0(param_1,piVar1);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar2 + 0x18));
        }
        local_4 = (uint)local_4._1_3_ << 8;
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_36043600((int)this);
    } while (iVar5 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

