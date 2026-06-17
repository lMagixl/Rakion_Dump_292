
/* public: long __thiscall CModelObject::PolygonsInSurfaceCt(long,long) */

long __thiscall CModelObject::PolygonsInSurfaceCt(CModelObject *this,long param_1,long param_2)

{
  CModelData *pCVar1;
  long lVar2;
  
                    /* 0xb5ba0  2778  ?PolygonsInSurfaceCt@CModelObject@@QAEJJJ@Z */
  pCVar1 = GetData(this);
  lVar2 = FUN_3600bef0((undefined4 *)
                       (*(int *)(pCVar1 + param_1 * 0x60 + 0xfc) + 0x54 + param_2 * 0x70));
  return lVar2;
}

