
void __cdecl FUN_36158730(int param_1)

{
  MeshSurface *pMVar1;
  int iVar2;
  int iVar3;
  MeshSurface *pMVar4;
  int iVar5;
  int local_1c;
  int local_14;
  MeshSurface *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36219e63;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_3615a280((undefined4 *)(param_1 + 0x18));
  iVar3 = FUN_3615a300((undefined4 *)(param_1 + 0x28));
  iVar5 = 0;
  if ((iVar2 != 0) && (iVar3 != 0)) {
    local_14 = 0;
    local_10 = (MeshSurface *)0x0;
    local_4 = 0;
    iVar3 = 0;
    FUN_3615b0f0(&local_14,iVar2);
    pMVar4 = local_10;
    local_1c = iVar2;
    if (0 < iVar2) {
      do {
        pMVar1 = (MeshSurface *)(*(int *)(param_1 + 0x1c) + iVar5);
        if (((byte)pMVar1[0x34] & 2) != 0) {
          MeshSurface::operator=(pMVar4,pMVar1);
          iVar3 = iVar3 + 1;
          pMVar4 = pMVar4 + 0x48;
        }
        iVar5 = iVar5 + 0x48;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
    if (0 < iVar2) {
      iVar5 = 0;
      pMVar4 = local_10 + iVar3 * 0x48;
      do {
        pMVar1 = (MeshSurface *)(*(int *)(param_1 + 0x1c) + iVar5);
        if (((byte)pMVar1[0x34] & 2) == 0) {
          MeshSurface::operator=(pMVar4,pMVar1);
          pMVar4 = pMVar4 + 0x48;
        }
        iVar5 = iVar5 + 0x48;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_3615bf50((undefined4 *)(param_1 + 0x18),&local_14);
    local_4 = 0xffffffff;
    if ((local_14 != 0) && (local_10 != (MeshSurface *)0x0)) {
      pMVar4 = local_10 + -4;
      _eh_vector_destructor_iterator_
                (local_10,0x48,*(int *)(local_10 + -4),MeshSurface::~MeshSurface);
      operator_delete__(pMVar4);
    }
  }
  ExceptionList = local_c;
  return;
}

