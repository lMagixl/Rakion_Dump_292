
/* public: class CTString __thiscall CModelObject::GetColorName(long) */

long __thiscall CModelObject::GetColorName(CModelObject *this,long param_1)

{
  CModelData *pCVar1;
  char *pcVar2;
  int in_stack_00000008;
  
                    /* 0xb5640  1790  ?GetColorName@CModelObject@@QAE?AVCTString@@J@Z */
  pCVar1 = GetData(this);
  pcVar2 = StringDuplicate(*(char **)(pCVar1 + in_stack_00000008 * 4 + 0x11e0));
  *(char **)param_1 = pcVar2;
  return param_1;
}

