
/* public: int __thiscall CDrawPort::IsTripleHead(void) */

int __thiscall CDrawPort::IsTripleHead(CDrawPort *this)

{
                    /* 0x64ab0  2485  ?IsTripleHead@CDrawPort@@QAEHXZ */
  return (uint)((*(int *)(this + 0x10) - *(int *)(this + 8)) * 3 +
                (*(int *)(this + 0x14) - *(int *)(this + 0xc)) * -0xc == 0);
}

