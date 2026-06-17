
/* public: struct TextureInstance * __thiscall CModelInstance::FindTexureInstance(long,struct
   MeshInstance &) */

TextureInstance * __thiscall
CModelInstance::FindTexureInstance(CModelInstance *this,long param_1,MeshInstance *param_2)

{
  int iVar1;
  TextureInstance *pTVar2;
  int iVar3;
  
                    /* 0x15c9f0  1649
                       ?FindTexureInstance@CModelInstance@@QAEPAUTextureInstance@@JAAUMeshInstance@@@Z
                        */
  iVar1 = FUN_36035f30((undefined4 *)(param_2 + 4));
  iVar3 = 0;
  if (0 < iVar1) {
    pTVar2 = *(TextureInstance **)(param_2 + 8);
    do {
      if (*(int *)(pTVar2 + 0x18) == param_1) {
        return pTVar2;
      }
      iVar3 = iVar3 + 1;
      pTVar2 = pTVar2 + 0x1c;
    } while (iVar3 < iVar1);
  }
  return (TextureInstance *)0x0;
}

