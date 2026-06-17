
/* public: void __thiscall CEditModel::AddCollisionBox(void) */

void __thiscall CEditModel::AddCollisionBox(CEditModel *this)

{
  int iVar1;
  
                    /* 0xad030  962  ?AddCollisionBox@CEditModel@@QAEXXZ */
  FUN_360b2280(this + 0x12a8,1);
  iVar1 = FUN_360b0e40((int)(this + 0x12a8));
  *(int *)(this + 0x14) = iVar1 + -1;
  return;
}

