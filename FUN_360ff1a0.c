
undefined4 __thiscall FUN_360ff1a0(void *this,int *param_1,int param_2,int param_3)

{
  CListNode *pCVar1;
  byte bVar2;
  int *piVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  long lVar4;
  int iVar5;
  undefined3 extraout_var_01;
  uint uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  CListNode *this_00;
  char *pcVar7;
  undefined4 local_8 [2];
  
  if (param_2 == 0) {
    piVar3 = (int *)CTimer::GetHighPrecisionTimer(_pTimer);
    param_1[6] = *piVar3;
    param_1[7] = piVar3[1];
  }
  else {
    piVar3 = (int *)FUN_360fed70(this,local_8);
    param_1[6] = *piVar3;
    param_1[7] = piVar3[1];
  }
  if (param_3 != 0) {
    bVar2 = FUN_360feaa0((int)param_1);
    if ((CONCAT31(extraout_var,bVar2) != 0) &&
       (bVar2 = FUN_360feab0(extraout_ECX), CONCAT31(extraout_var_00,bVar2) == 0)) {
      lVar4 = CListHead::Count((CListHead *)((int)this + 8));
      if (lVar4 == 0) {
        if (DAT_362ccecc == 0) {
          return 0;
        }
        pcVar7 = s_I_ETRSUnreliable_packet_out_of_o_36235b2a + 2;
      }
      else {
        if ((*(int *)(*(int *)((int)this + 0x10) + 4) == 0) ||
           (*param_1 - *(int *)(*(int *)((int)this + 0x10) + -0x414) == 1)) goto LAB_360ff318;
        if (DAT_362ccecc == 0) {
          return 0;
        }
        pcVar7 = s_ETRSUnreliable_packet_out_of_ord_36235b64;
      }
      pcVar7 = Translate(pcVar7,4);
      CPrintF(pcVar7);
      return 0;
    }
    iVar5 = CListHead::IsEmpty((CListHead *)((int)this + 8));
    if (iVar5 == 0) {
      this_00 = *(CListNode **)((int)this + 0x10);
      while (pCVar1 = *(CListNode **)(this_00 + 4), pCVar1 != (CListNode *)0x0) {
        bVar2 = FUN_360feaa0((int)(this_00 + -0x414));
        if ((CONCAT31(extraout_var_01,bVar2) == 0) ||
           (uVar6 = FUN_360feac0(extraout_ECX_00), uVar6 != 0)) break;
        CListNode::Remove(this_00);
        *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + -1;
        if (((byte)this_00[-0x410] & 2) != 0) {
          *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
        }
        *(int *)this = *(int *)this + (0xc - *(int *)(this_00 + -0x40c));
        if (DAT_362ccecc != 0) {
          pcVar7 = Translate(s_ETRSPackets_received_out_of_orde_36235ba0,4);
          CPrintF(pcVar7);
        }
        FUN_360ff0d0(this_00 + -0x414);
        this_00 = pCVar1;
      }
    }
  }
LAB_360ff318:
  CListHead::AddTail((CListHead *)((int)this + 8),(CListNode *)(param_1 + 0x105));
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  if ((*(byte *)(param_1 + 1) & 2) != 0) {
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  }
  *(int *)this = *(int *)this + param_1[2] + -0xc;
  return 1;
}

