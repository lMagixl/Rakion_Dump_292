
/* public: class CEntity * __thiscall FieldInfo::GetPlayer(unsigned char) */

CEntity * __thiscall FieldInfo::GetPlayer(FieldInfo *this,uchar param_1)

{
  CEntity *pCVar1;
  
                    /* 0x199c70  2047  ?GetPlayer@FieldInfo@@QAEPAVCEntity@@E@Z */
  pCVar1 = CSessionState::GetPlayer(*(CSessionState **)(_pNetwork + 0x24),param_1);
  return pCVar1;
}

