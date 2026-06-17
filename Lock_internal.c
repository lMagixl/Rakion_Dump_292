
/* public: int __thiscall CDrawPort::Lock_internal(void) */

int __thiscall CDrawPort::Lock_internal(CDrawPort *this)

{
  int iVar1;
  
                    /* 0x64bd0  2571  ?Lock_internal@CDrawPort@@QAEHXZ */
  if (DAT_362bf980 != (CDrawPort *)0x0) {
    Unlock_internal(DAT_362bf980);
  }
  iVar1 = (**(code **)(**(int **)this + 4))();
  CGfxLibrary::LockDrawPort(_pGfx,this);
  DAT_362bf980 = this;
  return iVar1;
}

