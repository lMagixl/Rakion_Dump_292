
/* public: void __thiscall CModelObject::SetMipSwitchFactor(long,float) */

void __thiscall CModelObject::SetMipSwitchFactor(CModelObject *this,long param_1,float param_2)

{
  CModelData *pCVar1;
  CChangeable *this_00;
  
                    /* 0xb55c0  3515  ?SetMipSwitchFactor@CModelObject@@QAEXJM@Z */
  pCVar1 = GetData(this);
  *(float *)(pCVar1 + param_1 * 4 + 0x58) = param_2;
  CChangeable::MarkChanged(this_00);
  return;
}

