
/* public: class CBrushMip * __thiscall CBrush3D::GetBrushMipByDistance(float) */

CBrushMip * __thiscall CBrush3D::GetBrushMipByDistance(CBrush3D *this,float param_1)

{
  int iVar1;
  CBrushMip *pCVar2;
  
                    /* 0x135930  1742  ?GetBrushMipByDistance@CBrush3D@@QAEPAVCBrushMip@@M@Z */
  pCVar2 = (CBrushMip *)0x0;
  iVar1 = *(int *)(this + 0x67c);
  while ((*(int *)(iVar1 + 4) != 0 && (param_1 <= *(float *)(iVar1 + 8)))) {
    pCVar2 = (CBrushMip *)(iVar1 + -0x18);
    iVar1 = *(int *)(iVar1 + 4);
  }
  return pCVar2;
}

