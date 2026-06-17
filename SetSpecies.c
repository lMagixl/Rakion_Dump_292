
/* public: void __thiscall CPlayerCharacter::SetSpecies(class CTString) */

void __thiscall CPlayerCharacter::SetSpecies(CPlayerCharacter *this,char *param_2)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1352b0  3597  ?SetSpecies@CPlayerCharacter@@QAEXVCTString@@@Z */
  puStack_8 = &LAB_362191a0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(param_2);
  StringFree(*(char **)(this + 0x1c));
  *(char **)(this + 0x1c) = pcVar1;
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

