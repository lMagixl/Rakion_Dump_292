
/* int __cdecl IsDerivedFromClass(class CEntity *,class CDLLEntityClass *) */

int __cdecl IsDerivedFromClass(CEntity *param_1,CDLLEntityClass *param_2)

{
  CDLLEntityClass *pCVar1;
  
                    /* 0x124640  2380  ?IsDerivedFromClass@@YAHPAVCEntity@@PAVCDLLEntityClass@@@Z */
  if (param_1 != (CEntity *)0x0) {
    for (pCVar1 = *(CDLLEntityClass **)(*(int *)(param_1 + 0x78) + 0x20);
        pCVar1 != (CDLLEntityClass *)0x0; pCVar1 = *(CDLLEntityClass **)(pCVar1 + 0x2c)) {
      if (pCVar1 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}

