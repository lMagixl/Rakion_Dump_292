
/* public: void __thiscall CEditModel::DeleteCurrentCollisionBox(void) */

void __thiscall CEditModel::DeleteCurrentCollisionBox(CEditModel *this)

{
  CEditModel *this_00;
  int iVar1;
  int iVar2;
  
                    /* 0xac3b0  1465  ?DeleteCurrentCollisionBox@CEditModel@@QAEXXZ */
  this_00 = this + 0x12a8;
  iVar1 = FUN_360b0e40((int)this_00);
  if (iVar1 != 1) {
    iVar2 = FUN_360b0e00(this_00,*(int *)(this + 0x14));
    FUN_360b1ab0(this_00,iVar2);
    if (*(int *)(this + 0x14) == iVar1 + -1) {
      *(int *)(this + 0x14) = iVar1 + -2;
    }
  }
  return;
}

