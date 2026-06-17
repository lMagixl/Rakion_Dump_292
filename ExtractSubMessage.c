
/* public: void __thiscall CNetworkMessage::ExtractSubMessage(class CNetworkMessage &) */

void __thiscall CNetworkMessage::ExtractSubMessage(CNetworkMessage *this,CNetworkMessage *param_1)

{
  CNetworkMessage *pCVar1;
  CNetworkMessage *this_00;
  
                    /* 0x1065f0  1594  ?ExtractSubMessage@CNetworkMessage@@QAEXAAV1@@Z */
  this_00 = param_1;
  pCVar1 = param_1 + 0x10;
  Read(this,pCVar1,4);
  Read(this,*(void **)(this_00 + 4),*(long *)pCVar1);
  *(undefined4 *)(this_00 + 0x14) = 0;
  param_1 = (CNetworkMessage *)((uint)param_1 & 0xffffff00);
  *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(this_00 + 4);
  Read(this_00,&param_1,1);
  *(uint *)this_00 = (uint)param_1 & 0xff;
  return;
}

