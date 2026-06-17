
/* public: class CBrushMip * __thiscall CBrush3D::GetBrushMipByIndex(long) */

CBrushMip * __thiscall CBrush3D::GetBrushMipByIndex(CBrush3D *this,long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x135970  1743  ?GetBrushMipByIndex@CBrush3D@@QAEPAVCBrushMip@@J@Z */
  iVar3 = 0;
  piVar1 = *(int **)(this + 0x674);
  do {
    piVar2 = piVar1;
    piVar1 = (int *)*piVar2;
    if (piVar1 == (int *)0x0) {
      return (CBrushMip *)0x0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != param_1);
  return (CBrushMip *)(piVar2 + -6);
}

