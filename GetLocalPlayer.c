
/* public: class CEntity * __thiscall FieldInfo::GetLocalPlayer(void) */

CEntity * __thiscall FieldInfo::GetLocalPlayer(FieldInfo *this)

{
  CEntity *pCVar1;
  
                    /* 0x199c50  1959  ?GetLocalPlayer@FieldInfo@@QAEPAVCEntity@@XZ */
  pCVar1 = CSessionState::GetPlayer(*(CSessionState **)(_pNetwork + 0x24),(uchar)this[0x475c]);
  return pCVar1;
}

