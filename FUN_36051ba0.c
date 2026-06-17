
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_36051ba0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  double *pdVar5;
  double *pdVar6;
  void *this;
  int iVar7;
  undefined4 *puVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int local_108;
  double local_d0;
  double local_c8;
  double local_c0;
  int local_b4;
  void *local_b0;
  int local_ac;
  int local_a8 [4];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68 [12];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_36211b69;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_b4 = param_1;
  FUN_36055f70(local_a8);
  this = (void *)(param_1 + 0x50);
  local_108 = 0;
  local_c = 1;
  local_b0 = this;
  iVar1 = FUN_3604a760((int)this);
  pvVar9 = this;
  if (0 < iVar1) {
    do {
      iVar1 = FUN_3604a750(this,local_108);
      local_d0 = _DAT_36227d98;
      pvVar9 = (void *)(iVar1 + 0x4c);
      local_c8 = _DAT_36227d98;
      local_c0 = _DAT_36227d98;
      local_ac = iVar1;
      iVar2 = FUN_3604aa50((int)pvVar9);
      iVar7 = 0;
      if (0 < iVar2) {
        do {
          piVar3 = (int *)FUN_3604a700(pvVar9,iVar7);
          iVar1 = *piVar3;
          if (piVar3[1] == 0) {
            pdVar5 = *(double **)(iVar1 + 0x10);
            pdVar6 = *(double **)(iVar1 + 0x14);
          }
          else {
            pdVar5 = *(double **)(iVar1 + 0x14);
            pdVar6 = *(double **)(iVar1 + 0x10);
          }
          local_98 = *pdVar5 + *pdVar6;
          local_90 = pdVar5[1] + pdVar6[1];
          local_88 = pdVar5[2] + pdVar6[2];
          iVar7 = iVar7 + 1;
          local_80 = *pdVar5 - *pdVar6;
          local_78 = pdVar5[1] - pdVar6[1];
          local_70 = pdVar5[2] - pdVar6[2];
          local_d0 = local_88 * local_78 + local_d0;
          local_c8 = local_98 * local_70 + local_c8;
          local_c0 = local_90 * local_80 + local_c0;
          iVar1 = local_ac;
        } while (iVar7 < iVar2);
      }
      if (_DAT_362280b8 <= SQRT(local_d0 * local_d0 + local_c8 * local_c8 + local_c0 * local_c0)) {
        puVar4 = (undefined4 *)FUN_3604c260((void *)(local_b4 + 0x14),1);
        piVar3 = (int *)FUN_3604a700(pvVar9,0);
        pdVar5 = FUN_3604f9e0(local_38,(undefined4 *)&local_d0,*(double **)(*piVar3 + 0x10));
        puVar8 = local_68;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *(undefined4 *)pdVar5;
          pdVar5 = (double *)((int)pdVar5 + 4);
          puVar8 = puVar8 + 1;
        }
        puVar8 = local_68;
        puVar10 = puVar4;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        *(undefined4 **)(iVar1 + 0x48) = puVar4;
      }
      else {
        FUN_36055f90(local_a8,iVar1);
      }
      local_108 = local_108 + 1;
      iVar1 = FUN_3604a760((int)this);
      pvVar9 = local_b0;
    } while (local_108 < iVar1);
  }
  iVar2 = 0;
  local_c = CONCAT31(local_c._1_3_,2);
  iVar1 = FUN_360549c0((int)local_a8);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_36054690(local_a8,iVar2);
      FUN_36056020(pvVar9,iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360549c0((int)local_a8);
    } while (iVar2 < iVar1);
  }
  FUN_36056060(local_a8);
  ExceptionList = local_14;
  return;
}

