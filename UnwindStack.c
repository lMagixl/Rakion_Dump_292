
/* public: void __thiscall CRationalEntity::UnwindStack(long) */

void __thiscall CRationalEntity::UnwindStack(CRationalEntity *this,long param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x1296d0  3898  ?UnwindStack@CRationalEntity@@QAEXJ@Z */
  iVar1 = FUN_36026a70((int)(this + 0x110));
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    piVar2 = (int *)(*(int *)(this + 0x114) + iVar1 * 4);
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + -1;
      piVar2 = piVar2 + -1;
      if (iVar1 < 0) {
        return;
      }
    }
    *(int *)(this + 0x118) = iVar1 + 1;
  }
  return;
}

