
/* public: void __thiscall CEditModel::ActivatePreviousCollisionBox(void) */

void __thiscall CEditModel::ActivatePreviousCollisionBox(CEditModel *this)

{
                    /* 0xa9200  942  ?ActivatePreviousCollisionBox@CEditModel@@QAEXXZ */
  if (*(int *)(this + 0x14) != 0) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  }
  return;
}

