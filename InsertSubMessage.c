
/* public: void __thiscall CNetworkMessage::InsertSubMessage(class CNetworkMessage const &) */

void __thiscall CNetworkMessage::InsertSubMessage(CNetworkMessage *this,CNetworkMessage *param_1)

{
                    /* 0x1065c0  2343  ?InsertSubMessage@CNetworkMessage@@QAEXABV1@@Z */
  Write(this,param_1 + 0x10,4);
  Write(this,*(void **)(param_1 + 4),*(long *)(param_1 + 0x10));
  return;
}

