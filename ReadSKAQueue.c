
/* public: void __thiscall CEntity::ReadSKAQueue(class CNetworkMessage &) */

void __thiscall CEntity::ReadSKAQueue(CEntity *this,CNetworkMessage *param_1)

{
  void *pvVar1;
  CNetworkMessage *this_00;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  CNetworkMessage *pCVar9;
  int local_10;
  CNetworkMessage *local_c;
  int local_8;
  CEntity *local_4;
  
                    /* 0x12e420  2983  ?ReadSKAQueue@CEntity@@QAEXAAVCNetworkMessage@@@Z */
  this_00 = param_1;
  local_4 = this;
  CNetworkMessage::Read(param_1,&param_1,4);
  *(undefined4 *)(*(int *)(this + 0x7c) + 0xc4) = 0;
  if (0 < (int)param_1) {
    local_c = param_1;
    do {
      iVar3 = *(int *)(this + 0x7c);
      puVar6 = (undefined4 *)(iVar3 + 0xbc);
      iVar5 = *(int *)(iVar3 + 0xc4) + 1;
      *(int *)(iVar3 + 0xc4) = iVar5;
      iVar2 = FUN_36036060(puVar6);
      if (iVar2 < iVar5) {
        iVar2 = FUN_36036060(puVar6);
        FUN_36036b40(puVar6,iVar2 + *(int *)(iVar3 + 200));
      }
      pvVar1 = (void *)(*(int *)(iVar3 + 0xc0) + -0x18 + *(int *)(iVar3 + 0xc4) * 0x18);
      *(undefined4 *)((int)pvVar1 + 0x10) = 0;
      CNetworkMessage::Read(this_00,(void *)((int)pvVar1 + 4),4);
      CNetworkMessage::Read(this_00,pvVar1,4);
      CNetworkMessage::Read(this_00,&local_8,4);
      if (0 < local_8) {
        param_1 = (CNetworkMessage *)0x0;
        local_10 = local_8;
        do {
          puVar6 = (undefined4 *)((int)pvVar1 + 8);
          iVar2 = *(int *)((int)pvVar1 + 0x10) + 1;
          *(int *)((int)pvVar1 + 0x10) = iVar2;
          iVar3 = FUN_36036080(puVar6);
          if (iVar3 < iVar2) {
            iVar3 = FUN_36036080(puVar6);
            FUN_36036480(puVar6,iVar3 + *(int *)((int)pvVar1 + 0x14));
          }
          puVar6 = (undefined4 *)
                   (*(int *)((int)pvVar1 + 0x10) * 0x20 + -0x20 + *(int *)((int)pvVar1 + 0xc));
          if ((undefined4 *)(*(int *)(this_00 + 4) + *(int *)(this_00 + 0x10)) <
              *(undefined4 **)(this_00 + 0xc) + 8) {
            pcVar4 = Translate(s__ETRSWarning__Message_over_readi_36223387 + 1,4);
            CPrintF(pcVar4);
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[5] = 0;
            puVar6[6] = 0;
            puVar6[7] = 0;
          }
          else {
            puVar7 = *(undefined4 **)(this_00 + 0xc);
            puVar8 = puVar6;
            for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            *(int *)(this_00 + 0xc) = *(int *)(this_00 + 0xc) + 0x20;
            *(undefined4 *)(this_00 + 0x14) = 0;
          }
          puVar6[4] = *(undefined4 *)(DAT_36300870 + puVar6[4] * 4);
          pCVar9 = param_1 + *(int *)((int)pvVar1 + 0xc);
          for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pCVar9 = *puVar6;
            puVar6 = puVar6 + 1;
            pCVar9 = pCVar9 + 4;
          }
          param_1 = param_1 + 0x20;
          local_10 = local_10 + -1;
          this = local_4;
        } while (local_10 != 0);
      }
      local_c = local_c + -1;
    } while (local_c != (CNetworkMessage *)0x0);
  }
  return;
}

