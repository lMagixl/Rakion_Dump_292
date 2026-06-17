
/* public: void __thiscall CModelObject::SetManualMipLevel(long) */

void __thiscall CModelObject::SetManualMipLevel(CModelObject *this,long param_1)

{
                    /* 0xb4af0  3507  ?SetManualMipLevel@CModelObject@@QAEXJ@Z */
  *(long *)(this + 0x1c) = param_1;
  CChangeable::MarkChanged((CChangeable *)this);
  return;
}

