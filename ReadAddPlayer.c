
/* public: void __thiscall CEntityMessage::ReadAddPlayer(unsigned long &,long &,class
   CPlayerCharacter &,unsigned long &,unsigned long &,long &) */

void __thiscall
CEntityMessage::ReadAddPlayer
          (CEntityMessage *this,ulong *param_1,long *param_2,CPlayerCharacter *param_3,
          ulong *param_4,ulong *param_5,long *param_6)

{
  CNetworkMessage *this_00;
  CPlayerCharacter *pCVar1;
  char *pcVar2;
  
                    /* 0x101910  2947
                       ?ReadAddPlayer@CEntityMessage@@QAEXAAKAAJAAVCPlayerCharacter@@001@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  CNetworkMessage::Read(this_00,param_2,4);
  pCVar1 = param_3;
  CNetworkMessage::Read(this_00,param_3,0x10);
  CNetworkMessage::Read(this_00,&param_2,2);
  pcVar2 = (char *)thunk_FUN_361bf99c((uint)param_2 & 0xffff);
  CNetworkMessage::Read(this_00,pcVar2,(uint)param_2 & 0xffff);
  param_3 = (CPlayerCharacter *)StringDuplicate(pcVar2);
  StringFree(*(char **)(pCVar1 + 0x10));
  *(CPlayerCharacter **)(pCVar1 + 0x10) = param_3;
  operator_delete__(pcVar2);
  CNetworkMessage::Read(this_00,&param_2,2);
  pcVar2 = (char *)thunk_FUN_361bf99c((uint)param_2 & 0xffff);
  CNetworkMessage::Read(this_00,pcVar2,(uint)param_2 & 0xffff);
  param_2 = (long *)StringDuplicate(pcVar2);
  StringFree(*(char **)(pCVar1 + 0x14));
  *(long **)(pCVar1 + 0x14) = param_2;
  operator_delete__(pcVar2);
  CNetworkMessage::Read(this_00,pCVar1 + 0x20,0x20);
  CNetworkMessage::Read(this_00,param_4,4);
  CNetworkMessage::Read(this_00,param_5,4);
  CNetworkMessage::Read(this_00,param_6,4);
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

