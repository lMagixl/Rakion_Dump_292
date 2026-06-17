
/* public: long __thiscall CSessionState::UpdateLocalTime(void) */

long __thiscall CSessionState::UpdateLocalTime(CSessionState *this)

{
  DWORD DVar1;
  float10 extraout_ST0;
  float10 fVar2;
  float10 extraout_ST1;
  ulonglong uVar3;
  float fVar4;
  
                    /* 0x10e7f0  3912  ?UpdateLocalTime@CSessionState@@QAEJXZ */
  if (*(int *)(this + 0x14) == 0) {
    DVar1 = timeGetTime();
    *(DWORD *)(this + 0x18) = DVar1;
    *(undefined4 *)(this + 0x14) = 1;
  }
  fVar4 = GetPassedTimeFrom(this,(ulong *)(this + 0x18));
  *(double *)(this + 0x20) = (double)(fVar4 + (float)*(double *)(this + 0x20));
  uVar3 = FUN_361bfd6c();
  fVar2 = (float10)(int)uVar3;
  *(float *)(this + 0x28) =
       (float)((float10)CTimer::TickQuantum * fVar2 + (float10)*(float *)(this + 0x28));
  *(double *)(this + 0x20) = (double)(extraout_ST1 - (float10)CTimer::TickQuantum * fVar2);
  *(undefined4 *)(_pTimer + 0xc) = *(undefined4 *)(this + 0x28);
  CTimer::SetLerp(_pTimer,(float)(extraout_ST0 - fVar2));
  return (int)uVar3;
}

