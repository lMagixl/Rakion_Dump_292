
/* public: void __thiscall CAnimObject::SelectFrameInTime(float) */

void __thiscall CAnimObject::SelectFrameInTime(CAnimObject *this,float param_1)

{
                    /* 0x200a0  3222  ?SelectFrameInTime@CAnimObject@@QAEXM@Z */
  *(float *)(this + 4) = param_1;
  CChangeable::MarkChanged((CChangeable *)this);
  return;
}

