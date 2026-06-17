
/* public: void __thiscall CEntityMessage::WritePlacementNotify(unsigned long &,unsigned char) */

void __thiscall
CEntityMessage::WritePlacementNotify(CEntityMessage *this,ulong *param_1,uchar param_2)

{
                    /* 0x101ae0  3978  ?WritePlacementNotify@CEntityMessage@@QAEXAAKE@Z */
  CNetworkMessage::Reinit((CNetworkMessage *)(this + 4));
  *(undefined4 *)this = 10;
  *(undefined2 *)(this + 0x1c) = 1;
  *(ulong *)(this + 0x20) = *param_1;
  CNetworkMessage::Write((CNetworkMessage *)(this + 4),&param_2,1);
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__SETPLACEMENT_NOTIFY__Ent_36235fc0,*(undefined4 *)(this + 0x20));
    if (param_2 != '\0') {
      CPrintF(s_FORCED_36235ff4);
      return;
    }
    CPrintF(s_not_forced_36236000);
  }
  return;
}

