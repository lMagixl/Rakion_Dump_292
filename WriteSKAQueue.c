
/* public: void __thiscall CEntity::WriteSKAQueue(class CNetworkMessage &) */

void __thiscall CEntity::WriteSKAQueue(CEntity *this,CNetworkMessage *param_1)

{
  CNetworkMessage *pCVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  CNetworkMessage *pCVar5;
  undefined4 *puVar6;
  int local_10;
  int local_c;
  int local_8;
  CEntity *local_4;
  
                    /* 0x127f10  3986  ?WriteSKAQueue@CEntity@@QAEXAAVCNetworkMessage@@@Z */
  pCVar1 = param_1;
  local_4 = this;
  local_10 = FUN_36035f40(*(int *)(this + 0x7c) + 0xbc);
  CNetworkMessage::Write(param_1,&local_10,4);
  local_8 = local_10;
  if (0 < local_10) {
    local_10 = 0;
    do {
      puVar4 = (undefined4 *)(*(int *)(*(int *)(this + 0x7c) + 0xc0) + local_10);
      if ((undefined4 *)(*(int *)(pCVar1 + 4) + *(int *)(pCVar1 + 8)) <
          *(undefined4 **)(pCVar1 + 0xc) + 1) {
        pcVar2 = Translate(s_ETRSWarning__Message_over_writin_362233ac,4);
        CPrintF(pcVar2);
      }
      else {
        **(undefined4 **)(pCVar1 + 0xc) = puVar4[1];
        *(int *)(pCVar1 + 0xc) = *(int *)(pCVar1 + 0xc) + 4;
        *(undefined4 *)(pCVar1 + 0x14) = 0;
        *(int *)(pCVar1 + 0x10) = *(int *)(pCVar1 + 0x10) + 4;
      }
      if ((undefined4 *)(*(int *)(pCVar1 + 4) + *(int *)(pCVar1 + 8)) <
          *(undefined4 **)(pCVar1 + 0xc) + 1) {
        pcVar2 = Translate(s_ETRSWarning__Message_over_writin_362233ac,4);
        CPrintF(pcVar2);
      }
      else {
        **(undefined4 **)(pCVar1 + 0xc) = *puVar4;
        *(int *)(pCVar1 + 0xc) = *(int *)(pCVar1 + 0xc) + 4;
        *(undefined4 *)(pCVar1 + 0x14) = 0;
        *(int *)(pCVar1 + 0x10) = *(int *)(pCVar1 + 0x10) + 4;
      }
      iVar3 = FUN_36035f50((int)(puVar4 + 2));
      if ((int *)(*(int *)(pCVar1 + 4) + *(int *)(pCVar1 + 8)) < *(int **)(pCVar1 + 0xc) + 1) {
        pcVar2 = Translate(s_ETRSWarning__Message_over_writin_362233ac,4);
        CPrintF(pcVar2);
      }
      else {
        **(int **)(pCVar1 + 0xc) = iVar3;
        *(int *)(pCVar1 + 0xc) = *(int *)(pCVar1 + 0xc) + 4;
        *(undefined4 *)(pCVar1 + 0x14) = 0;
        *(int *)(pCVar1 + 0x10) = *(int *)(pCVar1 + 0x10) + 4;
      }
      if (0 < iVar3) {
        param_1 = (CNetworkMessage *)0x0;
        local_c = iVar3;
        do {
          if ((undefined4 *)(*(int *)(pCVar1 + 4) + *(int *)(pCVar1 + 8)) <
              *(undefined4 **)(pCVar1 + 0xc) + 8) {
            pcVar2 = Translate(s_ETRSWarning__Message_over_writin_362233ac,4);
            CPrintF(pcVar2);
          }
          else {
            pCVar5 = param_1 + puVar4[3];
            puVar6 = *(undefined4 **)(pCVar1 + 0xc);
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar6 = *(undefined4 *)pCVar5;
              pCVar5 = pCVar5 + 4;
              puVar6 = puVar6 + 1;
            }
            *(int *)(pCVar1 + 0xc) = *(int *)(pCVar1 + 0xc) + 0x20;
            *(undefined4 *)(pCVar1 + 0x14) = 0;
            *(int *)(pCVar1 + 0x10) = *(int *)(pCVar1 + 0x10) + 0x20;
          }
          param_1 = param_1 + 0x20;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_c = 0;
      }
      local_10 = local_10 + 0x18;
      local_8 = local_8 + -1;
      this = local_4;
    } while (local_8 != 0);
  }
  return;
}

