
/* public: unsigned short __thiscall CNetMessage::Read(void *,unsigned short) */

ushort __thiscall CNetMessage::Read(CNetMessage *this,void *param_1,ushort param_2)

{
  ushort uVar1;
  uint uVar2;
  CNetMessage *pCVar3;
  
                    /* 0x1059a0  2945  ?Read@CNetMessage@@QAEGPAXG@Z */
  uVar1 = *(short *)(this + 0x3ea) - *(ushort *)(this + 0x3ec);
  if (uVar1 == 0) {
    return 0;
  }
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  pCVar3 = this + *(ushort *)(this + 0x3ec) + 2;
  for (uVar2 = (uint)(param_2 >> 2); uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)param_1 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    param_1 = (CNetMessage *)((int)param_1 + 4);
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(CNetMessage *)param_1 = *pCVar3;
    pCVar3 = pCVar3 + 1;
    param_1 = (CNetMessage *)((int)param_1 + 1);
  }
  *(ushort *)(this + 0x3ec) = *(short *)(this + 0x3ec) + uVar1;
  return uVar1;
}

