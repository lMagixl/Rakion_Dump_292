
/* public: void __thiscall CNet::SendToOtherClient(unsigned short,class CNetMessage &) */

void __thiscall CNet::SendToOtherClient(CNet *this,ushort param_1,CNetMessage *param_2)

{
  CNetMessage *pCVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 in_stack_00000006;
  uint uStack_c;
  int *piStack_8;
  char *pcStack_4;
  
                    /* 0x105430  3362  ?SendToOtherClient@CNet@@QAEXGAAVCNetMessage@@@Z */
  iVar3 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  pCVar1 = param_2;
  uStack_c = CONCAT31(uStack_c._1_3_,*(undefined1 *)(iVar3 + 0x475c));
  if (*(int *)(_pRakionWorldNet + 8) != 0) {
    IScavengerWorldNet::SendFieldGameTunnelingAll(_pRakionWorldNet,(ushort)_param_1,param_2);
    *(undefined2 *)(pCVar1 + 0x3ec) = 0;
    iVar3 = IScavengerWorldNet::IsTunneling_Client(_pRakionWorldNet,(uchar)uStack_c);
    if (iVar3 != 0) {
      return;
    }
  }
  iVar3 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  piStack_8 = (int *)(iVar3 + 0x48a4);
  pcStack_4 = (char *)(iVar3 + 0x1ac);
  uVar5 = 0;
  uVar4 = _param_1;
  do {
    if ((((pcStack_4[0x2a] == '\0') && (*pcStack_4 == '\x03')) && ((uStack_c & 0xff) != uVar5)) &&
       (((*piStack_8 != 0 || (sVar2 = (short)uVar4, sVar2 == 0x306)) ||
        ((sVar2 == 0x307 || ((sVar2 == 0x308 || (sVar2 == 0x309)))))))) {
      param_2 = (CNetMessage *)CONCAT31(param_2._1_3_,(char)uVar5);
      SendData_Unreliable(this,&param_1,(uchar *)&uStack_c,(uchar *)&param_2,pCVar1);
      *(undefined2 *)(pCVar1 + 0x3ec) = 0;
      uVar4 = _param_1;
    }
    piStack_8 = piStack_8 + 1;
    uVar5 = uVar5 + 1;
    pcStack_4 = pcStack_4 + 0x37c;
  } while ((int)uVar5 < 0x14);
  return;
}

