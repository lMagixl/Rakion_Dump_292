
/* public: virtual void __thiscall CPlayerEntity::CharacterChanged(class CPlayerCharacter const &)
    */

void __thiscall CPlayerEntity::CharacterChanged(CPlayerEntity *this,CPlayerCharacter *param_1)

{
                    /* 0x1b70b0  1164  ?CharacterChanged@CPlayerEntity@@UAEXABVCPlayerCharacter@@@Z
                        */
  CPlayerCharacter::operator=((CPlayerCharacter *)(this + 0x368),param_1);
  return;
}

