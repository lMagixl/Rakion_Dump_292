
/* public: void __thiscall CEntityMessage::WritePause(int &,class CTString &) */

void __thiscall CEntityMessage::WritePause(CEntityMessage *this,int *param_1,CTString *param_2)

{
  char *pcVar1;
  CNetworkMessage *this_00;
  char cVar2;
  CTString *pCVar3;
  char *pcVar4;
  
                    /* 0x101c60  3976  ?WritePause@CEntityMessage@@QAEXAAHAAVCTString@@@Z */
  pCVar3 = param_2;
  pcVar4 = *(char **)param_2;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  this_00 = (CNetworkMessage *)(this + 4);
  param_2 = (CTString *)(pcVar4 + (1 - (int)pcVar1));
  CNetworkMessage::Reinit(this_00);
  *(short *)(this + 0x1c) = (short)(CTString *)(pcVar4 + (1 - (int)pcVar1)) + 2;
  *(undefined4 *)this = 0xc;
  *(int *)(this + 0x20) = *param_1;
  CNetworkMessage::Write(this_00,&param_2,2);
  CNetworkMessage::Write(this_00,*(void **)pCVar3,(uint)param_2 & 0xffff);
  if (*param_1 != 0) {
    CPrintF(s_Server__Pause_game_by__s_3623604c,*(undefined4 *)pCVar3);
    return;
  }
  CPrintF(s_Server__Unpause_game_by__s_36236068,*(undefined4 *)pCVar3);
  return;
}

