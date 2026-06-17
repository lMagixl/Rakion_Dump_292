
/* public: void __thiscall CBrushSector::UpdateSector(void) */

void __thiscall CBrushSector::UpdateSector(CBrushSector *this)

{
  int iVar1;
  int iVar2;
  CSimpleProjection3D_DOUBLE local_e8 [232];
  
                    /* 0x13e2f0  3923  ?UpdateSector@CBrushSector@@QAEXXZ */
  CSimpleProjection3D_DOUBLE::CSimpleProjection3D_DOUBLE(local_e8);
  CBrush3D::PrepareRelativeToAbsoluteProjection
            (*(CBrush3D **)(*(int *)(this + 0x38) + 0x14),local_e8);
  CalculateBoundingBoxes(this,local_e8);
  CalculateVolume(this);
  iVar1 = FUN_360d69b0((undefined4 *)(this + 0x18));
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      CBrushPolygon::InitializeShadowMap((CBrushPolygon *)(*(int *)(this + 0x1c) + iVar2));
      iVar2 = iVar2 + 0x1d0;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FindEntitiesInSector(this);
  return;
}

