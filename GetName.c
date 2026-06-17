
/* public: virtual class CTString const & __thiscall CPlayerEntity::GetName(void)const  */

CTString * __thiscall CPlayerEntity::GetName(CPlayerEntity *this)

{
  CTString *pCVar1;
  
                    /* 0x1b6eb0  2006  ?GetName@CPlayerEntity@@UBEABVCTString@@XZ */
  pCVar1 = CPlayerCharacter::GetName((CPlayerCharacter *)(this + 0x368));
  return pCVar1;
}

