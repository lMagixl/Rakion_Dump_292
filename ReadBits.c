
/* public: void __thiscall CNetworkMessage::ReadBits(void *,long) */

void __thiscall CNetworkMessage::ReadBits(CNetworkMessage *this,void *param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
                    /* 0x1062f0  2950  ?ReadBits@CNetworkMessage@@QAEXPAXJ@Z */
  pbVar4 = param_1;
  iVar3 = 0;
  if (0 < param_2) {
    param_1 = (void *)param_2;
    do {
      pbVar5 = *(byte **)(this + 0xc);
      if (*(int *)(this + 0x14) == 0) {
        *(byte **)(this + 0xc) = pbVar5 + 1;
      }
      else {
        pbVar5 = pbVar5 + -1;
      }
      if ((*pbVar5 & (byte)(1 << ((byte)*(int *)(this + 0x14) & 0x1f))) == 0) {
        bVar2 = *pbVar4 & ~('\x01' << ((byte)iVar3 & 0x1f));
      }
      else {
        bVar2 = *pbVar4 | '\x01' << ((byte)iVar3 & 0x1f);
      }
      *pbVar4 = bVar2;
      iVar1 = *(int *)(this + 0x14);
      *(int *)(this + 0x14) = iVar1 + 1;
      if (7 < iVar1 + 1) {
        *(undefined4 *)(this + 0x14) = 0;
      }
      iVar3 = iVar3 + 1;
      if (7 < iVar3) {
        iVar3 = 0;
        pbVar4 = pbVar4 + 1;
      }
      param_1 = (void *)((int)param_1 + -1);
    } while (param_1 != (void *)0x0);
  }
  return;
}

