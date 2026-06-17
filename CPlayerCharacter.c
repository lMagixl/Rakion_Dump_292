
/* public: __thiscall CPlayerCharacter::CPlayerCharacter(class CTString const &,class CTString const
   &) */

CPlayerCharacter * __thiscall
CPlayerCharacter::CPlayerCharacter(CPlayerCharacter *this,CTString *param_1,CTString *param_2)

{
  char *pcVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x134ea0  195  ??0CPlayerCharacter@@QAE@ABVCTString@@0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362190d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(*(char **)param_1);
  *(char **)(this + 0x10) = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate(s_RED_TEAM_362387b8);
  *(char **)(this + 0x14) = pcVar1;
  local_4._0_1_ = 1;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x18) = pcVar1;
  local_4._0_1_ = 2;
  pcVar1 = StringDuplicate(*(char **)param_2);
  *(char **)(this + 0x1c) = pcVar1;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar2 = CTString::operator==(param_1,&DAT_362387c1);
  if (iVar2 != 0) {
    pcVar1 = StringDuplicate(s_<unnamed_player>_362387c4);
    StringFree(*(char **)(this + 0x10));
    *(char **)(this + 0x10) = pcVar1;
  }
  iVar2 = CTString::operator==(param_2,&DAT_362387d5);
  if (iVar2 != 0) {
    CTString::operator==((CTString *)(this + 0x1c),s_Human_362387d8);
  }
  FUN_36134d10(this);
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

