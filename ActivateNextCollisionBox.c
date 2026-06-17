
/* public: void __thiscall CEditModel::ActivateNextCollisionBox(void) */

void __thiscall CEditModel::ActivateNextCollisionBox(CEditModel *this)

{
  int iVar1;
  int iVar2;
  
                    /* 0xa9210  941  ?ActivateNextCollisionBox@CEditModel@@QAEXXZ */
  iVar1 = *(int *)(this + 0x14);
  iVar2 = FUN_360b0e40((int)(this + 0x12a8));
  if (iVar1 != iVar2 + -1) {
    *(int *)(this + 0x14) = iVar1 + 1;
  }
  return;
}

