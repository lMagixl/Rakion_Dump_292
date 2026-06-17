
/* public: void __thiscall CModelObject::AutoMipModelingOn(void) */

void __thiscall CModelObject::AutoMipModelingOn(CModelObject *this)

{
                    /* 0xb4ac0  1071  ?AutoMipModelingOn@CModelObject@@QAEXXZ */
  *(undefined4 *)(this + 0x20) = 1;
  CChangeable::MarkChanged((CChangeable *)this);
  return;
}

