
/* public: void __thiscall CBrush3D::SwitchToZoning(void) */

void __thiscall CBrush3D::SwitchToZoning(CBrush3D *this)

{
  int *this_00;
  int iVar1;
  CBrushSector *this_01;
  int *piVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x135d10  3711  ?SwitchToZoning@CBrush3D@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219253;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CalculateBoundingBoxes(this);
  for (piVar2 = *(int **)(this + 0x674); *piVar2 != 0; piVar2 = (int *)*piVar2) {
    this_00 = piVar2 + -6;
    iVar3 = 0;
    local_4 = 0;
    iVar1 = FUN_36043600((int)this_00);
    if (0 < iVar1) {
      do {
        this_01 = (CBrushSector *)FUN_36043710(this_00,iVar3);
        CBrushSector::FindEntitiesInSector(this_01);
        iVar3 = iVar3 + 1;
        iVar1 = FUN_36043600((int)this_00);
      } while (iVar3 < iVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

