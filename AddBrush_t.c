
/* public: void __thiscall CModelInstance::AddBrush_t(class CTFileName const &) */

void __thiscall CModelInstance::AddBrush_t(CModelInstance *this,CTFileName *param_1)

{
  int iVar1;
  int iVar2;
  CMesh *pCVar3;
  
                    /* 0x15cda0  959  ?AddBrush_t@CModelInstance@@QAEXABVCTFileName@@@Z */
  iVar2 = FUN_36036000((undefined4 *)(this + 0x44));
  FUN_360ea4e0(this + 0x44,iVar2 + 1);
  iVar1 = *(int *)(this + 0x48);
  pCVar3 = CStock_CMesh::Obtain_t(_pMeshStock,param_1);
  *(CMesh **)(iVar1 + iVar2 * 4) = pCVar3;
  return;
}

