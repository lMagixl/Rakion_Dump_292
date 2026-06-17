
/* public: void __thiscall CEntityClass::RemReference(void) */

void __thiscall CEntityClass::RemReference(CEntityClass *this)

{
                    /* 0x12f570  3106  ?RemReference@CEntityClass@@QAEXXZ */
  if (this != (CEntityClass *)0x0) {
    CStock_CEntityClass::Release(_pEntityClassStock,this);
  }
  return;
}

