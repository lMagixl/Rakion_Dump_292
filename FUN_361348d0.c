
void __fastcall FUN_361348d0(CBrush3D *param_1)

{
  CBrushMip *this;
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219058;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = CBrush3D::GetFirstMip(param_1);
  iVar2 = 0;
  if (this != (CBrushMip *)0x0) {
    local_4 = 0;
    iVar1 = FUN_36043600((int)this);
    if (0 < iVar1) {
      do {
        FUN_36043710(this,iVar2);
        FUN_36134860();
        iVar2 = iVar2 + 1;
        iVar1 = FUN_36043600((int)this);
      } while (iVar2 < iVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

