
/* public: int __thiscall CSerial::IsUsed(void) */

int __thiscall CSerial::IsUsed(CSerial *this)

{
                    /* 0x37010  2491  ?IsUsed@CSerial@@QAEHXZ */
  return (uint)(0 < *(int *)(this + 8));
}

