
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSessionState::HandleMessage(int,unsigned short,unsigned long,class
   CNetMessage &,unsigned long,unsigned short) */

void __thiscall
CSessionState::HandleMessage
          (CSessionState *this,int param_1,ushort param_2,ulong param_3,CNetMessage *param_4,
          ulong param_5,ushort param_6)

{
  CSessionState *this_00;
  char cVar1;
  ulong uVar2;
  CEntity *pCVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 auStack_8e0 [243];
  undefined4 uStack_514;
  uint uStack_510;
  CEntity *pCStack_50c;
  uint uStack_508;
  ushort *puVar8;
  ushort *puVar9;
  CEntity **ppCVar10;
  undefined1 local_4d9;
  ushort local_4d8 [2];
  uint local_4d4;
  undefined1 local_4cd;
  CEntity *local_4cc;
  char local_4c6;
  byte local_4c5;
  CEntity *local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined1 local_4b4 [4];
  undefined1 local_4b0 [4];
  undefined1 local_4ac [7];
  undefined1 uStack_4a5;
  int local_4a4;
  CSessionState *local_4a0;
  uint local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_490;
  CEntity *local_48c;
  CPlacement3D local_488 [4];
  float local_484;
  float local_480;
  float local_47c;
  CPlacement3D local_470 [24];
  undefined1 local_458 [48];
  undefined4 uStack_428;
  CNetMessage local_410 [1024];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x112490  2237  ?HandleMessage@CSessionState@@QAEXHGKAAVCNetMessage@@KG@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218365;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  switch(param_2) {
  case 0x307:
    ExceptionList = &local_c;
    CNetMessage::CNetMessage(local_410);
    CNetMessage::Read(param_4,&local_4d4,1);
    CNetMessage::Read(param_4,&local_4c4,1);
    CNetMessage::Read(param_4,local_4d8,2);
    CNetMessage::Read(param_4,&local_4c0,4);
    CNetMessage::Read(param_4,&local_4bc,4);
    CNetMessage::Read(param_4,&local_4b8,4);
    CNetMessage::Read(param_4,local_4b4,4);
    CNetMessage::Read(param_4,local_4b0,4);
    CNetMessage::Read(param_4,local_4ac,4);
    CNetMessage::operator>>(param_4,local_410);
    uStack_508 = (uint)local_4d8[0];
    pCStack_50c = local_4c4;
    uStack_510 = local_4d4;
    uStack_514 = 0x361125bf;
    AddRemoteGeneralNpc(this);
    iVar4 = CWorld::EntityExists
                      ((CWorld *)(_pNetwork + 0x11e4),
                       *(ulong *)(this + ((local_4d4 & 0xff) * 9 + ((uint)local_4c4 & 0xff)) * 4 +
                                         0x1d70),&local_4cc);
    if (iVar4 != 0) {
      (**(code **)(*(int *)local_4cc + 0x118))();
      CEntity::Initialize(local_4cc,_eeVoid,0);
    }
    break;
  case 0x308:
    ExceptionList = &local_c;
    CNetMessage::CNetMessage(local_410);
    CNetMessage::Read(param_4,local_4d8,1);
    CNetMessage::Read(param_4,&local_4d4,1);
    CNetMessage::Read(param_4,&local_4cc,2);
    CNetMessage::Read(param_4,&local_4c0,4);
    CNetMessage::Read(param_4,&local_4bc,4);
    CNetMessage::Read(param_4,&local_4b8,4);
    CNetMessage::Read(param_4,local_4b4,4);
    CNetMessage::Read(param_4,local_4b0,4);
    CNetMessage::Read(param_4,local_4ac,4);
    CNetMessage::operator>>(param_4,local_410);
    uStack_508 = (uint)local_4cc & 0xffff;
    pCStack_50c = (CEntity *)local_4d4;
    uStack_510 = 0x3611280b;
    AddRemoteMasterGolem(this);
    iVar4 = CWorld::EntityExists
                      ((CWorld *)(_pNetwork + 0x11e4),
                       *(ulong *)(this + (local_4d4 & 0xff) * 4 + 0x2040),&local_4c4);
    if (iVar4 != 0) {
      (**(code **)(*(int *)local_4c4 + 0x118))();
    }
    break;
  case 0x309:
    ExceptionList = &local_c;
    CNetMessage::CNetMessage(local_410);
    CNetMessage::Read(param_4,local_4d8,1);
    CNetMessage::Read(param_4,&local_4d4,1);
    CNetMessage::Read(param_4,&local_4cc,2);
    CNetMessage::Read(param_4,&local_4c0,4);
    CNetMessage::Read(param_4,&local_4bc,4);
    CNetMessage::Read(param_4,&local_4b8,4);
    CNetMessage::Read(param_4,local_4b4,4);
    CNetMessage::Read(param_4,local_4b0,4);
    CNetMessage::Read(param_4,local_4ac,4);
    CNetMessage::operator>>(param_4,local_410);
    uStack_508 = (uint)local_4cc & 0xffff;
    pCStack_50c = (CEntity *)local_4d4;
    uStack_510 = 0x361126ff;
    AddRemoteMapNpc(this);
    pCVar3 = GetMapNpc(this,local_4d4 & 0xff);
    if (pCVar3 != (CEntity *)0x0) {
      (**(code **)(*(int *)pCVar3 + 0x118))();
    }
    break;
  case 0x30a:
    puVar7 = auStack_8e0;
    for (iVar4 = 0xfb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *(undefined4 *)param_4;
      param_4 = param_4 + 4;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = *(undefined2 *)param_4;
    ExceptionList = &local_c;
    GetActionFromMessage(this,local_458);
    if ((local_4a4._0_1_ != this[0x2946]) &&
       (pCVar3 = GetPlayer(this,(uchar)local_4a4._0_1_), pCVar3 != (CEntity *)0x0)) {
      (**(code **)(*(int *)pCVar3 + 0x1b4))();
      (**(code **)(*(int *)pCVar3 + 0x1b8))();
      piVar5 = (int *)(**(code **)(*(int *)pCVar3 + 0x1c4))();
      if (piVar5 != (int *)0x0) {
        local_494 = uStack_428;
        local_498 = 0;
        local_490 = 0;
        local_4c0 = 0;
        local_4bc = 0;
        local_4b8 = 0;
        uStack_508 = 0x361129e6;
        (**(code **)(*piVar5 + 0x194))();
      }
    }
    break;
  case 0x30b:
    local_4c0 = 0;
    local_4bc = 0;
    local_4b8 = 0;
    local_498 = 0;
    local_494 = 0;
    local_490 = 0;
    ExceptionList = &local_c;
    CPlacement3D::CPlacement3D
              (local_488,(Vector<float,3> *)&local_498,(Vector<float,3> *)&local_4c0);
    CNetMessage::Read(param_4,&local_4c4,2);
    CNetMessage::Read(param_4,&local_4cd,1);
    CNetMessage::Read(param_4,&local_4cc,1);
    CNetMessage::Read(param_4,&local_4d9,1);
    CNetMessage::Read(param_4,&local_4d4,2);
    UnpackFloatToSWord((short)local_4d4,(float *)local_488);
    CNetMessage::Read(param_4,&local_4d4,2);
    UnpackFloatToSWord((short)local_4d4,&local_484);
    CNetMessage::Read(param_4,&local_4d4,2);
    UnpackFloatToSWord((short)local_4d4,&local_480);
    CNetMessage::Read(param_4,&local_4d4,2);
    local_4a4 = (int)(short)local_4d4;
    local_47c = (float)local_4a4;
    if (local_4cd == '\x02') {
      uVar2 = *(ulong *)(this + (((uint)local_4cc & 0xff) * 9 + (uint)local_4d9) * 4 + 0x1d70);
    }
    else if (local_4cd == '\x03') {
      uVar2 = *(ulong *)(this + (uint)local_4d9 * 4 + 0x2048);
    }
    else {
      if (local_4cd != '\x04') {
        ExceptionList = local_c;
        return;
      }
      uVar2 = *(ulong *)(this + (uint)local_4d9 * 4 + 0x2040);
    }
    if ((uVar2 != 0xffffffff) &&
       (iVar4 = CWorld::EntityExists((CWorld *)(_pNetwork + 0x11e4),uVar2,&local_48c), iVar4 != 0))
    {
      uStack_508 = 0x36112bf6;
      (**(code **)(*(int *)local_48c + 0x194))();
      *(float *)(local_48c + 0x354) = (float)((uint)local_4c4 & 0xffff) * _DAT_362253e4;
      ExceptionList = local_c;
      return;
    }
    if (local_4cd != '\x03') {
      if (local_4cd != '\x04') {
        ExceptionList = local_c;
        return;
      }
      local_4c0 = 0;
      local_4bc = 0;
      local_4b8 = 0;
      local_498 = 0;
      local_494 = 0;
      local_490 = 0;
      CPlacement3D::CPlacement3D
                (local_470,(Vector<float,3> *)&local_498,(Vector<float,3> *)&local_4c0);
      uStack_508 = 0xffffffff;
      pCStack_50c = (CEntity *)0x0;
      uStack_510 = 0x36112d65;
      AddRemoteMasterGolem(this);
      uStack_508 = 0xffffffff;
      pCStack_50c = (CEntity *)0x1;
      uStack_510 = 0x36112d9b;
      AddRemoteMasterGolem(this);
      ExceptionList = local_c;
      return;
    }
    (**(code **)(*(int *)_pRakionWorldNet + 8))();
    (**(code **)(*(int *)_pRakionWorldNet + 8))();
    (**(code **)(*(int *)_pRakionWorldNet + 8))();
    CNetMessage::CNetMessage(local_410);
    iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    local_4d8[0] = CONCAT11(local_4d8[0]._1_1_,*(undefined1 *)(iVar4 + 0x475c));
    CNetMessage::Write(local_410,local_4d8,1);
    uStack_4a5 = 3;
    CNetMessage::Write(local_410,&uStack_4a5,1);
    CNetMessage::Write(local_410,&local_4d9,1);
    ppCVar10 = &local_4cc;
    puVar9 = local_4d8;
    puVar8 = (ushort *)&DAT_36237378;
    goto LAB_36112cb8;
  case 0x30c:
    ExceptionList = &local_c;
    CNetMessage::Read(param_4,&local_4cc,1);
    CNetMessage::Read(param_4,local_4d8,1);
    CNetMessage::Read(param_4,&local_4a4,1);
    CNetMessage::Read(param_4,&local_48c,1);
    CNetMessage::Read(param_4,&local_4c4,4);
    CNetMessage::Read(param_4,&local_4d4,4);
    CNetMessage::Read(param_4,local_410,(ushort)local_4d4);
    uStack_508 = 0x361128e7;
    HandleMsgEvent(this,(uint)(byte)local_4d8[0]._0_1_,(uchar)local_4a4._0_1_,(uchar)local_48c,
                   (long)local_4c4,(uchar *)local_410,local_4d4);
    break;
  case 0x30f:
    ExceptionList = &local_c;
    CNetMessage::Read(param_4,local_4d8,1);
    if ((local_4d8[0]._0_1_ != this[0x2946]) &&
       (piVar5 = *(int **)((uint)(byte)local_4d8[0]._0_1_ * 0x100 + 4 +
                          *(int *)(*(int *)(_pNetwork + 0x18) + 0x10)), piVar5 != (int *)0x0)) {
      (**(code **)(*piVar5 + 0x1c0))();
    }
    break;
  case 0x310:
    ExceptionList = &local_c;
    CNetMessage::Read(param_4,&local_4cd,1);
    CNetMessage::Read(param_4,local_4d8,1);
    if (local_4d8[0]._0_1_ != (CSessionState)0x3) {
      ExceptionList = local_c;
      return;
    }
    CNetMessage::Read(param_4,&local_4cc,1);
    pCVar3 = GetMapNpc(this,(uint)local_4cc & 0xff);
    if (pCVar3 == (CEntity *)0x0) {
      ExceptionList = local_c;
      return;
    }
    iVar4 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    local_4d9 = *(byte *)(iVar4 + 0x475c);
    CNetMessage::CNetMessage(local_410);
    (**(code **)(*(int *)pCVar3 + 4))();
    ppCVar10 = (CEntity **)&local_4cd;
    puVar9 = (ushort *)&local_4d9;
    puVar8 = (ushort *)&DAT_36237374;
LAB_36112cb8:
    CNet::SendPacket_Reliable
              ((CNet *)(_pNetwork + 0x11ac),puVar8,(uchar *)puVar9,(uchar *)ppCVar10,local_410);
    break;
  case 0x312:
    ExceptionList = &local_c;
    BuildMapItemList(this);
    CNetMessage::Read(param_4,&local_4c5,1);
    local_4d4 = 0;
    if (local_4c5 != 0) {
      this_00 = this + 0x2960;
      local_4a0 = this_00;
      do {
        local_49c = local_49c & 0xffffff00;
        local_4c6 = '\0';
        CNetMessage::Read(param_4,&local_49c,1);
        CNetMessage::Read(param_4,&local_4c6,1);
        iVar6 = 0;
        local_4a4 = 0;
        local_4 = 0;
        iVar4 = FUN_360caf20((int)this_00);
        if (0 < iVar4) {
          cVar1 = (char)local_49c;
          do {
            piVar5 = (int *)FUN_360cafb0(this_00,iVar6);
            if (cVar1 == (char)piVar5[0x99]) {
              local_4a4 = iVar6;
              (**(code **)(*piVar5 + 0xc))();
              break;
            }
            iVar6 = iVar6 + 1;
            iVar4 = FUN_360caf20((int)this_00);
          } while (iVar6 < iVar4);
        }
        local_4 = 0xffffffff;
        local_4a4 = -1;
        local_4d4 = local_4d4 + 1;
      } while ((int)local_4d4 < (int)(uint)local_4c5);
    }
  }
  ExceptionList = local_c;
  return;
}

