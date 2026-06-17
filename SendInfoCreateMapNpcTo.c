
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CSessionState::SendInfoCreateMapNpcTo(unsigned long,unsigned
   short,unsigned char) */

void __thiscall
CSessionState::SendInfoCreateMapNpcTo
          (CSessionState *this,ulong param_1,ushort param_2,uchar param_3)

{
  int iVar1;
  int iVar2;
  CSessionState *pCVar3;
  uchar uStack_3f9;
  CEntity *pCStack_3f8;
  CNetMessage aCStack_3f4 [1008];
  undefined4 local_4;
  
                    /* 0x10e970  3324  ?SendInfoCreateMapNpcTo@CSessionState@@QAEXKGE@Z */
  local_4 = DAT_362abd90;
  iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  uStack_3f9 = *(uchar *)(iVar1 + 0x475c);
  pCVar3 = this + 0x2048;
  iVar1 = 0x41;
  do {
    if (*(ulong *)pCVar3 != 0xffffffff) {
      iVar2 = CWorld::EntityExists((CWorld *)(_pNetwork + 0x11e4),*(ulong *)pCVar3,&pCStack_3f8);
      if (iVar2 == 0) {
        MessageBoxA((HWND)0x0,s_CSessionState__SendInfoCreateMap_362378e0,s_Error_362378d8,0);
      }
      else {
        CNetMessage::CNetMessage(aCStack_3f4);
        (**(code **)(*(int *)pCStack_3f8 + 4))(aCStack_3f4);
        CNet::SendPacket_Reliable
                  ((CNet *)(_pNetwork + 0x11ac),(ushort *)&DAT_36237374,&uStack_3f9,&param_3,
                   aCStack_3f4);
      }
    }
    pCVar3 = pCVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

