
/* public: void __thiscall CModelObject::AutoMipModelingOff(void) */

void __thiscall CModelObject::AutoMipModelingOff(CModelObject *this)

{
                    /* 0xb4ad0  1070  ?AutoMipModelingOff@CModelObject@@QAEXXZ */
  *(undefined4 *)(this + 0x20) = 0;
  CChangeable::MarkChanged((CChangeable *)this);
  return;
}

