
/* public: void __thiscall CBrushSector::TriangularizeForVertices(class CSelection<class
   CBrushVertex,2> &) */

void __thiscall
CBrushSector::TriangularizeForVertices(CBrushSector *this,CSelection<class_CBrushVertex,2> *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_8;
  
                    /* 0x13dd10  3850
                       ?TriangularizeForVertices@CBrushSector@@QAEXAAV?$CSelection@VCBrushVertex@@$01@@@Z
                        */
  CWorld::ClearMarkedForUseFlag
            (*(CWorld **)(*(int *)(*(int *)(*(int *)(this + 0x38) + 0x14) + 0x668) + 0xa8));
  iVar4 = 0;
  local_8 = 0;
  if (0 < *(int *)(this + 0x18)) {
    do {
      iVar1 = *(int *)(this + 0x1c) + iVar4;
      if ((-1 < *(int *)(iVar1 + 200)) &&
         (iVar2 = FUN_3600bef0((undefined4 *)(iVar1 + 0x14)), iVar2 != 3)) {
        iVar2 = 0;
        if (0 < *(int *)(iVar1 + 0xc)) {
          piVar3 = *(int **)(iVar1 + 0x10);
          do {
            if ((*(byte *)(*piVar3 + 0x3c) & 2) != 0) {
              *(uint *)(iVar1 + 200) = *(uint *)(iVar1 + 200) | 0x80000000;
              break;
            }
            iVar2 = iVar2 + 1;
            piVar3 = piVar3 + 1;
          } while (iVar2 < *(int *)(iVar1 + 0xc));
        }
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x1d0;
    } while (local_8 < *(int *)(this + 0x18));
  }
  TriangularizeMarkedPolygons(this);
  return;
}

