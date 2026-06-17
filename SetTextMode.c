
/* public: void __thiscall CDrawPort::SetTextMode(long) */

void __thiscall CDrawPort::SetTextMode(CDrawPort *this,long param_1)

{
  uint uVar1;
  
                    /* 0x27b20  3608  ?SetTextMode@CDrawPort@@QAEXJ@Z */
  uVar1 = *(uint *)(this + 0x3c) & 0xfffff3ff;
  *(uint *)(this + 0x3c) = uVar1;
  if (param_1 < 0) {
    *(uint *)(this + 0x3c) = uVar1 | 0x400;
    return;
  }
  if (param_1 == 0) {
    *(uint *)(this + 0x3c) = uVar1 | 0x800;
  }
  return;
}

