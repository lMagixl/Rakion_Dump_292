
/* public: long __thiscall CBrushMip::GetMipIndex(void) */

long __thiscall CBrushMip::GetMipIndex(CBrushMip *this)

{
  int iVar1;
  int *piVar2;
  CBrushMip *pCVar3;
  
                    /* 0x1393d0  1979  ?GetMipIndex@CBrushMip@@QAEJXZ */
  iVar1 = 0;
  piVar2 = *(int **)(*(int *)(this + 0x14) + 0x674);
  do {
    if ((int *)*piVar2 == (int *)0x0) {
      return 1;
    }
    pCVar3 = (CBrushMip *)(piVar2 + -6);
    iVar1 = iVar1 + 1;
    piVar2 = (int *)*piVar2;
  } while (this != pCVar3);
  return iVar1;
}

