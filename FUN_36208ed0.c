
void __thiscall FUN_36208ed0(void *this,int *param_1)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int local_40;
  int *local_28;
  undefined4 *local_24;
  int *local_20;
  int *local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621d11c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar4 = (void *)FUN_361bf99c(0x10);
  local_4 = 0;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = FUN_36208d20(pvVar4,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 4),
                          *(int *)((int)this + 8));
  }
  local_4 = 0xffffffff;
  pvVar4 = (void *)FUN_361bf99c(0x10);
  local_4 = 1;
  if (pvVar4 == (void *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    local_20 = FUN_36208d20(pvVar4,*(undefined4 *)((int)this + 0xc),piVar5[1],piVar5[2]);
  }
  local_4 = 0xffffffff;
  pvVar4 = (void *)FUN_361bf99c(0x10);
  local_4 = 2;
  if (pvVar4 == (void *)0x0) {
    local_28 = (int *)0x0;
  }
  else {
    local_28 = FUN_36208d20(pvVar4,*(undefined4 *)((int)this + 0xc),piVar5[1],piVar5[2]);
  }
  local_4 = 0xffffffff;
  pvVar4 = (void *)FUN_361bf99c(0x10);
  local_4 = 3;
  if (pvVar4 == (void *)0x0) {
    local_1c = (int *)0x0;
  }
  else {
    local_1c = FUN_36208d20(pvVar4,*(undefined4 *)((int)this + 0xc),piVar5[1],piVar5[2]);
  }
  local_4 = 0xffffffff;
  iVar10 = piVar5[1];
  if (piVar5[1] < piVar5[2]) {
    iVar10 = piVar5[2];
  }
  sVar1 = iVar10 * 4;
  pvVar4 = (void *)FUN_361bf99c(sVar1);
  puVar6 = (undefined4 *)FUN_361bf99c(sVar1);
  pfVar7 = (float *)FUN_361bf99c(sVar1);
  pfVar8 = (float *)FUN_361bf99c(sVar1);
  local_40 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      iVar10 = 0;
      if (0 < *(int *)((int)this + 4)) {
        pfVar13 = pfVar7;
        do {
          iVar14 = iVar10;
          if (iVar10 < 0) {
            iVar14 = 0;
          }
          iVar11 = local_40;
          if (local_40 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)piVar5[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)piVar5[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar10 = iVar10 + 1;
          *(undefined4 *)((int)pvVar4 + (-4 - (int)pfVar7) + (int)(pfVar13 + 1)) =
               *(undefined4 *)(*(int *)this + (iVar9 * iVar11 + iVar14) * 4);
          *pfVar13 = 0.0;
          pfVar13 = pfVar13 + 1;
        } while (iVar10 < *(int *)((int)this + 4));
      }
      FUN_3620c4f0(*(uint *)((int)this + 4),0,(int)pvVar4,pfVar7,(int)puVar6,pfVar8);
      iVar10 = 0;
      if (0 < *(int *)((int)this + 4)) {
        pfVar13 = pfVar8;
        do {
          iVar14 = iVar10;
          if (iVar10 < 0) {
            iVar14 = 0;
          }
          iVar11 = local_40;
          if (local_40 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)piVar5[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)piVar5[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar14 = iVar9 * iVar11 + iVar14;
          iVar10 = iVar10 + 1;
          *(undefined4 *)(*piVar5 + iVar14 * 4) =
               *(undefined4 *)(((int)puVar6 - (int)pfVar8) + (int)pfVar13);
          *(float *)(*local_20 + iVar14 * 4) = *pfVar13;
          pfVar13 = pfVar13 + 1;
        } while (iVar10 < *(int *)((int)this + 4));
      }
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)((int)this + 8));
  }
  local_40 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar10 = 0;
      if (0 < *(int *)((int)this + 8)) {
        pfVar13 = pfVar7;
        do {
          iVar14 = local_40;
          if (local_40 < 0) {
            iVar14 = 0;
          }
          iVar11 = iVar10;
          if (iVar10 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)piVar5[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)piVar5[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar14 = iVar9 * iVar11 + iVar14;
          iVar10 = iVar10 + 1;
          *(undefined4 *)((int)pfVar13 + ((int)pvVar4 - (int)pfVar7)) =
               *(undefined4 *)(*piVar5 + iVar14 * 4);
          *pfVar13 = *(float *)(*local_20 + iVar14 * 4);
          pfVar13 = pfVar13 + 1;
        } while (iVar10 < *(int *)((int)this + 8));
      }
      FUN_3620c4f0(*(uint *)((int)this + 8),0,(int)pvVar4,pfVar7,(int)puVar6,pfVar8);
      iVar10 = 0;
      if (0 < *(int *)((int)this + 8)) {
        pfVar13 = pfVar8;
        do {
          iVar14 = local_40;
          if (local_40 < 0) {
            iVar14 = 0;
          }
          iVar11 = iVar10;
          if (iVar10 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)local_28[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)local_28[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar14 = iVar9 * iVar11 + iVar14;
          iVar10 = iVar10 + 1;
          *(undefined4 *)(*local_28 + iVar14 * 4) =
               *(undefined4 *)((int)pfVar13 + ((int)puVar6 - (int)pfVar8));
          *(float *)(*local_1c + iVar14 * 4) = *pfVar13;
          pfVar13 = pfVar13 + 1;
        } while (iVar10 < *(int *)((int)this + 8));
      }
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)((int)this + 4));
  }
  iVar14 = *(int *)((int)this + 4);
  iVar10 = *(int *)((int)this + 8);
  local_40 = 0;
  iVar11 = (int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2;
  iVar15 = (int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2;
  iVar9 = iVar14 / 2;
  if (0 < iVar10) {
    do {
      iVar12 = 0;
      if (0 < iVar14) {
        do {
          iVar14 = iVar12;
          if (iVar12 < 0) {
            iVar14 = 0;
          }
          iVar16 = local_40;
          if (local_40 < 0) {
            iVar16 = 0;
          }
          iVar2 = *(int *)local_28[3];
          if (iVar2 <= iVar14) {
            iVar14 = iVar2 + -1;
          }
          iVar3 = ((int *)local_28[3])[1];
          if (iVar3 <= iVar16) {
            iVar16 = iVar3 + -1;
          }
          iVar14 = iVar2 * iVar16 + iVar14;
          if (((iVar15 <= iVar12) && (iVar12 < iVar9 + iVar15)) ||
             ((iVar11 <= local_40 && (local_40 < iVar10 / 2 + iVar11)))) {
            *(undefined4 *)(*local_28 + iVar14 * 4) = 0;
            *(undefined4 *)(*local_1c + iVar14 * 4) = 0;
          }
          iVar14 = *(int *)((int)this + 4);
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar14);
      }
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)((int)this + 8));
  }
  local_40 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar10 = 0;
      if (0 < *(int *)((int)this + 8)) {
        pfVar13 = pfVar7;
        do {
          iVar14 = local_40;
          if (local_40 < 0) {
            iVar14 = 0;
          }
          iVar11 = iVar10;
          if (iVar10 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)local_28[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)local_28[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar14 = iVar9 * iVar11 + iVar14;
          iVar10 = iVar10 + 1;
          *(undefined4 *)((int)pfVar13 + ((int)pvVar4 - (int)pfVar7)) =
               *(undefined4 *)(*local_28 + iVar14 * 4);
          *pfVar13 = *(float *)(*local_1c + iVar14 * 4);
          pfVar13 = pfVar13 + 1;
        } while (iVar10 < *(int *)((int)this + 8));
      }
      FUN_3620c4f0(*(uint *)((int)this + 8),1,(int)pvVar4,pfVar7,(int)puVar6,pfVar8);
      iVar10 = 0;
      if (0 < *(int *)((int)this + 8)) {
        pfVar13 = pfVar8;
        do {
          iVar14 = local_40;
          if (local_40 < 0) {
            iVar14 = 0;
          }
          iVar11 = iVar10;
          if (iVar10 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)piVar5[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)piVar5[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar14 = iVar9 * iVar11 + iVar14;
          iVar10 = iVar10 + 1;
          *(undefined4 *)(*piVar5 + iVar14 * 4) =
               *(undefined4 *)((int)pfVar13 + ((int)puVar6 - (int)pfVar8));
          *(float *)(*local_20 + iVar14 * 4) = *pfVar13;
          pfVar13 = pfVar13 + 1;
        } while (iVar10 < *(int *)((int)this + 8));
      }
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)((int)this + 4));
  }
  local_40 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      iVar10 = 0;
      if (0 < *(int *)((int)this + 4)) {
        pfVar13 = pfVar7;
        do {
          iVar14 = iVar10;
          if (iVar10 < 0) {
            iVar14 = 0;
          }
          iVar11 = local_40;
          if (local_40 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)piVar5[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)piVar5[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar14 = iVar9 * iVar11 + iVar14;
          iVar10 = iVar10 + 1;
          *(undefined4 *)((int)pfVar13 + ((int)pvVar4 - (int)pfVar7)) =
               *(undefined4 *)(*piVar5 + iVar14 * 4);
          *pfVar13 = *(float *)(*local_20 + iVar14 * 4);
          pfVar13 = pfVar13 + 1;
        } while (iVar10 < *(int *)((int)this + 4));
      }
      FUN_3620c4f0(*(uint *)((int)this + 4),1,(int)pvVar4,pfVar7,(int)puVar6,pfVar8);
      iVar10 = 0;
      local_24 = puVar6;
      if (0 < *(int *)((int)this + 4)) {
        do {
          iVar14 = iVar10;
          if (iVar10 < 0) {
            iVar14 = 0;
          }
          iVar11 = local_40;
          if (local_40 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)piVar5[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)piVar5[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar10 = iVar10 + 1;
          *(undefined4 *)(*piVar5 + (iVar9 * iVar11 + iVar14) * 4) = *local_24;
          local_24 = local_24 + 1;
        } while (iVar10 < *(int *)((int)this + 4));
      }
      local_40 = local_40 + 1;
    } while (local_40 < *(int *)((int)this + 8));
  }
  operator_delete(pvVar4);
  operator_delete(pfVar7);
  operator_delete(puVar6);
  operator_delete(pfVar8);
  local_40 = 0;
  if (0 < *(int *)((int)this + 8)) {
    do {
      iVar10 = 0;
      if (0 < *(int *)((int)this + 4)) {
        do {
          iVar14 = iVar10;
          if (iVar10 < 0) {
            iVar14 = 0;
          }
          iVar11 = local_40;
          if (local_40 < 0) {
            iVar11 = 0;
          }
          iVar9 = *(int *)piVar5[3];
          if (iVar9 <= iVar14) {
            iVar14 = iVar9 + -1;
          }
          iVar15 = ((int *)piVar5[3])[1];
          if (iVar15 <= iVar11) {
            iVar11 = iVar15 + -1;
          }
          iVar15 = iVar10 >> 1;
          if (iVar15 < 0) {
            iVar15 = 0;
          }
          iVar12 = local_40 >> 1;
          if (local_40 >> 1 < 0) {
            iVar12 = 0;
          }
          iVar16 = *(int *)param_1[3];
          if (iVar16 <= iVar15) {
            iVar15 = iVar16 + -1;
          }
          iVar2 = ((int *)param_1[3])[1];
          if (iVar2 <= iVar12) {
            iVar12 = iVar2 + -1;
          }
          iVar10 = iVar10 + 2;
          *(undefined4 *)(*param_1 + (iVar16 * iVar12 + iVar15) * 4) =
               *(undefined4 *)(*piVar5 + (iVar9 * iVar11 + iVar14) * 4);
        } while (iVar10 < *(int *)((int)this + 4));
      }
      local_40 = local_40 + 2;
    } while (local_40 < *(int *)((int)this + 8));
  }
  if (piVar5 != (int *)0x0) {
    FUN_36208d60(piVar5);
    operator_delete(piVar5);
  }
  if (local_20 != (int *)0x0) {
    FUN_36208d60(local_20);
    operator_delete(local_20);
  }
  if (local_28 != (int *)0x0) {
    FUN_36208d60(local_28);
    operator_delete(local_28);
  }
  if (local_1c != (int *)0x0) {
    FUN_36208d60(local_1c);
    operator_delete(local_1c);
  }
  ExceptionList = local_c;
  return;
}

