
/* public: float __thiscall CSessionState::GetRealTimeFactor(void) */

float __thiscall CSessionState::GetRealTimeFactor(CSessionState *this)

{
                    /* 0x10e710  2070  ?GetRealTimeFactor@CSessionState@@QAEMXZ */
  return *(float *)(*(int *)(_pNetwork + 0x24) + 0x8c) * *(float *)(_pNetwork + 0x135c);
}

