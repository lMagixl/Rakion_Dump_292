
/* public: void __thiscall CWorld::AdjustLateTimers(float) */

void __thiscall CWorld::AdjustLateTimers(CWorld *this,float param_1)

{
  int *piVar1;
  
                    /* 0xc8240  1045  ?AdjustLateTimers@CWorld@@QAEXM@Z */
  for (piVar1 = *(int **)(this + 0x134); *piVar1 != 0; piVar1 = (int *)*piVar1) {
    if ((float)piVar1[2] < param_1) {
      piVar1[2] = (int)param_1;
    }
  }
  return;
}

