
/* WARNING: Removing unreachable block (ram,0x3615a0e2) */
/* WARNING: Removing unreachable block (ram,0x3615a0e6) */
/* public: void __thiscall CMesh::RemoveMeshLod(struct MeshLOD *) */

void __thiscall CMesh::RemoveMeshLod(CMesh *this,MeshLOD *param_1)

{
  MeshLOD *pMVar1;
  int iVar2;
  MeshLOD *this_00;
  int iVar3;
  int local_14;
  MeshLOD *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15a020  3137  ?RemoveMeshLod@CMesh@@QAEXPAUMeshLOD@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219f48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_3600c4f0((undefined4 *)(this + 0x14));
  iVar3 = 0;
  local_14 = 0;
  local_10 = (MeshLOD *)0x0;
  local_4 = 0;
  FUN_3600c460(&local_14,iVar2 + -1);
  pMVar1 = local_10;
  this_00 = local_10;
  if (0 < iVar2) {
    do {
      if ((MeshLOD *)(*(int *)(this + 0x18) + iVar3) != param_1) {
        MeshLOD::operator=(this_00,(MeshLOD *)(*(int *)(this + 0x18) + iVar3));
        this_00 = this_00 + 0x54;
      }
      iVar3 = iVar3 + 0x54;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_360140c0(this + 0x14,&local_14);
  if ((local_14 != 0) && (pMVar1 != (MeshLOD *)0x0)) {
    _eh_vector_destructor_iterator_(pMVar1,0x54,*(int *)(pMVar1 + -4),MeshLOD::~MeshLOD);
    operator_delete__(pMVar1 + -4);
  }
  ExceptionList = local_c;
  return;
}

