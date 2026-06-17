
/* public: int __thiscall CWorld::CanJoinPolygons(class CSelection<class CBrushPolygon,256> &) */

int __thiscall CWorld::CanJoinPolygons(CWorld *this,CSelection<class_CBrushPolygon,256> *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0xd3cd0  1145
                       ?CanJoinPolygons@CWorld@@QAEHAAV?$CSelection@VCBrushPolygon@@$0BAA@@@@Z */
  iVar2 = FUN_360cb720((int)param_1);
  if (iVar2 < 2) {
    return 0;
  }
  piVar3 = (int *)FUN_360cb0a0(param_1,0);
  iVar2 = piVar3[0x6b];
  iVar1 = *piVar3;
  iVar6 = 0;
  iVar4 = FUN_360cb720((int)param_1);
  if (0 < iVar4) {
    do {
      iVar5 = FUN_360cb0a0(param_1,iVar6);
      if ((*(int *)(iVar5 + 0x1ac) != iVar2) ||
         (piVar3 = (int *)FUN_360cb0a0(param_1,iVar6), *piVar3 != iVar1)) {
        return 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  return 1;
}

