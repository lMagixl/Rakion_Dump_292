
/* public: void __thiscall CEntityMessage::ReadPause(int &,class CTString &) */

void __thiscall CEntityMessage::ReadPause(CEntityMessage *this,int *param_1,CTString *param_2)

{
  CNetworkMessage *this_00;
  CTString *pCVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  
                    /* 0x101d00  2973  ?ReadPause@CEntityMessage@@QAEXAAHAAVCTString@@@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  *param_1 = *(int *)(this + 0x20);
  CNetworkMessage::Read(this_00,&param_1,2);
  uVar4 = (uint)param_1 & 0xffff;
  pcVar2 = (char *)thunk_FUN_361bf99c(uVar4);
  CNetworkMessage::Read(this_00,pcVar2,uVar4);
  pcVar3 = StringDuplicate(pcVar2);
  pCVar1 = param_2;
  StringFree(*(char **)param_2);
  *(char **)pCVar1 = pcVar3;
  operator_delete__(pcVar2);
  return;
}

