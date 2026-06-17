
/* public: __thiscall CRelationDst::~CRelationDst(void) */

void __thiscall CRelationDst::~CRelationDst(CRelationDst *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
                    /* 0x32620  467  ??1CRelationDst@@QAE@XZ */
  piVar3 = *(int **)this;
  while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
    piVar1 = piVar3 + -4;
    piVar3 = piVar2;
    if (piVar1 != (int *)0x0) {
      FUN_36032430((int)piVar1);
      operator_delete(piVar1);
    }
  }
  return;
}

