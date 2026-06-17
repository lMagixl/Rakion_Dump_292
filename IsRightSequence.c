
/* public: int __thiscall CSessionState::IsRightSequence(unsigned char,unsigned long) */

int __thiscall CSessionState::IsRightSequence(CSessionState *this,uchar param_1,ulong param_2)

{
  int iVar1;
  
                    /* 0x10eaa0  2461  ?IsRightSequence@CSessionState@@QAEHEK@Z */
  if (param_1 < 0x15) {
    iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    if (iVar1 != 0) {
      if (*(uint *)((uint)param_1 * 0x37c + 500 + iVar1) < param_2) {
        *(ulong *)((uint)param_1 * 0x37c + 500 + iVar1) = param_2;
        return 1;
      }
    }
  }
  return 0;
}

