
/* public: int __thiscall CDrawPort::IsWideScreen(void) */

int __thiscall CDrawPort::IsWideScreen(CDrawPort *this)

{
                    /* 0x64ae0  2509  ?IsWideScreen@CDrawPort@@QAEHXZ */
  return (uint)((*(int *)(this + 0x10) - *(int *)(this + 8)) * 9 +
                (*(int *)(this + 0x14) - *(int *)(this + 0xc)) * -0x10 == 0);
}

