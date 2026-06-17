
/* public: class CBrush3D * __thiscall CEntity::GetBrush(void) */

CBrush3D * __thiscall CEntity::GetBrush(CEntity *this)

{
                    /* 0x6180  1740  ?GetBrush@CEntity@@QAEPAVCBrush3D@@XZ */
  return *(CBrush3D **)(this + 0x7c);
}

