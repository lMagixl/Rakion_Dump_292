
/* public: void __thiscall CAnimObject::NextFrame(void) */

void __thiscall CAnimObject::NextFrame(CAnimObject *this)

{
                    /* 0x200f0  2674  ?NextFrame@CAnimObject@@QAEXXZ */
  *(float *)(this + 4) =
       *(float *)(*(int *)(this + 8) * 0x2c + 0x20 + *(int *)(*(int *)(this + 0x14) + 0x18)) +
       *(float *)(this + 4);
  CChangeable::MarkChanged((CChangeable *)this);
  return;
}

