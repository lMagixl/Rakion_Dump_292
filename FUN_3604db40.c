
void __cdecl FUN_3604db40(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  void *pvVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  int local_28;
  int local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211962;
  local_c = ExceptionList;
  iVar9 = 0;
  ExceptionList = &local_c;
  iVar3 = FUN_3604f170(0x362bf624);
  if (0 < iVar3) {
    do {
      iVar3 = FUN_3604f180(&DAT_362bf624,iVar9);
      iVar13 = 0;
      iVar4 = FUN_3604f420(iVar3 + 0xc);
      if (0 < iVar4) {
        do {
          iVar13 = iVar13 + 1;
          iVar4 = FUN_3604f420(iVar3 + 0xc);
        } while (iVar13 < iVar4);
      }
      iVar9 = iVar9 + 1;
      iVar3 = FUN_3604f170(0x362bf624);
    } while (iVar9 < iVar3);
  }
  iVar9 = 0;
  iVar3 = FUN_3604f200(&DAT_362bf634);
  if (0 < iVar3) {
    do {
      iVar9 = iVar9 + 1;
      iVar3 = FUN_3604f200(&DAT_362bf634);
    } while (iVar9 < iVar3);
  }
  iVar3 = FUN_3604f2b0(&DAT_362bf63c);
  if (iVar3 != 0) {
    DAT_362bf65c = iVar3;
    DAT_362bf660 = (void *)thunk_FUN_361bf99c(iVar3 * 4 + 4);
  }
  pvVar12 = DAT_362bf660;
  local_28 = 0;
  local_4 = 0;
  iVar9 = FUN_3604f170(0x362bf624);
  if (0 < iVar9) {
    do {
      iVar4 = 0;
      iVar9 = 0;
      if (0 < iVar3) {
        do {
          *(undefined4 *)((int)pvVar12 + iVar9 * 4) = 0xffffffff;
          iVar9 = iVar9 + 1;
          pvVar12 = DAT_362bf660;
        } while (iVar9 < iVar3);
      }
      iVar13 = 0;
      iVar9 = FUN_3604f180(&DAT_362bf624,local_28);
      pvVar10 = (void *)(iVar9 + 0xc);
      iVar9 = FUN_3604f420((int)pvVar10);
      if (0 < iVar9) {
        do {
          piVar5 = (int *)FUN_3604f160(pvVar10,iVar4);
          iVar9 = *piVar5;
          iVar6 = *(int *)(DAT_362bf638 + iVar9 * 0x1c);
          if (*(int *)((int)pvVar12 + iVar6 * 4) == -1) {
            *(int *)((int)pvVar12 + iVar6 * 4) = iVar13;
            iVar13 = iVar13 + 1;
            pvVar12 = DAT_362bf660;
          }
          iVar6 = *(int *)(DAT_362bf638 + 4 + iVar9 * 0x1c);
          if (*(int *)((int)pvVar12 + iVar6 * 4) == -1) {
            *(int *)((int)pvVar12 + iVar6 * 4) = iVar13;
            iVar13 = iVar13 + 1;
            pvVar12 = DAT_362bf660;
          }
          iVar9 = *(int *)(DAT_362bf638 + 8 + iVar9 * 0x1c);
          if (*(int *)((int)pvVar12 + iVar9 * 4) == -1) {
            *(int *)((int)pvVar12 + iVar9 * 4) = iVar13;
            iVar13 = iVar13 + 1;
            pvVar12 = DAT_362bf660;
          }
          iVar4 = iVar4 + 1;
          iVar9 = FUN_3604f420((int)pvVar10);
        } while (iVar4 < iVar9);
      }
      iVar4 = FUN_3604f2e0(0x362bf644);
      iVar11 = DAT_362bf64c + iVar13;
      DAT_362bf64c = iVar11;
      iVar6 = FUN_3604f2b0((undefined4 *)&DAT_362bf644);
      iVar9 = DAT_362bf650;
      if (iVar6 < iVar11) {
        iVar6 = (iVar13 + -1) / DAT_362bf650;
        iVar11 = FUN_3604f2b0((undefined4 *)&DAT_362bf644);
        FUN_3604f450(&DAT_362bf644,iVar11 + (iVar6 + 1) * iVar9);
        pvVar12 = DAT_362bf660;
      }
      iVar9 = DAT_362bf648 + (DAT_362bf64c - iVar13) * 0xc;
      iVar13 = FUN_3604f180(&DAT_362bf624,local_28);
      pvVar10 = (void *)(iVar13 + 0xc);
      local_20 = 0;
      iVar13 = FUN_3604f420((int)pvVar10);
      if (0 < iVar13) {
        do {
          piVar5 = (int *)FUN_3604f160(pvVar10,local_20);
          iVar13 = *piVar5;
          iVar6 = *(int *)(DAT_362bf638 + iVar13 * 0x1c);
          iVar11 = *(int *)((int)pvVar12 + iVar6 * 4);
          if (param_1 == 0) {
            iVar6 = *(int *)(DAT_362bf638 + 0xc + iVar13 * 0x1c);
            fVar2 = *(float *)(DAT_362bf658 + 4 + iVar6 * 8);
            puVar8 = (undefined4 *)(iVar9 + iVar11 * 0xc);
            *puVar8 = *(undefined4 *)(DAT_362bf658 + iVar6 * 8);
            puVar8[1] = -fVar2;
            uVar7 = 0;
          }
          else {
            puVar1 = (undefined4 *)((int)DAT_362bf640 + iVar6 * 0xc);
            puVar8 = (undefined4 *)(iVar9 + iVar11 * 0xc);
            *puVar8 = *puVar1;
            puVar8[1] = puVar1[1];
            uVar7 = puVar1[2];
          }
          puVar8[2] = uVar7;
          *(int *)(DAT_362bf638 + iVar13 * 0x1c) = iVar11 + iVar4;
          iVar6 = *(int *)(DAT_362bf638 + 4 + iVar13 * 0x1c);
          iVar11 = *(int *)((int)DAT_362bf660 + iVar6 * 4);
          if (param_1 == 0) {
            iVar6 = *(int *)(DAT_362bf638 + 0x10 + iVar13 * 0x1c);
            fVar2 = *(float *)(DAT_362bf658 + 4 + iVar6 * 8);
            puVar8 = (undefined4 *)(iVar9 + iVar11 * 0xc);
            *puVar8 = *(undefined4 *)(DAT_362bf658 + iVar6 * 8);
            puVar8[1] = -fVar2;
            puVar8[2] = 0;
          }
          else {
            puVar8 = (undefined4 *)((int)DAT_362bf640 + iVar6 * 0xc);
            puVar1 = (undefined4 *)(iVar9 + iVar11 * 0xc);
            *puVar1 = *puVar8;
            puVar1[1] = puVar8[1];
            puVar1[2] = puVar8[2];
          }
          *(int *)(DAT_362bf638 + 4 + iVar13 * 0x1c) = iVar11 + iVar4;
          iVar6 = *(int *)(DAT_362bf638 + 8 + iVar13 * 0x1c);
          iVar11 = *(int *)((int)DAT_362bf660 + iVar6 * 4);
          if (param_1 == 0) {
            iVar6 = *(int *)(DAT_362bf638 + 0x14 + iVar13 * 0x1c);
            fVar2 = *(float *)(DAT_362bf658 + 4 + iVar6 * 8);
            puVar8 = (undefined4 *)(iVar9 + iVar11 * 0xc);
            *puVar8 = *(undefined4 *)(DAT_362bf658 + iVar6 * 8);
            puVar8[1] = -fVar2;
            puVar8[2] = 0;
          }
          else {
            puVar8 = (undefined4 *)((int)DAT_362bf640 + iVar6 * 0xc);
            puVar1 = (undefined4 *)(iVar9 + iVar11 * 0xc);
            *puVar1 = *puVar8;
            puVar1[1] = puVar8[1];
            puVar1[2] = puVar8[2];
          }
          *(int *)(DAT_362bf638 + 8 + iVar13 * 0x1c) = iVar11 + iVar4;
          local_20 = local_20 + 1;
          iVar13 = FUN_3604f420((int)pvVar10);
          pvVar12 = DAT_362bf660;
        } while (local_20 < iVar13);
      }
      local_28 = local_28 + 1;
      iVar9 = FUN_3604f170(0x362bf624);
    } while (local_28 < iVar9);
  }
  local_4 = 0xffffffff;
  if (DAT_362bf65c != 0) {
    operator_delete__(pvVar12);
    DAT_362bf65c = 0;
    DAT_362bf660 = (void *)0x0;
  }
  if (DAT_362bf63c != 0) {
    operator_delete__(DAT_362bf640);
    DAT_362bf63c = 0;
    DAT_362bf640 = (void *)0x0;
  }
  iVar3 = FUN_3604f2e0(0x362bf644);
  if (iVar3 != 0) {
    DAT_362bf63c = iVar3;
    DAT_362bf640 = (void *)thunk_FUN_361bf99c((iVar3 * 3 + 3) * 4);
  }
  iVar9 = 0;
  iVar3 = FUN_3604f2e0(0x362bf644);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      puVar8 = (undefined4 *)(iVar3 + DAT_362bf648);
      puVar1 = (undefined4 *)(iVar3 + (int)DAT_362bf640);
      *puVar1 = *puVar8;
      puVar1[1] = puVar8[1];
      puVar1[2] = puVar8[2];
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 0xc;
      iVar4 = FUN_3604f2e0(0x362bf644);
    } while (iVar9 < iVar4);
  }
  DAT_362bf64c = 0;
  iVar3 = FUN_3604f170(0x362bf624);
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar9 = FUN_3604f180(&DAT_362bf624,iVar3);
      iVar13 = 0;
      iVar4 = FUN_3604f420(iVar9 + 0xc);
      if (0 < iVar4) {
        do {
          iVar13 = iVar13 + 1;
          iVar4 = FUN_3604f420(iVar9 + 0xc);
        } while (iVar13 < iVar4);
      }
      iVar3 = iVar3 + 1;
      iVar9 = FUN_3604f170(0x362bf624);
    } while (iVar3 < iVar9);
  }
  iVar9 = 0;
  iVar3 = FUN_3604f200(&DAT_362bf634);
  if (0 < iVar3) {
    do {
      iVar9 = iVar9 + 1;
      iVar3 = FUN_3604f200(&DAT_362bf634);
    } while (iVar9 < iVar3);
  }
  ExceptionList = local_c;
  return;
}

