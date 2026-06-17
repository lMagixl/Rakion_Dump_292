
/* public: __thiscall CDrawPort::~CDrawPort(void) */

void __thiscall CDrawPort::~CDrawPort(CDrawPort *this)

{
                    /* 0x656a0  410  ??1CDrawPort@@QAE@XZ */
  if (DAT_362bf980 == this) {
    Unlock_internal(this);
    return;
  }
  return;
}

