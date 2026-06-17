
/* public: long __thiscall CModelObject::GetWidth(void) */

long __thiscall CModelObject::GetWidth(CModelObject *this)

{
  CModelData *pCVar1;
  
                    /* 0xb53f0  2210  ?GetWidth@CModelObject@@QAEJXZ */
  pCVar1 = GetData(this);
  return *(long *)(pCVar1 + 0xcd8);
}

