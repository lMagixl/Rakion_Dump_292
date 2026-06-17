
/* public: void __thiscall CCommunicationInterface::Broadcast_Update_t(void) */

void __thiscall CCommunicationInterface::Broadcast_Update_t(CCommunicationInterface *this)

{
  int iVar1;
  ushort uVar2;
  CListNode *this_00;
  int *piVar3;
  char *pcVar4;
  ushort *puVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  
                    /* 0xfb9d0  1092  ?Broadcast_Update_t@CCommunicationInterface@@QAEXXZ */
  this_00 = FUN_360fef60((int *)&DAT_362cf210);
  if (this_00 == (CListNode *)0x0) {
    return;
  }
  do {
    psVar7 = &DAT_362cd25c;
    uVar6 = 1;
    do {
      if ((*(int *)(psVar7 + -2) == *(int *)(this_00 + 0x41c)) &&
         (*psVar7 == *(short *)(this_00 + 0x420))) {
        CServer::HandleClientDisconected(*(CServer **)(_pNetwork + 0x18),uVar6);
      }
      uVar6 = uVar6 + 1;
      psVar7 = psVar7 + 0x80;
    } while (uVar6 < 0x20);
    uVar6 = 1;
    piVar3 = &DAT_362cd250;
    do {
      if (*piVar3 == 0) {
        iVar8 = uVar6 * 0x100;
        *(undefined4 *)(&DAT_362cd158 + iVar8) = *(undefined4 *)(this_00 + 0x41c);
        *(undefined2 *)(iVar8 + 0x362cd15c) = *(undefined2 *)(this_00 + 0x420);
        puVar5 = (ushort *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar2 = *puVar5 & 0xfff;
        if (((*puVar5 & 0xfff) == 0) || (uVar2 == 0x2f2f)) {
          uVar2 = uVar2 + 1;
        }
        (&DAT_362cd15e)[uVar6 * 0x80] = uVar2 * 0x10 + (short)uVar6;
        *(undefined2 *)(this_00 + 0x422) = 0x2f2f;
        *(undefined2 *)(this_00 + 4) = 0x4e;
        iVar1 = DAT_362cf164;
        DAT_362cf164 = DAT_362cf164 + 1;
        FUN_360fe960(this_00,(undefined4 *)(&DAT_362cd15e + uVar6 * 0x80),2,
                     *(undefined2 *)(this_00 + 4),iVar1,*(undefined2 *)(this_00 + 0x422),2);
        FUN_360ff1a0(&DAT_362cf168,(int *)this_00,1,0);
        *(undefined4 *)(&DAT_362cd150 + iVar8) = 1;
        return;
      }
      uVar6 = uVar6 + 1;
      piVar3 = piVar3 + 0x40;
    } while (uVar6 < 0x20);
    pcVar4 = Translate(s_ETRSServer__Cannot_accept_new_cl_3623586c,4);
    ThrowF_t(pcVar4);
    this_00 = FUN_360fef60((int *)&DAT_362cf210);
  } while (this_00 != (CListNode *)0x0);
  return;
}

