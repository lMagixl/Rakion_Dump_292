
/* public: void __thiscall CModelObject::SetColorName(long,class CTString &) */

void __thiscall CModelObject::SetColorName(CModelObject *this,long param_1,CTString *param_2)

{
  CModelData *pCVar1;
  char *pcVar2;
  
                    /* 0xb5600  3418  ?SetColorName@CModelObject@@QAEXJAAVCTString@@@Z */
  pCVar1 = GetData(this);
  pcVar2 = StringDuplicate(*(char **)param_2);
  StringFree(*(char **)(pCVar1 + param_1 * 4 + 0x11e0));
  *(char **)(pCVar1 + param_1 * 4 + 0x11e0) = pcVar2;
  return;
}

