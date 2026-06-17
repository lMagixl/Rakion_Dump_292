
/* public: void __thiscall CEntityMessage::ReadcharacterChange(unsigned long &,class
   CPlayerCharacter &) */

void __thiscall
CEntityMessage::ReadcharacterChange(CEntityMessage *this,ulong *param_1,CPlayerCharacter *param_2)

{
  CNetworkMessage *this_00;
  CPlayerCharacter *pCVar1;
  char *pcVar2;
  char *pcVar3;
  
                    /* 0x101eb0  3053
                       ?ReadcharacterChange@CEntityMessage@@QAEXAAKAAVCPlayerCharacter@@@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  pCVar1 = param_2;
  CNetworkMessage::Read(this_00,param_2,0x10);
  CNetworkMessage::Read(this_00,&param_2,2);
  pcVar2 = (char *)thunk_FUN_361bf99c((uint)param_2 & 0xffff);
  CNetworkMessage::Read(this_00,pcVar2,(uint)param_2 & 0xffff);
  pcVar3 = StringDuplicate(pcVar2);
  StringFree(*(char **)(pCVar1 + 0x10));
  *(char **)(pCVar1 + 0x10) = pcVar3;
  operator_delete__(pcVar2);
  CNetworkMessage::Read(this_00,&param_2,2);
  pcVar2 = (char *)thunk_FUN_361bf99c((uint)param_2 & 0xffff);
  CNetworkMessage::Read(this_00,pcVar2,(uint)param_2 & 0xffff);
  param_2 = (CPlayerCharacter *)StringDuplicate(pcVar2);
  StringFree(*(char **)(pCVar1 + 0x14));
  *(CPlayerCharacter **)(pCVar1 + 0x14) = param_2;
  operator_delete__(pcVar2);
  CNetworkMessage::Read(this_00,pCVar1 + 0x20,0x20);
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

