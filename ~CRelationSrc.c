
/* public: __thiscall CRelationSrc::~CRelationSrc(void) */

void __thiscall CRelationSrc::~CRelationSrc(CRelationSrc *this)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
                    /* 0x32630  468  ??1CRelationSrc@@QAE@XZ */
  piVar3 = *(int **)this;
  while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
    piVar1 = piVar3 + -2;
    piVar3 = piVar2;
    if (piVar1 != (int *)0x0) {
      FUN_36032430((int)piVar1);
      operator_delete(piVar1);
    }
  }
  return;
}

