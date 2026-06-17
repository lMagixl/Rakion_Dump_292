
/* public: float __thiscall CSoundObject::GetElapsedTime(long) */

float __thiscall CSoundObject::GetElapsedTime(CSoundObject *this,long param_1)

{
  longlong *plVar1;
  CSoundObject *pCVar2;
  
                    /* 0xa2dc0  1849  ?GetElapsedTime@CSoundObject@@QAEMJ@Z */
  if (param_1 == 1) {
    pCVar2 = this + 0x18;
  }
  else if (param_1 == 2) {
    pCVar2 = this + 0x20;
  }
  else {
    pCVar2 = this + 0x10;
  }
  if (((byte)this[0x2c] & 0x20) != 0) {
    plVar1 = (longlong *)CTimer::GetHighPrecisionTimer(_pTimer);
    return (float)((float10)*plVar1 / (float10)*(longlong *)_pTimer - (float10)*(double *)pCVar2);
  }
  return (CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc)) -
         (float)*(double *)pCVar2;
}

