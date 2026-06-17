
/* public: void __thiscall CSerial::MarkUsed(void) */

void __thiscall CSerial::MarkUsed(CSerial *this)

{
                    /* 0x36ff0  2631  ?MarkUsed@CSerial@@QAEXXZ */
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

