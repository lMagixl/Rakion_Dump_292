
/* public: void __thiscall CEntityClass::AddReference(void) */

void __thiscall CEntityClass::AddReference(CEntityClass *this)

{
                    /* 0x12f560  1000  ?AddReference@CEntityClass@@QAEXXZ */
  if (this != (CEntityClass *)0x0) {
    CSerial::MarkUsed((CSerial *)this);
    return;
  }
  return;
}

