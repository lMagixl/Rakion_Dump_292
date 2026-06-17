
/* public: void __thiscall CEditModel::EditRemoveAllPatches(void) */

void __thiscall CEditModel::EditRemoveAllPatches(CEditModel *this)

{
  CEditModel *this_00;
  int iVar1;
  
                    /* 0xaf420  1551  ?EditRemoveAllPatches@CEditModel@@QAEXXZ */
  this_00 = this + 0xcfc;
  iVar1 = 0x20;
  do {
    CAnimObject::SetData((CAnimObject *)this_00,(CAnimData *)0x0);
    this_00 = this_00 + 0x28;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  CalculatePatchesPerPolygon(this);
  return;
}

