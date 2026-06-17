
/* public: void __thiscall CDrawPort::Unlock_internal(void) */

void __thiscall CDrawPort::Unlock_internal(CDrawPort *this)

{
                    /* 0x64ba0  3882  ?Unlock_internal@CDrawPort@@QAEXXZ */
  (**(code **)(**(int **)this + 8))();
  CGfxLibrary::UnlockDrawPort(_pGfx,this);
  if (DAT_362bf980 == this) {
    DAT_362bf980 = (CDrawPort *)0x0;
  }
  return;
}

