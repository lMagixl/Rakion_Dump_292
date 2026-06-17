
/* public: class CBrushSector * __thiscall CEntity::GetFirstSector(void) */

CBrushSector * __thiscall CEntity::GetFirstSector(CEntity *this)

{
  CRelationSrc *pCVar1;
  
                    /* 0x1267d0  1870  ?GetFirstSector@CEntity@@QAEPAVCBrushSector@@XZ */
  if (**(int **)(this + 0xac) != 0) {
    pCVar1 = CRelationLnk::GetSrc((CRelationLnk *)(*(int **)(this + 0xac) + -4));
    return (CBrushSector *)(pCVar1 + -0x9c);
  }
  return (CBrushSector *)0x0;
}

