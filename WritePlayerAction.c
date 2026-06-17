
/* public: void __thiscall CEntityMessage::WritePlayerAction(unsigned long &,class CPlayerAction &)
    */

void __thiscall
CEntityMessage::WritePlayerAction(CEntityMessage *this,ulong *param_1,CPlayerAction *param_2)

{
                    /* 0x100920  3979
                       ?WritePlayerAction@CEntityMessage@@QAEXAAKAAVCPlayerAction@@@Z */
  CNetworkMessage::Reinit((CNetworkMessage *)(this + 4));
  *(undefined4 *)this = 0x12;
  *(ulong *)(this + 0x20) = *param_1;
  FUN_361064d0((CNetworkMessage *)(this + 4));
  *(short *)(this + 0x1c) = *(short *)(this + 0x14) + -1;
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__PLAYERACTION__EntityID__0_3623618c,*param_1);
  }
  return;
}

