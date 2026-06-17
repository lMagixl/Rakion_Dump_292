
/* public: void __thiscall CEntity::NotifyGravityChanged(void) */

void __thiscall CEntity::NotifyGravityChanged(CEntity *this)

{
  int iVar1;
  int *piVar2;
  CBrushMip *this_00;
  int iVar3;
  CEntity *pCVar4;
  CRelationDst *pCVar5;
  int iVar6;
  void *this_01;
  int *piVar7;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x128db0  2679  ?NotifyGravityChanged@CEntity@@QAEXXZ */
  puStack_8 = &LAB_362189de;
  local_c = ExceptionList;
  this_01 = (void *)(*(int *)(this + 0xa8) + 0x15c);
  local_1c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_01);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_360cafb0(this_01,local_1c);
      iVar1 = FUN_360cafb0(this_01,local_1c);
      if ((*(int *)(iVar1 + 4) == 4) &&
         (iVar1 = FUN_360cafb0(this_01,local_1c), (*(byte *)(iVar1 + 0x10) & 2) != 0)) {
        this_00 = CBrush3D::GetFirstMip((CBrush3D *)piVar2[0x1f]);
        iVar6 = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
        iVar1 = FUN_36043600((int)this_00);
        if (0 < iVar1) {
          do {
            iVar1 = *piVar2;
            iVar3 = FUN_36043710(this_00,iVar6);
            pCVar4 = (CEntity *)(**(code **)(iVar1 + 0xb4))(*(undefined1 *)(iVar3 + 0x46));
            if (pCVar4 == this) {
              iVar1 = FUN_36043710(this_00,iVar6);
              for (piVar7 = *(int **)(iVar1 + 0x9c); *piVar7 != 0; piVar7 = (int *)*piVar7) {
                pCVar5 = CRelationLnk::GetDst((CRelationLnk *)(piVar7 + -2));
                if ((*(uint *)(pCVar5 + -0xa4) & 0x200) != 0) {
                  CMovableEntity::AddToMovers((CMovableEntity *)(pCVar5 + -0xac));
                }
              }
            }
            iVar6 = iVar6 + 1;
            iVar1 = FUN_36043600((int)this_00);
          } while (iVar6 < iVar1);
        }
        local_4 = local_4 & 0xffffff00;
      }
      local_1c = local_1c + 1;
      iVar1 = FUN_360caf20((int)this_01);
    } while (local_1c < iVar1);
  }
  ExceptionList = local_c;
  return;
}

