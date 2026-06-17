
/* public: void __thiscall CModelObject::PrevManualMipLevel(void) */

void __thiscall CModelObject::PrevManualMipLevel(CModelObject *this)

{
                    /* 0xb4b00  2827  ?PrevManualMipLevel@CModelObject@@QAEXXZ */
  if (0 < *(int *)(this + 0x1c)) {
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
    CChangeable::MarkChanged((CChangeable *)this);
    return;
  }
  return;
}

