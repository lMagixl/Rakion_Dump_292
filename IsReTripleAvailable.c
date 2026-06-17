
/* public: int __thiscall CBrushSector::IsReTripleAvailable(class CSelection<class
   CBrushPolygon,256> &) */

int __thiscall
CBrushSector::IsReTripleAvailable(CBrushSector *this,CSelection<class_CBrushPolygon,256> *param_1)

{
  int iVar1;
  CSelection<class_CBrushPolygon,256> *pCVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x13c6d0  2455
                       ?IsReTripleAvailable@CBrushSector@@QAEHAAV?$CSelection@VCBrushPolygon@@$0BAA@@@@Z
                        */
  pCVar2 = param_1;
  iVar3 = FUN_360cb720((int)param_1);
  if (iVar3 != 2) {
    return 0;
  }
  iVar3 = **(int **)(pCVar2 + 4);
  iVar1 = (*(int **)(pCVar2 + 4))[1];
  if (*(int *)(iVar3 + 0x1ac) == *(int *)(iVar1 + 0x1ac)) {
    iVar4 = FUN_3600bef0((undefined4 *)(iVar3 + 0x14));
    if (iVar4 == 3) {
      iVar4 = FUN_3600bef0((undefined4 *)(iVar1 + 0x14));
      if (iVar4 == 3) {
        param_1 = (CSelection<class_CBrushPolygon,256> *)0x0;
        FUN_3613c670(iVar3,iVar1,(int *)&param_1);
        return (uint)(param_1 != (CSelection<class_CBrushPolygon,256> *)0x0);
      }
    }
  }
  return 0;
}

