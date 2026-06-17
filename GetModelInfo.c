
/* public: void __thiscall CModelObject::GetModelInfo(class CModelInfo &) */

void __thiscall CModelObject::GetModelInfo(CModelObject *this,CModelInfo *param_1)

{
  CModelInfo *pCVar1;
  CModelData *pCVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  CModelInfo *pCVar7;
  CModelData *pCVar8;
  int local_8;
  
                    /* 0xb5410  1990  ?GetModelInfo@CModelObject@@QAEXAAVCModelInfo@@@Z */
  pCVar2 = GetData(this);
  *(undefined4 *)param_1 = *(undefined4 *)(pCVar2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(pCVar2 + 0x20);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pCVar2 + 0x54);
  local_8 = 0;
  if (0 < *(int *)(pCVar2 + 0x54)) {
    pCVar8 = pCVar2 + 0xd8;
    pCVar1 = param_1;
    do {
      pCVar7 = pCVar1 + 0xc;
      *(int *)(pCVar1 + 0x10) = *(int *)pCVar8;
      *(int *)pCVar7 = 0;
      iVar5 = 0;
      if (0 < *(int *)pCVar8) {
        iVar6 = 0;
        do {
          iVar3 = FUN_3600c1d0((undefined4 *)(*(int *)(pCVar8 + 0x14) + iVar6));
          *(int *)pCVar7 = *(int *)pCVar7 + iVar3 + -2;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x1c;
        } while (iVar5 < *(int *)pCVar8);
      }
      iVar5 = *(int *)(pCVar2 + 0x1c);
      iVar6 = 0;
      if (0 < iVar5) {
        puVar4 = *(uint **)(pCVar2 + 0x50);
        do {
          if ((*puVar4 & 1 << ((byte)local_8 & 0x1f)) != 0) {
            iVar6 = iVar6 + 1;
          }
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      *(int *)(pCVar1 + 0x14) = iVar6;
      local_8 = local_8 + 1;
      pCVar8 = pCVar8 + 0x60;
      pCVar1 = pCVar7;
    } while (local_8 < *(int *)(pCVar2 + 0x54));
  }
  *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(pCVar2 + 0xcd8);
  *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(pCVar2 + 0xcdc);
  *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(pCVar2 + 0x1260);
  *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(pCVar2 + 0x1264);
  *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(pCVar2 + 0x1268);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(pCVar2 + 0x126c);
  *(undefined4 *)(param_1 + 0x2a4) = *(undefined4 *)(pCVar2 + 0x1270);
  return;
}

