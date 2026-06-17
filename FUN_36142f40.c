
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36142f40(double *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  void *extraout_ECX;
  double *pdVar6;
  double *pdVar7;
  float10 fVar8;
  int local_a8;
  int local_a4;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  param_1[0x1a] = _DAT_36238b98;
  DAT_362fd974 = DAT_362fd974 + 1;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *(undefined4 *)((int)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((int)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  iVar2 = FUN_361438e0((int)(param_1 + 4));
  local_a8 = 0;
  iVar3 = FUN_361438e0((int)(param_1 + 4));
  if (0 < iVar3) {
    do {
      piVar4 = (int *)FUN_361438a0(param_1 + 4,(DAT_362fd974 + local_a8) % iVar2);
      *(int **)((int)param_1 + 0x44) = piVar4;
      iVar3 = piVar4[1];
      iVar5 = *piVar4;
      local_98 = *(undefined4 *)(iVar3 + 0x20);
      local_94 = *(undefined4 *)(iVar3 + 0x24);
      local_90 = *(undefined4 *)(iVar3 + 0x28);
      local_8c = *(undefined4 *)(iVar3 + 0x2c);
      local_88 = *(undefined4 *)(iVar3 + 0x30);
      local_84 = *(undefined4 *)(iVar3 + 0x34);
      local_68 = *(undefined4 *)(iVar5 + 0x20);
      local_64 = *(undefined4 *)(iVar5 + 0x24);
      local_60 = *(undefined4 *)(iVar5 + 0x28);
      local_5c = *(undefined4 *)(iVar5 + 0x2c);
      local_58 = *(undefined4 *)(iVar5 + 0x30);
      local_54 = *(undefined4 *)(iVar5 + 0x34);
      FUN_36143ca0(param_1,(double *)&local_68,(double *)&local_98,(undefined4 *)(param_1 + 0x16));
      DAT_362fd970 = DAT_362fd970 + 1;
      local_a4 = 0;
      if (0 < iVar2) {
        iVar3 = DAT_362fd970 + local_a8;
        do {
          piVar4 = (int *)FUN_361438a0(param_1 + 4,iVar3 % iVar2);
          iVar5 = *piVar4;
          piVar4 = *(int **)((int)param_1 + 0x44);
          *(int *)(param_1 + 9) = iVar5;
          if ((iVar5 != *piVar4) && (iVar5 != piVar4[1])) {
            pdVar6 = param_1 + 0x16;
            pdVar7 = param_1 + 0x12;
            for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
              *(undefined4 *)pdVar7 = *(undefined4 *)pdVar6;
              pdVar6 = (double *)((int)pdVar6 + 4);
              pdVar7 = (double *)((int)pdVar7 + 4);
            }
            iVar5 = *piVar4;
            local_38 = *(undefined4 *)(iVar5 + 0x20);
            local_34 = *(undefined4 *)(iVar5 + 0x24);
            local_30 = *(undefined4 *)(iVar5 + 0x28);
            local_2c = *(undefined4 *)(iVar5 + 0x2c);
            local_28 = *(undefined4 *)(iVar5 + 0x30);
            local_24 = *(undefined4 *)(iVar5 + 0x34);
            iVar5 = *(int *)(param_1 + 9);
            local_80 = *(undefined4 *)(iVar5 + 0x20);
            local_7c = *(undefined4 *)(iVar5 + 0x24);
            local_78 = *(undefined4 *)(iVar5 + 0x28);
            local_74 = *(undefined4 *)(iVar5 + 0x2c);
            local_70 = *(undefined4 *)(iVar5 + 0x30);
            local_6c = *(undefined4 *)(iVar5 + 0x34);
            FUN_36143ca0(param_1,(double *)&local_80,(double *)&local_38,
                         (undefined4 *)(param_1 + 10));
            iVar5 = *(int *)(param_1 + 9);
            local_50 = *(undefined4 *)(iVar5 + 0x20);
            local_4c = *(undefined4 *)(iVar5 + 0x24);
            local_48 = *(undefined4 *)(iVar5 + 0x28);
            local_44 = *(undefined4 *)(iVar5 + 0x2c);
            local_40 = *(undefined4 *)(iVar5 + 0x30);
            local_3c = *(undefined4 *)(iVar5 + 0x34);
            iVar5 = *(int *)(*(int *)((int)param_1 + 0x44) + 4);
            local_20 = *(undefined4 *)(iVar5 + 0x20);
            local_1c = *(undefined4 *)(iVar5 + 0x24);
            local_18 = *(undefined4 *)(iVar5 + 0x28);
            local_14 = *(undefined4 *)(iVar5 + 0x2c);
            local_10 = *(undefined4 *)(iVar5 + 0x30);
            local_c = *(undefined4 *)(iVar5 + 0x34);
            FUN_36143ca0(param_1,(double *)&local_20,(double *)&local_50,
                         (undefined4 *)(param_1 + 0xe));
            fVar8 = FUN_36142470(param_1);
            dVar1 = (double)fVar8;
            if ((float10)_DAT_36227d98 <= fVar8) {
              iVar5 = FUN_36142940(extraout_ECX);
              if (((*(int *)(param_1 + 0x1b) != 0) && (iVar5 == 0)) ||
                 ((*(int *)(param_1 + 0x1b) == iVar5 && (param_1[0x1a] < dVar1)))) {
                FUN_361428a0((int)param_1);
                param_1[0x1a] = dVar1;
                *(undefined4 *)((int)param_1 + 0xdc) = *(undefined4 *)((int)param_1 + 0x3c);
                *(int *)(param_1 + 0x1b) = iVar5;
                *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 8);
                *(undefined4 *)((int)param_1 + 0xe4) = *(undefined4 *)((int)param_1 + 0x44);
                *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_1 + 9);
                if ((iVar5 == 0) && (_DAT_36237340 <= dVar1)) {
                  return;
                }
              }
            }
          }
          local_a4 = local_a4 + 1;
          iVar3 = iVar3 + 1;
        } while (local_a4 < iVar2);
      }
      local_a8 = local_a8 + 1;
      iVar3 = FUN_361438e0((int)(param_1 + 4));
    } while (local_a8 < iVar3);
  }
  return;
}

