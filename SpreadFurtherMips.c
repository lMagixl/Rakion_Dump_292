
/* public: void __thiscall CBrushMip::SpreadFurtherMips(void) */

void __thiscall CBrushMip::SpreadFurtherMips(CBrushMip *this)

{
  float fVar1;
  bool bVar2;
  int *piVar3;
  
                    /* 0x139380  3652  ?SpreadFurtherMips@CBrushMip@@QAEXXZ */
  fVar1 = *(float *)(this + 0x20);
  bVar2 = true;
  for (piVar3 = *(int **)(*(int *)(this + 0x14) + 0x674); *piVar3 != 0; piVar3 = (int *)*piVar3) {
    if (!bVar2) {
      fVar1 = fVar1 + fVar1;
      piVar3[2] = (int)fVar1;
    }
    if (this == (CBrushMip *)(piVar3 + -6)) {
      bVar2 = false;
    }
  }
  return;
}

