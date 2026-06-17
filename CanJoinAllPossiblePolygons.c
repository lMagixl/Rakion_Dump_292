
/* public: int __thiscall CWorld::CanJoinAllPossiblePolygons(class CSelection<class
   CBrushPolygon,256> &) */

int __thiscall
CWorld::CanJoinAllPossiblePolygons(CWorld *this,CSelection<class_CBrushPolygon,256> *param_1)

{
  int iVar1;
  
                    /* 0xd3a00  1144
                       ?CanJoinAllPossiblePolygons@CWorld@@QAEHAAV?$CSelection@VCBrushPolygon@@$0BAA@@@@Z
                        */
  iVar1 = FUN_360cb720((int)param_1);
  return (uint)(1 < iVar1);
}

