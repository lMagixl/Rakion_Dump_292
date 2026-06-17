
/* public: void __thiscall CNet::SendToOtherNormalClient(unsigned short,class CNetMessage &) */

void __thiscall CNet::SendToOtherNormalClient(CNet *this,ushort param_1,CNetMessage *param_2)

{
  CNetMessage *pCVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uStack_4;
  
                    /* 0x105530  3364  ?SendToOtherNormalClient@CNet@@QAEXGAAVCNetMessage@@@Z */
  uStack_4 = this;
  iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  uStack_4 = (CNet *)CONCAT13(*(undefined1 *)(iVar2 + 0x475c),(undefined3)uStack_4);
  iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  pCVar1 = param_2;
  uVar3 = 0;
  pcVar4 = (char *)(iVar2 + 0x1ac);
  do {
    if (((*(int *)(pcVar4 + 0x2c) == 0) && (*pcVar4 == '\x03')) && ((uint)uStack_4 >> 0x18 != uVar3)
       ) {
      param_2 = (CNetMessage *)CONCAT31(param_2._1_3_,(char)uVar3);
      SendData_Unreliable(this,&param_1,(uchar *)((int)&uStack_4 + 3),(uchar *)&param_2,pCVar1);
      *(undefined2 *)(pCVar1 + 0x3ec) = 0;
    }
    uVar3 = uVar3 + 1;
    pcVar4 = pcVar4 + 0x37c;
  } while ((int)uVar3 < 0x14);
  return;
}

