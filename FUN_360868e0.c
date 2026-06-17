
void FUN_360868e0(void)

{
  int iVar1;
  CShader *this;
  CStock_CShader *this_00;
  int iVar2;
  
  this_00 = _pShaderStock;
  if (_pShaderStock != (CStock_CShader *)0x0) {
    iVar1 = FUN_3608a4c0((int)_pShaderStock);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        this = (CShader *)FUN_3608a4d0(this_00,iVar2);
        CShader::DeleteHandles(this);
        iVar2 = iVar2 + 1;
        this_00 = _pShaderStock;
      } while (iVar2 < iVar1);
    }
  }
  FUN_3617d8f0();
  return;
}

