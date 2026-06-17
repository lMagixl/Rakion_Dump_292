
/* public: void __thiscall CNetworkMessage::Unpack(class CNetworkMessage &,class CCompressor &) */

void __thiscall
CNetworkMessage::Unpack(CNetworkMessage *this,CNetworkMessage *param_1,CCompressor *param_2)

{
  CNetworkMessage *pCVar1;
  CNetworkMessage *pCVar2;
  
                    /* 0x1061f0  3883  ?Unpack@CNetworkMessage@@QAEXAAV1@AAVCCompressor@@@Z */
  pCVar2 = param_1;
  pCVar1 = param_1 + 4;
  param_1 = (CNetworkMessage *)(*(int *)(param_1 + 8) + -1);
  (**(code **)(*(int *)param_2 + 8))
            (*(int *)(this + 4) + 1,*(int *)(this + 0x10) + -1,*(int *)pCVar1 + 1);
  *(int *)(pCVar2 + 0x10) = (int)&param_1 + 1;
  return;
}

