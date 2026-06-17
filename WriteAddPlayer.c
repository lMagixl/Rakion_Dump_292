
/* public: void __thiscall CEntityMessage::WriteAddPlayer(unsigned long &,long &,class
   CPlayerCharacter &,unsigned long &,unsigned long &,long) */

void __thiscall
CEntityMessage::WriteAddPlayer
          (CEntityMessage *this,ulong *param_1,long *param_2,CPlayerCharacter *param_3,
          ulong *param_4,ulong *param_5,long param_6)

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
  CEntityMessage *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1017a0  3953
                       ?WriteAddPlayer@CEntityMessage@@QAEXAAKAAJAAVCPlayerCharacter@@00J@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217582;
  local_c = ExceptionList;
  this_00 = (CNetworkMessage *)(this + 4);
  ExceptionList = &local_c;
  local_10 = this;
  CNetworkMessage::Reinit(this_00);
  this_01 = param_3;
  pcVar4 = *(char **)(param_3 + 0x10);
  pcVar1 = pcVar4 + 1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  pcVar5 = *(char **)(param_3 + 0x14);
  pcVar2 = pcVar5 + 1;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  local_10 = (CEntityMessage *)(((int)pcVar5 - (int)pcVar2) + 1);
  *(short *)(this + 0x1c) =
       (short)((int)pcVar5 - (int)pcVar2) + 0x45 +
       (short)(CPlayerCharacter *)(pcVar4 + (1 - (int)pcVar1));
  *(undefined4 *)this = 7;
  *(ulong *)(this + 0x20) = *param_1;
  param_3 = (CPlayerCharacter *)(pcVar4 + (1 - (int)pcVar1));
  CNetworkMessage::Write(this_00,param_2,4);
  CNetworkMessage::Write(this_00,this_01,0x10);
  CNetworkMessage::Write(this_00,&param_3,2);
  CNetworkMessage::Write(this_00,*(void **)(this_01 + 0x10),(uint)param_3 & 0xffff);
  CNetworkMessage::Write(this_00,&local_10,2);
  CNetworkMessage::Write(this_00,*(void **)(this_01 + 0x14),(uint)local_10 & 0xffff);
  CNetworkMessage::Write(this_00,this_01 + 0x20,0x20);
  CNetworkMessage::Write(this_00,param_4,4);
  CNetworkMessage::Write(this_00,param_5,4);
  CNetworkMessage::Write(this_00,&param_6,4);
  if (DAT_362cced0 != 0) {
    uVar6 = CPlayerCharacter::GetNameForPrinting(this_01);
    pCVar8 = (CTString *)&param_1;
    local_4 = 0;
    puVar7 = (undefined4 *)RemoveSpecialCodes(pCVar8);
    local_4._0_1_ = 1;
    CPrintF(s_Server__ADDPLAYER__EntityID__0x__36235f04,*(undefined4 *)(this + 0x20),*puVar7,pCVar8,
            uVar6);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree((char *)param_1);
    local_4 = 0xffffffff;
    StringFree((char *)param_2);
  }
  ExceptionList = local_c;
  return;
}

