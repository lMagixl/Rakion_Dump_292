
/* public: void __thiscall CModelInstance::CopyMeshInstance(class CModelInstance &) */

void __thiscall CModelInstance::CopyMeshInstance(CModelInstance *this,CModelInstance *param_1)

{
  int iVar1;
  CTFileName *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  MeshInstance *pMVar7;
  int local_c;
  int local_8;
  int local_4;
  
                    /* 0x15e790  1388  ?CopyMeshInstance@CModelInstance@@QAEXAAV1@@Z */
  local_4 = FUN_36035f70((undefined4 *)(param_1 + 4));
  if (0 < local_4) {
    local_8 = 0;
    do {
      iVar5 = *(int *)(param_1 + 8) + local_8;
      AddMesh_t(this,(CTFileName *)(*(int *)(*(int *)(param_1 + 8) + local_8) + 0xc));
      iVar3 = *(int *)(this + 8);
      local_c = FUN_36035f30((undefined4 *)(iVar5 + 4));
      if (0 < local_c) {
        iVar4 = 0;
        do {
          iVar1 = *(int *)(iVar5 + 8);
          lVar6 = *(long *)(iVar1 + 0x18 + iVar4);
          pMVar7 = (MeshInstance *)(iVar3 + local_8);
          pCVar2 = CTextureObject::GetName((CTextureObject *)(iVar1 + iVar4));
          AddTexture_t(this,pCVar2,lVar6,pMVar7);
          iVar4 = iVar4 + 0x1c;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
      local_8 = local_8 + 0xc;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  iVar3 = FUN_36036000((undefined4 *)(param_1 + 0x44));
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      AddBrush_t(this,(CTFileName *)(*(int *)(*(int *)(param_1 + 0x48) + iVar5 * 4) + 0xc));
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return;
}

