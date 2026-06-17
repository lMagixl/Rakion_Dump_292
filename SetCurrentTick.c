
/* public: void __thiscall CTimer::SetCurrentTick(float) */

void __thiscall CTimer::SetCurrentTick(CTimer *this,float param_1)

{
                    /* 0x13a0  3423  ?SetCurrentTick@CTimer@@QAEXM@Z */
  *(float *)(this + 0xc) = param_1;
  return;
}

