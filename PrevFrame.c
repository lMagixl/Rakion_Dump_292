
/* public: void __thiscall CAnimObject::PrevFrame(void) */

void __thiscall CAnimObject::PrevFrame(CAnimObject *this)

{
                    /* 0x20110  2826  ?PrevFrame@CAnimObject@@QAEXXZ */
  *(float *)(this + 4) =
       *(float *)(this + 4) -
       *(float *)(*(int *)(this + 8) * 0x2c + 0x20 + *(int *)(*(int *)(this + 0x14) + 0x18));
  CChangeable::MarkChanged((CChangeable *)this);
  return;
}

