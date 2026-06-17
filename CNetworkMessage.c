
/* public: __thiscall CNetworkMessage::CNetworkMessage(class CNetworkMessage const &) */

CNetworkMessage * __thiscall
CNetworkMessage::CNetworkMessage(CNetworkMessage *this,CNetworkMessage *param_1)

{
  long lVar1;
  void *pvVar2;
  
                    /* 0x106590  168  ??0CNetworkMessage@@QAE@ABV0@@Z */
  lVar1 = *(long *)(param_1 + 8);
  *(long *)(this + 8) = lVar1;
  pvVar2 = AllocMemory(lVar1);
  *(void **)(this + 4) = pvVar2;
  Initialize(this,param_1);
  return this;
}

