
/* public: float const __thiscall CTimer::GetLerpedCurrentTick(void)const  */

float __thiscall CTimer::GetLerpedCurrentTick(CTimer *this)

{
                    /* 0x13c0  1938  ?GetLerpedCurrentTick@CTimer@@QBE?BMXZ */
  return TickQuantum * *(float *)(this + 0x10) + *(float *)(this + 0xc);
}

