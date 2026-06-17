
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CEntity::SendEvent(class CEntityEvent const &,int) */

void __thiscall CEntity::SendEvent(CEntity *this,CEntityEvent *param_1,int param_2)

{
  CEntity *pCVar1;
  CEntityEvent *pCVar2;
  undefined4 *puVar3;
  CEntity CVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  CEntity *pCVar10;
  CEntity CStack_3fd;
  int iStack_3fc;
  undefined4 uStack_3f8;
  CNetMessage aCStack_3f4 [1008];
  undefined4 local_4;
  
                    /* 0x12d760  3278  ?SendEvent@CEntity@@QAEXABVCEntityEvent@@H@Z */
  local_4 = DAT_362abd90;
  if (this == (CEntity *)0x0) {
    return;
  }
  iVar9 = DAT_362fcd40 + 1;
  DAT_362fcd40 = iVar9;
  iVar5 = FUN_3612e880((undefined4 *)&DAT_362fcd38);
  if (iVar5 < iVar9) {
    iVar5 = FUN_3612e880((undefined4 *)&DAT_362fcd38);
    FUN_3612f350(&DAT_362fcd38,iVar5 + _DAT_362fcd44);
  }
  puVar3 = (undefined4 *)(DAT_362fcd3c + -8 + DAT_362fcd40 * 8);
  if (((~(*(uint *)(this + 0x10) >> 0x1c) & 1) != 0) &&
     (iVar5 = (**(code **)(*(int *)param_1 + 0xc))(), iVar5 == 0)) {
    DAT_362fcd40 = DAT_362fcd40 + -1;
    if (DAT_362ccee4 == 0) {
      return;
    }
    pcVar6 = Translate(s_ETRSWARNING__Bad_entity_ID_in_an_36237bb0,4);
    CPrintF(pcVar6);
    return;
  }
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  pCVar10 = (CEntity *)*puVar3;
  if (pCVar10 != (CEntity *)0x0) {
    pCVar1 = pCVar10 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      DeleteSelf(pCVar10);
    }
  }
  *puVar3 = this;
  uVar7 = (**(code **)(*(int *)param_1 + 4))();
  puVar3[1] = uVar7;
  uStack_3f8 = *(undefined4 *)(param_1 + 4);
  pCVar2 = param_1 + 8;
  iStack_3fc = (**(code **)(*(int *)param_1 + 8))();
  iStack_3fc = iStack_3fc + -8;
  if ((((param_2 != 0) && (iVar5 = (**(code **)(*(int *)this + 0x70))(), iVar5 == 0)) &&
      (iVar5 = (**(code **)(*(int *)this + 0x74))(), iVar5 == 0)) &&
     ((iVar5 = (**(code **)(*(int *)this + 0x78))(), iVar5 == 0 &&
      (iVar5 = (**(code **)(*(int *)this + 0x7c))(), iVar5 == 0)))) {
    return;
  }
  CNetMessage::CNetMessage(aCStack_3f4);
  if (param_2 != 0) {
    iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    CStack_3fd = *(CEntity *)(iVar5 + 0x475c);
    CNetMessage::Write(aCStack_3f4,&CStack_3fd,1);
  }
  iVar5 = (**(code **)(*(int *)this + 0x70))();
  if ((iVar5 != 0) && (param_2 != 0)) {
    CStack_3fd = (CEntity)0x1;
    CNetMessage::Write(aCStack_3f4,&CStack_3fd,1);
    CNetMessage::Write(aCStack_3f4,this + 0x264,1);
    CStack_3fd = (CEntity)0x0;
    CNetMessage::Write(aCStack_3f4,&CStack_3fd,1);
    CNetMessage::Write(aCStack_3f4,&uStack_3f8,4);
    CNetMessage::Write(aCStack_3f4,&iStack_3fc,4);
    CNetMessage::Write(aCStack_3f4,pCVar2,(ushort)iStack_3fc);
    CNet::SendToOtherClientReliable((CNet *)(_pNetwork + 0x11ac),0x30c,aCStack_3f4);
  }
  iVar5 = (**(code **)(*(int *)this + 0x74))();
  if ((iVar5 == 0) || (param_2 == 0)) goto LAB_3612da74;
  iVar5 = *(int *)(this + 0xfc);
  CVar4 = SUB41(iVar5,0);
  if (iVar5 == 2) {
    CStack_3fd = CVar4;
    CNetMessage::Write(aCStack_3f4,&CStack_3fd,1);
    pCVar10 = this + 0x264;
LAB_3612da0f:
    CNetMessage::Write(aCStack_3f4,pCVar10,1);
  }
  else {
    if (iVar5 == 3) {
      CStack_3fd = CVar4;
      CNetMessage::Write(aCStack_3f4,&CStack_3fd,1);
      iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
      CStack_3fd = *(CEntity *)(iVar5 + 0x2e);
      pCVar10 = &CStack_3fd;
      goto LAB_3612da0f;
    }
    if (iVar5 == 4) {
      CStack_3fd = CVar4;
      CNetMessage::Write(aCStack_3f4,&CStack_3fd,1);
      iVar5 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
      CStack_3fd = *(CEntity *)(iVar5 + 0x2e);
      pCVar10 = &CStack_3fd;
      goto LAB_3612da0f;
    }
  }
  CNetMessage::Write(aCStack_3f4,this + 0x265,1);
  CNetMessage::Write(aCStack_3f4,&uStack_3f8,4);
  CNetMessage::Write(aCStack_3f4,&iStack_3fc,4);
  CNetMessage::Write(aCStack_3f4,pCVar2,(ushort)iStack_3fc);
  CNet::SendToOtherClientReliable((CNet *)(_pNetwork + 0x11ac),0x30c,aCStack_3f4);
LAB_3612da74:
  uVar8 = (**(code **)(*(int *)this + 0x78))();
  if ((param_2 & uVar8) != 0) {
    CStack_3fd = (CEntity)0x6;
    CNetMessage::Write(aCStack_3f4,&CStack_3fd,1);
    CNetMessage::Write(aCStack_3f4,this + 0x264,1);
    CNetMessage::Write(aCStack_3f4,this + 0x265,1);
    CNetMessage::Write(aCStack_3f4,&uStack_3f8,4);
    CNetMessage::Write(aCStack_3f4,&iStack_3fc,4);
    CNetMessage::Write(aCStack_3f4,pCVar2,(ushort)iStack_3fc);
    CNet::SendToOtherClientReliable((CNet *)(_pNetwork + 0x11ac),0x30c,aCStack_3f4);
  }
  uVar8 = (**(code **)(*(int *)this + 0x7c))();
  if ((param_2 & uVar8) != 0) {
    CStack_3fd = (CEntity)0x7;
    CNetMessage::Write(aCStack_3f4,&CStack_3fd,1);
    CNetMessage::Write(aCStack_3f4,this + 0x264,1);
    CNetMessage::Write(aCStack_3f4,this + 0x265,1);
    CNetMessage::Write(aCStack_3f4,&uStack_3f8,4);
    CNetMessage::Write(aCStack_3f4,&iStack_3fc,4);
    CNetMessage::Write(aCStack_3f4,pCVar2,(ushort)iStack_3fc);
    CNet::SendToOtherClientReliable((CNet *)(_pNetwork + 0x11ac),0x30c,aCStack_3f4);
  }
  return;
}

