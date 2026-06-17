
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CCommunicationInterface::UpdateMasterBuffers(void) */

void __thiscall CCommunicationInterface::UpdateMasterBuffers(CCommunicationInterface *this)

{
  double dVar1;
  longlong *plVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int *this_00;
  u_long uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char *local_458;
  uint uStack_454;
  char *local_450;
  uint uStack_44c;
  double local_448;
  u_long local_440;
  u_short local_43c;
  int local_438;
  char *local_434 [3];
  sockaddr local_428;
  char local_418 [1020];
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0xfc360  3913  ?UpdateMasterBuffers@CCommunicationInterface@@QAEXXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_362172c3;
  local_14 = ExceptionList;
  local_1c = DAT_362abd90;
  local_438 = 0x10;
  ExceptionList = &local_14;
  if (DAT_362a630c != 0) {
    DAT_362cf3e4 = 0;
    ExceptionList = &local_14;
    plVar2 = (longlong *)CTimer::GetHighPrecisionTimer(_pTimer);
    DAT_362a630c = 0;
    _DAT_362cf3e0 = (float)((float10)*plVar2 / (float10)*(longlong *)_pTimer);
  }
  if (*(int *)(this + 4) != 0) {
    while( true ) {
      uVar3 = recvfrom(*(SOCKET *)(this + 0x88),local_418,0x3f4,0,&local_428,&local_438);
      puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      local_458 = (char *)*puVar4;
      uStack_454 = puVar4[1];
      local_440 = ntohl(CONCAT22(local_428.sa_data._4_2_,local_428.sa_data._2_2_));
      local_43c = ntohs(local_428.sa_data._0_2_);
      if (uVar3 == 0xffffffff) break;
      if (uVar3 < 0xd) {
        if (DAT_362ccee4 != 0) {
          puVar4 = (undefined4 *)AddressToString((ulong)local_434);
          uVar13 = *puVar4;
          local_c = 1;
          pcVar5 = Translate(s_ETRSWARNING__Bad_UDP_packet_from_362359cc,4);
          CPrintF(pcVar5,uVar13);
          local_c = 0xffffffff;
          StringFree(local_434[0]);
        }
      }
      else {
        if ((_DAT_362ccefc < _DAT_3622376c == (_DAT_362ccefc == _DAT_3622376c)) &&
           (local_450 = (char *)rand_(), (float)(int)local_450 * _DAT_3623193c <= _DAT_362ccefc))
        goto LAB_360fc627;
        local_448 = (double)CONCAT44(uStack_454,local_458);
        dVar1 = local_448 / (double)*(longlong *)_pTimer - (double)_DAT_362cf3e0;
        if (dVar1 < _DAT_36227d28 == (dVar1 == _DAT_36227d28)) {
          CNetworkLibrary::AddBandwidthGraphValue(_pNetwork,DAT_362cf3e4);
          _DAT_362cf3e0 =
               (float)((float10)_DAT_362cf3e0 +
                      ((float10)local_448 / (float10)*(longlong *)_pTimer - (float10)_DAT_362cf3e0))
          ;
          DAT_362cf3e4 = uVar3;
        }
        else {
          DAT_362cf3e4 = DAT_362cf3e4 + uVar3;
        }
        this_00 = (int *)FUN_360ff4d0();
        FUN_360fe9e0(this_00,(undefined4 *)local_418,uVar3);
        this_00[0x107] = local_440;
        *(u_short *)(this_00 + 0x108) = local_43c;
        if (DAT_362ccecc != 0) {
          iVar8 = this_00[2];
          uVar3 = (uint)*(ushort *)(this_00 + 1);
          uVar9 = (uint)*(ushort *)((int)this_00 + 0x422);
          iVar11 = *this_00;
          uVar10 = __alldiv((uint)local_458,uStack_454,*(uint *)_pTimer,*(uint *)(_pTimer + 4));
          CPrintF(s__lu__Received_sequence___d_from_I_362359f8,(int)uVar10 * 1000,iVar11,uVar9,uVar3
                  ,iVar8);
        }
        FUN_360ff1a0(this + 0x50,this_00,0,0);
      }
    }
    iVar8 = WSAGetLastError();
    if ((iVar8 != 0x2733) && ((iVar8 != 0x2746 || (DAT_362ccee0 != 0)))) {
      puVar4 = (undefined4 *)GetSocketError(this,(long)&local_450);
      uVar13 = *puVar4;
      local_c = 0;
      pcVar5 = Translate(s_ETRSSocket_error_during_UDP_rece_362359a0,4);
      CPrintF(pcVar5,uVar13);
      pcVar5 = local_450;
      goto LAB_360fc7e3;
    }
  }
LAB_360fc627:
  iVar8 = *(int *)(this + 0x2c);
  while( true ) {
    if (iVar8 == 0) {
      ExceptionList = local_14;
      return;
    }
    puVar4 = (undefined4 *)FUN_360febf0((int)(this + 0x18));
    local_428.sa_family = 2;
    uVar6 = htonl(puVar4[0x107]);
    local_428.sa_data._2_2_ = SUB42(uVar6,0);
    local_428.sa_data._4_2_ = SUB42(uVar6 >> 0x10,0);
    local_428.sa_data._0_2_ = htons(*(u_short *)(puVar4 + 0x108));
    uVar7 = sendto(*(SOCKET *)(this + 0x88),(char *)(puVar4 + 8),puVar4[2],0,&local_428,0x10);
    *(undefined4 *)(this + 4) = 1;
    plVar2 = (longlong *)CTimer::GetHighPrecisionTimer(_pTimer);
    local_458 = *(char **)plVar2;
    uStack_454 = *(uint *)((int)plVar2 + 4);
    if (uVar7 == 0xffffffff) break;
    local_448 = (double)*plVar2;
    local_450 = *(char **)_pTimer;
    uStack_44c = *(uint *)(_pTimer + 4);
    dVar1 = local_448 / (double)*(longlong *)_pTimer - (double)_DAT_362cf3e0;
    if (dVar1 < _DAT_36227d28 == (dVar1 == _DAT_36227d28)) {
      CNetworkLibrary::AddBandwidthGraphValue(_pNetwork,DAT_362cf3e4);
      local_450 = *(char **)_pTimer;
      uStack_44c = *(uint *)(_pTimer + 4);
      _DAT_362cf3e0 =
           (float)(((float10)local_448 / (float10)*(longlong *)_pTimer - (float10)_DAT_362cf3e0) +
                  (float10)_DAT_362cf3e0);
      DAT_362cf3e4 = uVar7;
    }
    else {
      DAT_362cf3e4 = DAT_362cf3e4 + uVar7;
    }
    if (DAT_362ccecc != 0) {
      uVar13 = puVar4[2];
      uVar3 = (uint)*(ushort *)(puVar4 + 1);
      uVar9 = (uint)*(ushort *)((int)puVar4 + 0x422);
      uVar12 = *puVar4;
      uVar10 = __alldiv((uint)local_458,uStack_454,(uint)local_450,uStack_44c);
      CPrintF(s__lu__Sent_sequence___d_to_ID___d_36235a68,(int)uVar10 * 1000,uVar12,uVar9,uVar3,
              uVar13);
    }
    FUN_360ff390(this + 0x18,1);
    iVar8 = *(int *)(this + 0x2c);
  }
  iVar8 = WSAGetLastError();
  if (iVar8 == 0x2733) {
    ExceptionList = local_14;
    return;
  }
  if ((iVar8 == 0x2746) && (DAT_362ccee0 == 0)) {
    ExceptionList = local_14;
    return;
  }
  puVar4 = (undefined4 *)GetSocketError(this,(long)&local_458);
  uVar13 = *puVar4;
  local_c = 2;
  pcVar5 = Translate(s_ETRSSocket_error_during_UDP_send_36235a40,4);
  CPrintF(pcVar5,uVar13);
  pcVar5 = local_458;
LAB_360fc7e3:
  local_c = 0xffffffff;
  StringFree(pcVar5);
  ExceptionList = local_14;
  return;
}

