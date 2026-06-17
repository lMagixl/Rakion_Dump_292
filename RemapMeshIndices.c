
/* void __cdecl RemapMeshIndices(struct MeshLOD &,long const *,long) */

void __cdecl RemapMeshIndices(MeshLOD *param_1,long *param_2,long param_3)

{
  int iVar1;
  MeshLOD *pMVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x1548a0  3111  ?RemapMeshIndices@@YAXAAUMeshLOD@@PBJJ@Z */
  pMVar2 = param_1;
  param_1 = (MeshLOD *)FUN_3615a280((undefined4 *)(param_1 + 0x18));
  if (0 < (int)param_1) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(*(int *)(pMVar2 + 0x1c) + 0x44 + iVar5);
      iVar3 = FUN_3615a400((undefined4 *)(*(int *)(pMVar2 + 0x1c) + iVar5 + 0x40));
      iVar4 = 0;
      if (0 < iVar3 * 3) {
        do {
          *(short *)(iVar1 + iVar4 * 2) = (short)param_2[*(ushort *)(iVar1 + iVar4 * 2)];
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar3 * 3);
      }
      iVar5 = iVar5 + 0x48;
      param_1 = param_1 + -1;
    } while (param_1 != (MeshLOD *)0x0);
  }
  return;
}

