
/* public: void __thiscall CAnimObject::PauseAnim(void) */

void __thiscall CAnimObject::PauseAnim(CAnimObject *this)

{
                    /* 0x1ff90  2760  ?PauseAnim@CAnimObject@@QAEXXZ */
  if ((*(uint *)(this + 0xc) & 1) == 0) {
    *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 1;
    *(float *)(this + 4) = *(float *)(_pTimer + 0xc) - *(float *)(this + 4);
    CChangeable::MarkChanged((CChangeable *)this);
    return;
  }
  return;
}

