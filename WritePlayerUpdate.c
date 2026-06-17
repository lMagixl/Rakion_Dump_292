
/* public: void __thiscall CEntityMessage::WritePlayerUpdate(unsigned long &,class CNetworkMessage
   &) */

void __thiscall
CEntityMessage::WritePlayerUpdate(CEntityMessage *this,ulong *param_1,CNetworkMessage *param_2)

{
                    /* 0x100830  3980
                       ?WritePlayerUpdate@CEntityMessage@@QAEXAAKAAVCNetworkMessage@@@Z */
  CNetworkMessage::Reinit((CNetworkMessage *)(this + 4));
  *(undefined4 *)this = 9;
  *(ulong *)(this + 0x20) = *param_1;
  *(short *)(this + 0x1c) = *(short *)(param_2 + 0x10) + -1;
  CNetworkMessage::operator=((CNetworkMessage *)(this + 4),param_2);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__PLAYERUPDATE__EntityID__0_36235f88,*param_1);
  }
  return;
}

