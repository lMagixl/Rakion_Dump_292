
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: class CBrushSector * __thiscall CEntity::GetSectorFromPoint(class Vector<float,3> const
   &) */

CBrushSector * __thiscall CEntity::GetSectorFromPoint(CEntity *this,Vector<float,3> *param_1)

{
  CRelationSrc *pCVar1;
  int *piVar2;
  float10 fVar3;
  double local_20;
  double local_18;
  double local_10;
  
                    /* 0x1287a0  2091
                       ?GetSectorFromPoint@CEntity@@QAEPAVCBrushSector@@ABV?$Vector@M$02@@@Z */
  piVar2 = *(int **)(this + 0xac);
  while( true ) {
    if (*piVar2 == 0) {
      return (CBrushSector *)0x0;
    }
    pCVar1 = CRelationLnk::GetSrc((CRelationLnk *)(piVar2 + -4));
    local_20 = (double)*(float *)param_1;
    local_18 = (double)*(float *)(param_1 + 4);
    local_10 = (double)*(float *)(param_1 + 8);
    fVar3 = FUN_360e0680(*(int *)(pCVar1 + -0x10),&local_20,_DAT_36237340);
    if ((float10)_DAT_3622376c <= fVar3) break;
    piVar2 = (int *)*piVar2;
  }
  return (CBrushSector *)(pCVar1 + -0x9c);
}

