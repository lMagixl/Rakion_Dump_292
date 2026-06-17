
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CSessionState::SendInfoCreateMasterGolemTo(unsigned long,unsigned
   short,unsigned char) */

void __thiscall
CSessionState::SendInfoCreateMasterGolemTo
          (CSessionState *this,ulong param_1,ushort param_2,uchar param_3)

{
  int iVar1;
  int iVar2;
  CSessionState *pCVar3;
  undefined4 uStack_808;
  CEntity *pCStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined1 auStack_7ec [4];
  uint uStack_7e8;
  CNetMessage aCStack_7e4 [1008];
  CNetMessage aCStack_3f4 [1008];
  undefined4 local_4;
  
                    /* 0x10feb0  3325  ?SendInfoCreateMasterGolemTo@CSessionState@@QAEXKGE@Z */
  local_4 = DAT_362abd90;
  iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  uStack_808 = CONCAT13(*(undefined1 *)(iVar1 + 0x475c),(undefined3)uStack_808);
  pCVar3 = this + 0x2040;
  iVar1 = 0;
  do {
    if (*(ulong *)pCVar3 != 0xffffffff) {
      iVar2 = CWorld::EntityExists((CWorld *)(_pNetwork + 0x11e4),*(ulong *)pCVar3,&pCStack_804);
      if (iVar2 == 0) {
        MessageBoxA((HWND)0x0,s_CSessionState__SendInfoCreateMas_36237910,s_Error_36237908,0);
      }
      else {
        uStack_7e8 = (uint)*(ushort *)(*(int *)(*(int *)(pCStack_804 + 0x78) + 0x20) + 0x28);
        CNetMessage::CNetMessage(aCStack_3f4);
        (**(code **)(*(int *)pCStack_804 + 0x114))(aCStack_3f4);
        pCStack_804 = *(CEntity **)(uStack_808 + 0x3c);
        uStack_800 = *(undefined4 *)(uStack_808 + 0x40);
        uStack_7fc = *(undefined4 *)(uStack_808 + 0x44);
        uStack_7f8 = *(undefined4 *)(uStack_808 + 0x48);
        uStack_7f4 = *(undefined4 *)(uStack_808 + 0x4c);
        uStack_7f0 = *(undefined4 *)(uStack_808 + 0x50);
        CNetMessage::CNetMessage((CNetMessage *)&uStack_7e8);
        iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
        uStack_808._0_3_ = CONCAT12(*(undefined1 *)(iVar2 + 0x2e),(undefined2)uStack_808);
        CNetMessage::Write(aCStack_7e4,(void *)((int)&uStack_808 + 2),1);
        uStack_808._0_2_ = CONCAT11((char)iVar1,(undefined1)uStack_808);
        CNetMessage::Write(aCStack_7e4,(void *)((int)&uStack_808 + 1),1);
        CNetMessage::Write(aCStack_7e4,&uStack_7e8,2);
        CNetMessage::Write(aCStack_7e4,&uStack_800,4);
        CNetMessage::Write(aCStack_7e4,&uStack_7fc,4);
        CNetMessage::Write(aCStack_7e4,&uStack_7f8,4);
        CNetMessage::Write(aCStack_7e4,&uStack_7f4,4);
        CNetMessage::Write(aCStack_7e4,&uStack_7f0,4);
        CNetMessage::Write(aCStack_7e4,auStack_7ec,4);
        CNetMessage::operator<<(aCStack_7e4,aCStack_3f4);
        CNet::SendPacket_Reliable
                  ((CNet *)(_pNetwork + 0x11ac),(ushort *)&DAT_36237370,
                   (uchar *)((int)&uStack_808 + 3),&param_3,aCStack_7e4);
      }
    }
    iVar1 = iVar1 + 1;
    pCVar3 = pCVar3 + 4;
  } while (iVar1 < 2);
  return;
}

