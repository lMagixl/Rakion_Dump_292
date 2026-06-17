
/* public: char const * __thiscall CEntityPropertyEnumType::NameForValue(long) */

char * __thiscall CEntityPropertyEnumType::NameForValue(CEntityPropertyEnumType *this,long param_1)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x12f820  2662  ?NameForValue@CEntityPropertyEnumType@@QAEPBDJ@Z */
  iVar1 = 0;
  if (0 < *(int *)(this + 4)) {
    piVar2 = *(int **)this;
    do {
      if (*piVar2 == param_1) {
        return (char *)(*(int **)this)[iVar1 * 2 + 1];
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(this + 4));
  }
  return &DAT_3623842d;
}

