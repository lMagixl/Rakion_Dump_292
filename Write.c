
/* public: void __thiscall CNetMessage::Write(void * const,unsigned short) */

void __thiscall CNetMessage::Write(CNetMessage *this,void *param_1,ushort param_2)

{
  uint uVar1;
  CNetMessage *pCVar2;
  
                    /* 0x105a00  3951  ?Write@CNetMessage@@QAEXQAXG@Z */
  pCVar2 = this + *(ushort *)(this + 0x3ea) + 2;
  for (uVar1 = (uint)(param_2 >> 2); uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pCVar2 = *(undefined4 *)param_1;
    param_1 = (CNetMessage *)((int)param_1 + 4);
    pCVar2 = pCVar2 + 4;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pCVar2 = *(CNetMessage *)param_1;
    param_1 = (CNetMessage *)((int)param_1 + 1);
    pCVar2 = pCVar2 + 1;
  }
  *(ushort *)(this + 0x3ea) = *(short *)(this + 0x3ea) + param_2;
  return;
}

