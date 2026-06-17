
/* public: void __thiscall CNetworkMessage::WriteBits(void const *,long) */

void __thiscall CNetworkMessage::WriteBits(CNetworkMessage *this,void *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  
                    /* 0x106370  3956  ?WriteBits@CNetworkMessage@@QAEXPBXJ@Z */
  pbVar3 = param_1;
  iVar4 = 0;
  if (0 < param_2) {
    param_1 = (void *)param_2;
    do {
      pbVar5 = *(byte **)(this + 0xc);
      if (*(int *)(this + 0x14) == 0) {
        *(byte **)(this + 0xc) = pbVar5 + 1;
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
      }
      else {
        pbVar5 = pbVar5 + -1;
      }
      bVar2 = (byte)*(int *)(this + 0x14);
      if ((*pbVar3 & (byte)(1 << ((byte)iVar4 & 0x1f))) == 0) {
        bVar2 = *pbVar5 & ~('\x01' << (bVar2 & 0x1f));
      }
      else {
        bVar2 = *pbVar5 | '\x01' << (bVar2 & 0x1f);
      }
      *pbVar5 = bVar2;
      iVar1 = *(int *)(this + 0x14);
      *(int *)(this + 0x14) = iVar1 + 1;
      if (7 < iVar1 + 1) {
        *(undefined4 *)(this + 0x14) = 0;
      }
      iVar4 = iVar4 + 1;
      if (7 < iVar4) {
        iVar4 = 0;
        pbVar3 = pbVar3 + 1;
      }
      param_1 = (void *)((int)param_1 + -1);
    } while (param_1 != (void *)0x0);
  }
  return;
}

