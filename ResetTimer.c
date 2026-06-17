
/* public: void __thiscall CSoundObject::ResetTimer(long) */

void __thiscall CSoundObject::ResetTimer(CSoundObject *this,long param_1)

{
  longlong *plVar1;
  CSoundObject *pCVar2;
  
                    /* 0xa2d60  3167  ?ResetTimer@CSoundObject@@QAEXJ@Z */
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
    *(double *)pCVar2 = (double)*plVar1 / (double)*(longlong *)_pTimer;
    return;
  }
  *(double *)pCVar2 =
       (double)(CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc));
  return;
}

