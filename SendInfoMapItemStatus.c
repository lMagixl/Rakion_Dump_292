
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CSessionState::SendInfoMapItemStatus(unsigned long,unsigned
   short,unsigned char) */

void __thiscall
CSessionState::SendInfoMapItemStatus(CSessionState *this,ulong param_1,ushort param_2,uchar param_3)

{
  CSessionState *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  uchar uStack_40a;
  CSessionState CStack_409;
  int iStack_408;
  CSessionState *pCStack_404;
  CNetMessage aCStack_400 [1008];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x112370  3327  ?SendInfoMapItemStatus@CSessionState@@QAEXKGE@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_36218350;
  pvStack_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  uStack_40a = *(uchar *)(iVar1 + 0x475c);
  BuildMapItemList(this);
  if (*(int *)(this + 0x295c) != 0) {
    CNetMessage::CNetMessage(aCStack_400);
    CStack_409 = this[0x295c];
    CNetMessage::Write(aCStack_400,&CStack_409,1);
    this_00 = this + 0x2960;
    iVar3 = 0;
    iStack_408 = 0;
    uStack_4 = 0;
    pCStack_404 = this_00;
    iVar1 = FUN_360caf20((int)this_00);
    if (0 < iVar1) {
      do {
        piVar2 = (int *)FUN_360cafb0(this_00,iVar3);
        (**(code **)(*piVar2 + 8))(aCStack_400);
        iVar3 = iVar3 + 1;
        iStack_408 = iVar3;
        iVar1 = FUN_360caf20((int)this_00);
      } while (iVar3 < iVar1);
    }
    uStack_4 = 0xffffffff;
    CNet::SendPacket_Reliable
              ((CNet *)(_pNetwork + 0x11ac),(ushort *)&DAT_3623737c,&uStack_40a,&param_3,aCStack_400
              );
  }
  ExceptionList = pvStack_c;
  return;
}

