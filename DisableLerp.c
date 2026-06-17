
/* public: void __thiscall CTimer::DisableLerp(void) */

void __thiscall CTimer::DisableLerp(CTimer *this)

{
                    /* 0x44dd0  1504  ?DisableLerp@CTimer@@QAEXXZ */
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  return;
}

