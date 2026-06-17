
/* public: void __thiscall CSerial::MarkUnused(void) */

void __thiscall CSerial::MarkUnused(CSerial *this)

{
                    /* 0x37000  2628  ?MarkUnused@CSerial@@QAEXXZ */
  *(int *)(this + 8) = *(int *)(this + 8) + -1;
  return;
}

