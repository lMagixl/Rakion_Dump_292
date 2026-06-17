
/* public: void __thiscall CSessionState::PrintChatMessage(unsigned long,class CTString const
   &,class CTString const &) */

void __thiscall
CSessionState::PrintChatMessage
          (CSessionState *this,ulong param_1,CTString *param_2,CTString *param_3)

{
  char *pcVar1;
  int iVar2;
  CTString *pCVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  CTString *pCVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x10f220  2828  ?PrintChatMessage@CSessionState@@QAEXKABVCTString@@0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_14 = StringDuplicate(&DAT_36222fa0);
  iVar6 = 0;
  local_4 = 0;
  if (param_1 == 0) {
    pcVar1 = StringDuplicate(*(char **)param_2);
    StringFree(local_14);
    local_14 = pcVar1;
  }
  else {
    iVar7 = *(int *)(_pNetwork + 0x18);
    iVar8 = 0;
    iVar2 = FUN_360a5a70((undefined4 *)(iVar7 + 0xc));
    if (0 < iVar2) {
      do {
        iVar7 = *(int *)(iVar7 + 0x10);
        if ((*(int *)(iVar7 + iVar6) != 0) && ((param_1 & 1 << ((byte)iVar8 & 0x1f)) != 0)) {
          iVar2 = CTString::operator!=((CTString *)&local_14,&DAT_36237512);
          if (iVar2 != 0) {
            param_2 = (CTString *)StringDuplicate(&DAT_36237514);
            local_4._0_1_ = 1;
            CTString::operator+=((CTString *)&local_14,(CTString *)&param_2);
            local_4 = (uint)local_4._1_3_ << 8;
            StringFree((char *)param_2);
          }
          pCVar3 = (CTString *)CPlayerEntity::GetPlayerName(*(CPlayerEntity **)(iVar7 + iVar6 + 4));
          local_4._0_1_ = 2;
          CTString::operator+=((CTString *)&local_14,pCVar3);
          local_4 = (uint)local_4._1_3_ << 8;
          StringFree(local_10);
        }
        iVar7 = *(int *)(_pNetwork + 0x18);
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x100;
        iVar2 = FUN_360a5a70((undefined4 *)(iVar7 + 0xc));
      } while (iVar8 < iVar2);
    }
  }
  pcVar1 = StringDuplicate(local_14);
  StringFree(DAT_362cd014);
  DAT_362cd014 = pcVar1;
  pcVar1 = StringDuplicate(*(char **)param_3);
  StringFree(DAT_362cd018);
  DAT_362cd018 = pcVar1;
  iVar6 = CTString::operator!=((CTString *)&DAT_362cd01c,&DAT_36237517);
  if (iVar6 != 0) {
    CShell::Execute(_pShell,(CTString *)&DAT_362cd01c);
  }
  iVar6 = CTString::operator!=((CTString *)&DAT_362cd014,&DAT_36237518);
  if ((iVar6 != 0) &&
     (iVar6 = CTString::operator!=((CTString *)&DAT_362cd018,&DAT_36237519), iVar6 != 0)) {
    pCVar3 = (CTString *)&param_2;
    puVar11 = &DAT_362cd018;
    puVar4 = (undefined4 *)RemoveSpecialCodes(pCVar3);
    pCVar9 = (CTString *)&param_1;
    puVar10 = &DAT_362cd014;
    local_4._0_1_ = 3;
    puVar5 = (undefined4 *)RemoveSpecialCodes(pCVar9);
    local_4._0_1_ = 4;
    CPrintF(s__s___o_cFFFFFF_s_r_3623751c,*puVar5,*puVar4,pCVar9,puVar10,pCVar3,puVar11);
    local_4._0_1_ = 3;
    StringFree((char *)param_1);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree((char *)param_2);
  }
  DAT_362ccf08 = DAT_362ccf08 + 1;
  local_4 = 0xffffffff;
  StringFree(local_14);
  ExceptionList = local_c;
  return;
}

