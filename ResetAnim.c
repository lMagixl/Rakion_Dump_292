
/* public: void __thiscall CAnimObject::ResetAnim(void) */

void __thiscall CAnimObject::ResetAnim(CAnimObject *this)

{
                    /* 0x20180  3160  ?ResetAnim@CAnimObject@@QAEXXZ */
  if (*(int *)(this + 0x14) != 0) {
    *(undefined4 *)(this + 4) = *(undefined4 *)(_pTimer + 0xc);
    CChangeable::MarkChanged((CChangeable *)this);
    return;
  }
  return;
}

