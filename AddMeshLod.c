
/* public: void __thiscall CMesh::AddMeshLod(struct MeshLOD &) */

void __thiscall CMesh::AddMeshLod(CMesh *this,MeshLOD *param_1)

{
  int iVar1;
  
                    /* 0x159fe0  987  ?AddMeshLod@CMesh@@QAEXAAUMeshLOD@@@Z */
  iVar1 = FUN_3600c4f0((undefined4 *)(this + 0x14));
  FUN_3615c200(this + 0x14,iVar1 + 1);
  MeshLOD::operator=((MeshLOD *)(iVar1 * 0x54 + *(int *)(this + 0x18)),param_1);
  return;
}

