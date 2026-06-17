
/* public: int __thiscall CEntity::IsEmptyBrush(void)const  */

int __thiscall CEntity::IsEmptyBrush(CEntity *this)

{
  CBrushMip *pCVar1;
  int iVar2;
  
                    /* 0x1261d0  2388  ?IsEmptyBrush@CEntity@@QBEHXZ */
  if ((*(int *)(this + 4) != 4) && (*(int *)(this + 4) != 8)) {
    return 0;
  }
  pCVar1 = CBrush3D::GetFirstMip(*(CBrush3D **)(this + 0x7c));
  iVar2 = FUN_36043600((int)pCVar1);
  return (uint)(iVar2 == 0);
}

