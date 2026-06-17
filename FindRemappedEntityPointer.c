
/* public: static class CEntity * __cdecl CEntity::FindRemappedEntityPointer(class CEntity *) */

CEntity * __cdecl CEntity::FindRemappedEntityPointer(CEntity *param_1)

{
  CEntity *pCVar1;
  
                    /* 0x131ad0  1638  ?FindRemappedEntityPointer@CEntity@@SAPAV1@PAV1@@Z */
  pCVar1 = (CEntity *)0x0;
  if (param_1 != (CEntity *)0x0) {
    if (0 < DAT_362fd43c) {
      do {
        if (*(CEntity **)(DAT_362fd440 + (int)pCVar1 * 8) == param_1) {
          return *(CEntity **)(DAT_362fd440 + 4 + (int)pCVar1 * 8);
        }
        pCVar1 = pCVar1 + 1;
      } while ((int)pCVar1 < DAT_362fd43c);
    }
    pCVar1 = (CEntity *)((DAT_362a6484 != 0) - 1 & (uint)param_1);
  }
  return pCVar1;
}

