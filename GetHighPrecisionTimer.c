
/* public: class CTimerValue __thiscall CTimer::GetHighPrecisionTimer(void) */

void __thiscall CTimer::GetHighPrecisionTimer(CTimer *this)

{
  undefined8 uVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x13e0  1916  ?GetHighPrecisionTimer@CTimer@@QAE?AVCTimerValue@@XZ */
  uVar1 = rdtsc();
  *in_stack_00000004 = (int)uVar1;
  in_stack_00000004[1] = (int)((ulonglong)uVar1 >> 0x20);
  return;
}

