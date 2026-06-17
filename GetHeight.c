
/* public: long __thiscall CModelObject::GetHeight(void) */

long __thiscall CModelObject::GetHeight(CModelObject *this)

{
  CModelData *pCVar1;
  
                    /* 0xb5400  1913  ?GetHeight@CModelObject@@QAEJXZ */
  pCVar1 = GetData(this);
  return *(long *)(pCVar1 + 0xcdc);
}

