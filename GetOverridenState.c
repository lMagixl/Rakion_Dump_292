
/* public: long __thiscall CDLLEntityClass::GetOverridenState(long) */

long __thiscall CDLLEntityClass::GetOverridenState(CDLLEntityClass *this,long param_1)

{
  int *piVar1;
  CDLLEntityClass *pCVar2;
  int iVar3;
  
                    /* 0x12fcf0  2027  ?GetOverridenState@CDLLEntityClass@@QAEJJ@Z */
  pCVar2 = this;
LAB_3612fd00:
  do {
    if (pCVar2 == (CDLLEntityClass *)0x0) {
      return param_1;
    }
    iVar3 = 0;
    if (0 < *(int *)(pCVar2 + 0x14)) {
      piVar1 = (int *)(*(int *)(pCVar2 + 0x10) + 4);
      do {
        if ((-1 < *piVar1) && (*piVar1 == param_1)) {
          param_1 = *(long *)(iVar3 * 0x10 + *(int *)(pCVar2 + 0x10));
          pCVar2 = this;
          goto LAB_3612fd00;
        }
        iVar3 = iVar3 + 1;
        piVar1 = piVar1 + 4;
      } while (iVar3 < *(int *)(pCVar2 + 0x14));
    }
    pCVar2 = *(CDLLEntityClass **)(pCVar2 + 0x2c);
  } while( true );
}

