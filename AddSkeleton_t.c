
/* public: void __thiscall CModelInstance::AddSkeleton_t(class CTFileName const &) */

void __thiscall CModelInstance::AddSkeleton_t(CModelInstance *this,CTFileName *param_1)

{
  CSkeleton *pCVar1;
  
                    /* 0x15c4b0  1016  ?AddSkeleton_t@CModelInstance@@QAEXABVCTFileName@@@Z */
  pCVar1 = CStock_CSkeleton::Obtain_t(_pSkeletonStock,param_1);
  *(CSkeleton **)this = pCVar1;
  return;
}

