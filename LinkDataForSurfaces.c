
/* public: void __thiscall CModelData::LinkDataForSurfaces(int) */

void __thiscall CModelData::LinkDataForSurfaces(CModelData *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CModelData *pCVar5;
  undefined4 *puVar6;
  int iVar7;
  int local_38;
  uint local_34;
  int local_2c;
  undefined4 *local_28;
  int local_24;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb9200  2539  ?LinkDataForSurfaces@CModelData@@QAEXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213fe0;
  local_c = ExceptionList;
  local_34 = (uint)(param_1 == 0);
  if ((int)local_34 < *(int *)(this + 0x54)) {
    pCVar5 = this + local_34 * 0x60 + 0xe8;
    ExceptionList = &local_c;
    do {
      local_38 = 0;
      iVar2 = FUN_3600bfb0((undefined4 *)pCVar5);
      if (0 < iVar2) {
        iVar2 = *(int *)(pCVar5 + 4);
        param_1 = 0;
        do {
          puVar6 = (undefined4 *)(param_1 + iVar2);
          iVar7 = 0;
          iVar3 = FUN_3600c1d0(puVar6);
          if (0 < iVar3) {
            do {
              iVar2 = puVar6[1];
              iVar3 = FUN_360bb0f0(this + 0x44,*(int *)(iVar2 + iVar7 * 8));
              *(int *)(*(int *)(iVar2 + iVar7 * 8 + 4) + 0x18) = iVar3;
              iVar2 = *(int *)(pCVar5 + 4);
              puVar6 = (undefined4 *)(param_1 + iVar2);
              iVar7 = iVar7 + 1;
              iVar3 = FUN_3600c1d0(puVar6);
            } while (iVar7 < iVar3);
          }
          param_1 = param_1 + 0x1c;
          local_38 = local_38 + 1;
          iVar3 = FUN_3600bfb0((undefined4 *)pCVar5);
        } while (local_38 < iVar3);
      }
      local_2c = 0;
      local_28 = (undefined4 *)0x0;
      local_4 = 0;
      local_38 = FUN_3600c0e0((undefined4 *)(pCVar5 + 0x10));
      if ((local_38 != 0) &&
         (local_28 = (undefined4 *)thunk_FUN_361bf99c(local_38 * 4 + 4), iVar2 = local_38,
         puVar6 = local_28, local_2c = local_38, 0 < local_38)) {
        for (; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      iVar3 = 0;
      iVar2 = FUN_3600bfb0((undefined4 *)pCVar5);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          iVar7 = *(int *)(iVar2 + 0x10 + *(int *)(pCVar5 + 4));
          local_28[iVar7] = local_28[iVar7] + 1;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x1c;
          iVar7 = FUN_3600bfb0((undefined4 *)pCVar5);
        } while (iVar3 < iVar7);
      }
      iVar2 = 0;
      if (0 < local_38) {
        iVar3 = 0;
        do {
          puVar6 = (undefined4 *)(iVar3 + 0x54 + *(int *)(pCVar5 + 0x14));
          if (*(int *)(iVar3 + 0x54 + *(int *)(pCVar5 + 0x14)) != 0) {
            operator_delete__((void *)puVar6[1]);
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          iVar7 = local_28[iVar2];
          piVar1 = (int *)(iVar3 + 0x54 + *(int *)(pCVar5 + 0x14));
          if (iVar7 != 0) {
            *piVar1 = iVar7;
            iVar7 = thunk_FUN_361bf99c(iVar7 * 4 + 4);
            piVar1[1] = iVar7;
          }
          if (local_28[iVar2] != 0) {
            *(undefined4 *)
             (*(int *)(iVar3 + 0x58 + *(int *)(pCVar5 + 0x14)) + -4 + local_28[iVar2] * 4) = 0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x70;
        } while (iVar2 < local_38);
      }
      iVar3 = 0;
      iVar2 = FUN_3600bfb0((undefined4 *)pCVar5);
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          iVar7 = *(int *)(iVar2 + 0x10 + *(int *)(pCVar5 + 4));
          if (local_28[iVar7] != 0) {
            iVar4 = iVar7 * 0x70;
            piVar1 = (int *)(*(int *)(iVar4 + 0x58 + *(int *)(pCVar5 + 0x14)) + -4 +
                            local_28[iVar7] * 4);
            iVar7 = *piVar1;
            *piVar1 = iVar7 + 1;
            *(int *)(*(int *)(iVar4 + 0x58 + *(int *)(pCVar5 + 0x14)) + iVar7 * 4) = iVar3;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0x1c;
          iVar7 = FUN_3600bfb0((undefined4 *)pCVar5);
        } while (iVar3 < iVar7);
      }
      if (0 < local_38) {
        param_1 = 0;
        do {
          FUN_360bc0f0(local_1c);
          piVar1 = (int *)(param_1 + 0x54 + *(int *)(pCVar5 + 0x14));
          local_24 = 0;
          local_4._0_1_ = 2;
          if (0 < *piVar1) {
            do {
              puVar6 = (undefined4 *)
                       (*(int *)(piVar1[1] + local_24 * 4) * 0x1c + *(int *)(pCVar5 + 4));
              iVar3 = 0;
              iVar2 = FUN_3600c1d0(puVar6);
              if (0 < iVar2) {
                do {
                  iVar2 = *(int *)(puVar6[1] + 4 + iVar3 * 8);
                  iVar7 = FUN_360bb2f0(local_1c,iVar2);
                  if (iVar7 == 0) {
                    FUN_360bc110(local_1c,iVar2);
                  }
                  iVar3 = iVar3 + 1;
                  iVar2 = FUN_3600c1d0(puVar6);
                } while (iVar3 < iVar2);
              }
              local_24 = local_24 + 1;
            } while (local_24 < *piVar1);
          }
          puVar6 = (undefined4 *)(param_1 + 0x5c + *(int *)(pCVar5 + 0x14));
          local_4 = CONCAT31(local_4._1_3_,1);
          if (*(int *)(param_1 + 0x5c + *(int *)(pCVar5 + 0x14)) != 0) {
            operator_delete__((void *)puVar6[1]);
            *puVar6 = 0;
            puVar6[1] = 0;
          }
          iVar2 = FUN_360bb2e0((int)local_1c);
          piVar1 = (int *)(param_1 + 0x5c + *(int *)(pCVar5 + 0x14));
          if (iVar2 != 0) {
            *piVar1 = iVar2;
            iVar2 = thunk_FUN_361bf99c(iVar2 * 4 + 4);
            piVar1[1] = iVar2;
          }
          iVar3 = 0;
          iVar2 = FUN_360bb2e0((int)local_1c);
          if (0 < iVar2) {
            do {
              iVar2 = FUN_360bb330(local_1c,iVar3);
              iVar2 = FUN_360bafc0(pCVar5 + 8,iVar2);
              *(int *)(*(int *)(param_1 + 0x60 + *(int *)(pCVar5 + 0x14)) + iVar3 * 4) = iVar2;
              iVar3 = iVar3 + 1;
              iVar2 = FUN_360bb2e0((int)local_1c);
            } while (iVar3 < iVar2);
          }
          FUN_360bc390(local_1c);
          param_1 = param_1 + 0x70;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
      }
      local_4 = 0xffffffff;
      if (local_2c != 0) {
        operator_delete__(local_28);
      }
      local_34 = local_34 + 1;
      pCVar5 = pCVar5 + 0x60;
    } while ((int)local_34 < *(int *)(this + 0x54));
  }
  ExceptionList = local_c;
  return;
}

