
/* public: class CBrushSector * __thiscall CEntity::GetFirstSectorWithName(void) */

CBrushSector * __thiscall CEntity::GetFirstSectorWithName(CEntity *this)

{
  CRelationSrc *pCVar1;
  int iVar2;
  int *piVar3;
  
                    /* 0x1267f0  1871  ?GetFirstSectorWithName@CEntity@@QAEPAVCBrushSector@@XZ */
  piVar3 = *(int **)(this + 0xac);
  while( true ) {
    if (*piVar3 == 0) {
      return (CBrushSector *)0x0;
    }
    pCVar1 = CRelationLnk::GetSrc((CRelationLnk *)(piVar3 + -4));
    iVar2 = CTString::operator!=((CTString *)(pCVar1 + 0xc),&DAT_36237bac);
    if (iVar2 != 0) break;
    piVar3 = (int *)*piVar3;
  }
  return (CBrushSector *)(pCVar1 + -0x9c);
}

