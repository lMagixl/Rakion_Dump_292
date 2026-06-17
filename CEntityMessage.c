
/* public: __thiscall CEntityMessage::CEntityMessage(class CEntityMessage const &) */

CEntityMessage * __thiscall
CEntityMessage::CEntityMessage(CEntityMessage *this,CEntityMessage *param_1)

{
                    /* 0x6600  96  ??0CEntityMessage@@QAE@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  CNetworkMessage::CNetworkMessage((CNetworkMessage *)(this + 4),(CNetworkMessage *)(param_1 + 4));
  *(undefined2 *)(this + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  return this;
}

