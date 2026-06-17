
/* public: void __thiscall CRationalEntity::SetTimerAfter(float) */

void __thiscall CRationalEntity::SetTimerAfter(CRationalEntity *this,float param_1)

{
                    /* 0x1270b0  3615  ?SetTimerAfter@CRationalEntity@@QAEXM@Z */
  SetTimerAt(this,param_1 + *(float *)(_pTimer + 0xc));
  return;
}

