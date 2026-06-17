
/* public: void __thiscall CTStream::UpdateMaxPos(void) */

void __thiscall CTStream::UpdateMaxPos(CTStream *this)

{
                    /* 0x2a80  3915  ?UpdateMaxPos@CTStream@@QAEXXZ */
  if (*(uint *)(this + 0x1c) < *(uint *)(this + 0x14)) {
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x14);
  }
  return;
}

