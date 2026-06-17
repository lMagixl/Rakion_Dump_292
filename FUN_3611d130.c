
void __thiscall FUN_3611d130(void *this,int param_1)

{
  CBrushMip *pCVar1;
  CBrush3D *this_00;
  float *pfVar2;
  CBrushMip *pCVar3;
  
  pCVar1 = *(CBrushMip **)(param_1 + 0x38);
  this_00 = *(CBrush3D **)(pCVar1 + 0x14);
  pfVar2 = *(float **)(this_00 + 0x668);
  if (pfVar2[1] != 1.12104e-44) {
    FUN_3611bd10(this,pfVar2);
    *(uint *)((int)pfVar2[0x1f] + 0x670) = *(uint *)((int)pfVar2[0x1f] + 0x670) | 2;
    pCVar3 = CBrush3D::GetFirstMip(this_00);
    if (pCVar3 == pCVar1) {
      FUN_3611c7e0(this,param_1);
      FUN_3611f130(this,param_1);
    }
  }
  return;
}

