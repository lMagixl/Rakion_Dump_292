
/* public: void __thiscall CEntityMessage::WriteRemovePlayer(long &) */

void __thiscall CEntityMessage::WriteRemovePlayer(CEntityMessage *this,long *param_1)

{
                    /* 0x1008c0  3985  ?WriteRemovePlayer@CEntityMessage@@QAEXAAJ@Z */
  CNetworkMessage::Reinit((CNetworkMessage *)(this + 4));
  *(undefined4 *)this = 0xd;
  *(undefined2 *)(this + 0x1c) = 0;
  *(long *)(this + 0x20) = *param_1;
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__REMPLAYER__index___ld_36236084,*param_1);
  }
  return;
}

