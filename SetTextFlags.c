
/* public: void __thiscall CDrawPort::SetTextFlags(unsigned long) */

void __thiscall CDrawPort::SetTextFlags(CDrawPort *this,ulong param_1)

{
                    /* 0x27b10  3606  ?SetTextFlags@CDrawPort@@QAEXK@Z */
  *(ulong *)(this + 0x3c) = param_1;
  return;
}

