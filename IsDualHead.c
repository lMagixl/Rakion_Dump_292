
/* public: int __thiscall CDrawPort::IsDualHead(void) */

int __thiscall CDrawPort::IsDualHead(CDrawPort *this)

{
                    /* 0x64a90  2385  ?IsDualHead@CDrawPort@@QAEHXZ */
  return (uint)((*(int *)(this + 0x10) - *(int *)(this + 8)) * 3 +
                (*(int *)(this + 0x14) - *(int *)(this + 0xc)) * -8 == 0);
}

