
/* public: void __thiscall CModelInstance::AddAnimSet_t(class CTFileName const &) */

void __thiscall CModelInstance::AddAnimSet_t(CModelInstance *this,CTFileName *param_1)

{
  CAnimSet *pCVar1;
  
                    /* 0x15e6d0  949  ?AddAnimSet_t@CModelInstance@@QAEXABVCTFileName@@@Z */
  pCVar1 = CStock_CAnimSet::Obtain_t(_pAnimSetStock,param_1);
  FUN_360368e0(this + 0x34,pCVar1);
  return;
}

