
/* public: void __thiscall CPlayerCharacter::SetTeam(class CTString) */

void __thiscall CPlayerCharacter::SetTeam(CPlayerCharacter *this,char *param_2)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x135190  3602  ?SetTeam@CPlayerCharacter@@QAEXVCTString@@@Z */
  puStack_8 = &LAB_3621915b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(param_2);
  StringFree(*(char **)(this + 0x14));
  *(char **)(this + 0x14) = pcVar1;
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

