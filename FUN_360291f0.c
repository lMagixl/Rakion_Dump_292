
void FUN_360291f0(void)

{
  char *pcVar1;
  CTString *this;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  undefined4 *puVar4;
  int iVar5;
  char *local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f48c;
  local_c = ExceptionList;
  puVar4 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x10);
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(s_Mouse_X__362251c0);
  StringFree((char *)*puVar4);
  *puVar4 = pcVar1;
  iVar2 = *(int *)(unaff_ESI + 0x18);
  pcVar1 = Translate(s_ETRSmouse_X__362251cc,4);
  pcVar1 = StringDuplicate(pcVar1);
  StringFree(*(char **)(iVar2 + 0x14));
  *(char **)(iVar2 + 0x14) = pcVar1;
  puVar4 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x28);
  pcVar1 = StringDuplicate(s_Mouse_X__362251dc);
  StringFree((char *)*puVar4);
  *puVar4 = pcVar1;
  iVar2 = *(int *)(unaff_ESI + 0x18);
  pcVar1 = Translate(s_ETRSmouse_X__362251e8,4);
  pcVar1 = StringDuplicate(pcVar1);
  StringFree(*(char **)(iVar2 + 0x2c));
  *(char **)(iVar2 + 0x2c) = pcVar1;
  puVar4 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x40);
  pcVar1 = StringDuplicate(s_Mouse_Y__362251f8);
  StringFree((char *)*puVar4);
  *puVar4 = pcVar1;
  iVar2 = *(int *)(unaff_ESI + 0x18);
  pcVar1 = Translate(s_ETRSmouse_Y__36225204,4);
  pcVar1 = StringDuplicate(pcVar1);
  StringFree(*(char **)(iVar2 + 0x44));
  *(char **)(iVar2 + 0x44) = pcVar1;
  puVar4 = (undefined4 *)(*(int *)(unaff_ESI + 0x18) + 0x58);
  pcVar1 = StringDuplicate(s_Mouse_Y__36225214);
  StringFree((char *)*puVar4);
  *puVar4 = pcVar1;
  iVar2 = *(int *)(unaff_ESI + 0x18);
  pcVar1 = Translate(s_ETRSmouse_Y__36225220,4);
  pcVar1 = StringDuplicate(pcVar1);
  StringFree(*(char **)(iVar2 + 0x5c));
  *(char **)(iVar2 + 0x5c) = pcVar1;
  iVar3 = 0;
  iVar2 = 0x60;
  do {
    iVar5 = *(int *)(unaff_ESI + 0x18) + iVar2;
    local_14 = StringDuplicate(&DAT_36222fa0);
    iVar3 = iVar3 + 1;
    local_4 = 0;
    CTString::PrintF(this,(char *)&local_14,s_button__d_36225230,iVar3);
    local_10 = StringDuplicate(local_14);
    StringFree(*(char **)(iVar5 + 0x10));
    *(char **)(iVar5 + 0x10) = local_10;
    pcVar1 = TranslateConst(local_14,0);
    local_10 = StringDuplicate(pcVar1);
    StringFree(*(char **)(iVar5 + 0x14));
    *(char **)(iVar5 + 0x14) = local_10;
    local_4 = 0xffffffff;
    StringFree(local_14);
    iVar2 = iVar2 + 0x18;
  } while (iVar2 < 0xa8);
  ExceptionList = local_c;
  return;
}

