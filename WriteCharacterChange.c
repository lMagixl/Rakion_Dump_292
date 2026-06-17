
/* public: void __thiscall CEntityMessage::WriteCharacterChange(unsigned long &,class
   CPlayerCharacter &) */

void __thiscall
CEntityMessage::WriteCharacterChange(CEntityMessage *this,ulong *param_1,CPlayerCharacter *param_2)

{
  CNetworkMessage *this_00;
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  CPlayerCharacter *this_01;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  CTString *pCVar8;
  uint local_14;
  char *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x101d70  3958
                       ?WriteCharacterChange@CEntityMessage@@QAEXAAKAAVCPlayerCharacter@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621759c;
  local_c = ExceptionList;
  this_00 = (CNetworkMessage *)(this + 4);
  ExceptionList = &local_c;
  CNetworkMessage::Reinit(this_00);
  this_01 = param_2;
  pcVar4 = *(char **)(param_2 + 0x10);
  pcVar1 = pcVar4 + 1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  pcVar5 = *(char **)(param_2 + 0x14);
  pcVar2 = pcVar5 + 1;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  local_14 = ((int)pcVar5 - (int)pcVar2) + 1;
  *(undefined4 *)this = 0xe;
  *(short *)(this + 0x1c) =
       (short)((int)pcVar5 - (int)pcVar2) + 0x35 +
       (short)(CPlayerCharacter *)(pcVar4 + (1 - (int)pcVar1));
  *(ulong *)(this + 0x20) = *param_1;
  param_2 = (CPlayerCharacter *)(pcVar4 + (1 - (int)pcVar1));
  CNetworkMessage::Write(this_00,this_01,0x10);
  CNetworkMessage::Write(this_00,&param_2,2);
  CNetworkMessage::Write(this_00,*(void **)(this_01 + 0x10),(uint)param_2 & 0xffff);
  CNetworkMessage::Write(this_00,&local_14,2);
  CNetworkMessage::Write(this_00,*(void **)(this_01 + 0x14),local_14 & 0xffff);
  CNetworkMessage::Write(this_00,this_01 + 0x20,0x20);
  if (DAT_362cced0 != 0) {
    uVar6 = CPlayerCharacter::GetNameForPrinting(this_01);
    pCVar8 = (CTString *)&param_1;
    local_4 = 0;
    puVar7 = (undefined4 *)RemoveSpecialCodes(pCVar8);
    local_4._0_1_ = 1;
    CPrintF(s_Server__CHARACTERCHANGE__EntityI_362360ac,*(undefined4 *)(this + 0x20),*puVar7,pCVar8,
            uVar6);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree((char *)param_1);
    local_4 = 0xffffffff;
    StringFree(local_10);
  }
  ExceptionList = local_c;
  return;
}

