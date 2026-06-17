
/* public: class CTString __thiscall CPlayerEntity::GetPlayerName(void) */

undefined4 __thiscall CPlayerEntity::GetPlayerName(CPlayerEntity *this)

{
  undefined4 in_stack_00000004;
  
                    /* 0x1b6e80  2051  ?GetPlayerName@CPlayerEntity@@QAE?AVCTString@@XZ */
  CPlayerCharacter::GetNameForPrinting((CPlayerCharacter *)(this + 0x368));
  return in_stack_00000004;
}

