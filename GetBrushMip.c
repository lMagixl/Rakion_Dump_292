
/* public: class CBrushMip * __thiscall CWorld::GetBrushMip(class CEntity &) */

CBrushMip * __thiscall CWorld::GetBrushMip(CWorld *this,CEntity *param_1)

{
  CBrushMip *pCVar1;
  
                    /* 0xd3940  1741  ?GetBrushMip@CWorld@@QAEPAVCBrushMip@@AAVCEntity@@@Z */
  pCVar1 = CBrush3D::GetBrushMipByDistance(*(CBrush3D **)(param_1 + 0x7c),DAT_362fcba4);
  return pCVar1;
}

