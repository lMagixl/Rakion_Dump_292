
/* public: void __thiscall CModelInstance::AddMesh_t(class CTFileName const &) */

void __thiscall CModelInstance::AddMesh_t(CModelInstance *this,CTFileName *param_1)

{
  int iVar1;
  int iVar2;
  CMesh *pCVar3;
  undefined4 *puVar4;
  
                    /* 0x15e740  988  ?AddMesh_t@CModelInstance@@QAEXABVCTFileName@@@Z */
  iVar2 = FUN_36035f70((undefined4 *)(this + 4));
  FUN_36161090(this + 4,iVar2 + 1);
  puVar4 = (undefined4 *)(*(int *)(this + 8) + iVar2 * 0xc);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  iVar1 = *(int *)(this + 8);
  pCVar3 = CStock_CMesh::Obtain_t(_pMeshStock,param_1);
  *(CMesh **)(iVar1 + iVar2 * 0xc) = pCVar3;
  return;
}

