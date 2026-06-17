
/* public: char const * __thiscall CDLLEntityClass::HandlerNameForState(long) */

char * __thiscall CDLLEntityClass::HandlerNameForState(CDLLEntityClass *this,long param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
                    /* 0x12fca0  2249  ?HandlerNameForState@CDLLEntityClass@@QAEPBDJ@Z */
    if (this == (CDLLEntityClass *)0x0) {
      return s_no_handler___36238440;
    }
    iVar1 = 0;
    if (0 < *(int *)(this + 0x14)) {
      piVar2 = *(int **)(this + 0x10);
      do {
        if (*piVar2 == param_1) {
          return *(char **)(iVar1 * 0x10 + 0xc + *(int *)(this + 0x10));
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 4;
      } while (iVar1 < *(int *)(this + 0x14));
    }
    this = *(CDLLEntityClass **)(this + 0x2c);
  } while( true );
}

