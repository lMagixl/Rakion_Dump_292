
/* class CModelInstance * __cdecl ObtainModelInstance_t(class CTString const &) */

CModelInstance * __cdecl ObtainModelInstance_t(CTString *param_1)

{
  CModelInstance *pCVar1;
  
                    /* 0x15fad0  2695  ?ObtainModelInstance_t@@YAPAVCModelInstance@@ABVCTString@@@Z
                        */
  StringDuplicate(&DAT_3623cca2);
  pCVar1 = CreateModelInstance();
  ObtainModelInstance_t(pCVar1,param_1);
  return pCVar1;
}

