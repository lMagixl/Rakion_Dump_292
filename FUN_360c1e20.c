
void __thiscall FUN_360c1e20(void *this,int *param_1)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  size_t _NumOfElements;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_20;
  int local_1c;
  void *local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214408;
  local_c = ExceptionList;
  piVar1 = param_1 + (int)this * 0x18 + 0x36;
  ExceptionList = &local_c;
  piVar1[0x12] = 0x6000000;
  piVar1[0x13] = 0;
  iVar3 = param_1[7];
  iVar6 = 0;
  uVar8 = 1 << ((byte)this & 0x1f);
  if (0 < iVar3) {
    puVar2 = (uint *)param_1[0x14];
    iVar5 = iVar3;
    do {
      if ((*puVar2 & uVar8) != 0) {
        iVar6 = iVar6 + 1;
      }
      puVar2 = puVar2 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  piVar1[10] = iVar6;
  if (piVar1[0xc] != 0) {
    operator_delete__((void *)piVar1[0xd]);
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
  }
  if (iVar6 != 0) {
    piVar1[0xc] = iVar6;
    iVar6 = thunk_FUN_361bf99c(iVar6 * 2 + 2);
    piVar1[0xd] = iVar6;
  }
  local_1c = 0;
  local_18 = (void *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    local_18 = (void *)thunk_FUN_361bf99c(iVar3 * 4 + 4);
    local_1c = iVar3;
  }
  iVar5 = 0;
  iVar6 = 0;
  if (0 < iVar3) {
    do {
      *(undefined4 *)((int)local_18 + iVar6 * 4) = 0x12345678;
      if ((*(uint *)(param_1[0x14] + iVar6 * 4) & uVar8) != 0) {
        *(int *)((int)local_18 + iVar6 * 4) = iVar5;
        *(short *)(piVar1[0xd] + iVar5 * 2) = (short)iVar6;
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar3);
  }
  iVar3 = FUN_3600c040(piVar1 + 6);
  piVar1[0xb] = iVar3;
  if (piVar1[0xe] != 0) {
    operator_delete__((void *)piVar1[0xf]);
    piVar1[0xe] = 0;
    piVar1[0xf] = 0;
  }
  if (piVar1[0x10] != 0) {
    operator_delete__((void *)piVar1[0x11]);
    piVar1[0x10] = 0;
    piVar1[0x11] = 0;
  }
  iVar3 = piVar1[0xb];
  if (iVar3 != 0) {
    piVar1[0xe] = iVar3;
    iVar3 = thunk_FUN_361bf99c(iVar3 * 2 + 2);
    piVar1[0xf] = iVar3;
  }
  FUN_3600c0f0(piVar1 + 0x10,piVar1[0xb]);
  iVar3 = 0;
  _NumOfElements = 0;
  if (0 < piVar1[8]) {
    _NumOfElements = piVar1[8];
  }
  qsort((void *)piVar1[9],_NumOfElements,0x70,(_PtFuncCompare *)&LAB_360c0c40);
  iVar6 = FUN_3600bda0(piVar1 + 0x14);
  if (iVar6 != 0) {
    operator_delete__((void *)piVar1[0x15]);
    piVar1[0x14] = 0;
    piVar1[0x15] = 0;
    piVar1[0x16] = 0;
  }
  local_14 = 0;
  local_4._0_1_ = 1;
  if (0 < piVar1[8]) {
    do {
      iVar5 = local_14 * 0x70 + piVar1[9];
      iVar6 = FUN_3600bef0((undefined4 *)(iVar5 + 0x54));
      if (iVar6 == 0) {
        *(undefined4 *)(iVar5 + 0x68) = 0;
        *(undefined4 *)(iVar5 + 0x6c) = 0;
        *(undefined4 *)(iVar5 + 100) = 0x7fffffff;
      }
      else {
        uVar8 = *(uint *)(iVar5 + 0x48);
        if (((((uVar8 & 0x20) == 0) || (iVar6 = *(int *)(iVar5 + 0x50), iVar6 == 1)) || (iVar6 == 3)
            ) || (iVar6 == 5)) {
          *(uint *)(iVar5 + 0x48) = uVar8 & 0xffffbfff;
          uVar8 = piVar1[0x12] & 0xfdffffff;
        }
        else {
          *(uint *)(iVar5 + 0x48) = uVar8 | 0x4000;
          uVar8 = piVar1[0x12] & 0xfbffffff;
        }
        piVar1[0x12] = uVar8;
        piVar1[0x12] = uVar8 | *(uint *)(iVar5 + 0x48);
        *(int *)(iVar5 + 100) = iVar3;
        iVar6 = FUN_3600bef0((undefined4 *)(iVar5 + 0x5c));
        *(int *)(iVar5 + 0x68) = iVar6;
        param_1 = (int *)0x0;
        if (0 < iVar6) {
          do {
            iVar6 = *(int *)(*(int *)(iVar5 + 0x60) + (int)param_1 * 4) * 0x34 + piVar1[7];
            *(int *)(iVar6 + 0x14) = iVar3;
            *(undefined2 *)(piVar1[0xf] + iVar3 * 2) =
                 *(undefined2 *)((int)local_18 + *(int *)(iVar6 + 0x18) * 4);
            iVar3 = iVar3 + 1;
            param_1 = (int *)((int)param_1 + 1);
            *(float *)(piVar1[0x11] + -8 + iVar3 * 8) = (float)*(int *)(iVar6 + 0xc);
            *(float *)(piVar1[0x11] + -4 + iVar3 * 8) = (float)*(int *)(iVar6 + 0x10);
          } while ((int)param_1 < *(int *)(iVar5 + 0x68));
        }
        FUN_360c1a50((int)piVar1,iVar5);
      }
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[8]);
  }
  local_14 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (0 < piVar1[2]) {
    do {
      puVar9 = (undefined4 *)(local_14 * 0x10 + piVar1[3]);
      iVar3 = 0;
      iVar5 = 0;
      iVar6 = FUN_3600bef0(puVar9);
      if (0 < iVar6) {
        param_1 = (int *)puVar9[1];
        do {
          iVar6 = FUN_3600c1d0((undefined4 *)(*param_1 * 0x1c + piVar1[5]));
          param_1 = param_1 + 1;
          iVar3 = iVar3 + -2 + iVar6;
          iVar5 = iVar5 + 1;
          iVar6 = FUN_3600bef0(puVar9);
        } while (iVar5 < iVar6);
      }
      iVar6 = 0;
      if (puVar9[2] != 0) {
        operator_delete__((void *)puVar9[3]);
        puVar9[2] = 0;
        puVar9[3] = 0;
      }
      if (iVar3 * 3 != 0) {
        puVar9[2] = iVar3 * 3;
        uVar4 = thunk_FUN_361bf99c(iVar3 * 6 + 2);
        puVar9[3] = uVar4;
      }
      local_20 = 0;
      iVar3 = FUN_3600bef0(puVar9);
      if (0 < iVar3) {
        do {
          puVar7 = (undefined4 *)(*(int *)(puVar9[1] + local_20 * 4) * 0x1c + piVar1[5]);
          param_1 = (int *)0x2;
          iVar3 = FUN_3600c1d0(puVar7);
          if (2 < iVar3) {
            do {
              *(undefined2 *)(puVar9[3] + iVar6 * 2) =
                   *(undefined2 *)(*(int *)(puVar7[1] + 4) + 0x14);
              *(undefined2 *)(puVar9[3] + 2 + iVar6 * 2) =
                   *(undefined2 *)(*(int *)(puVar7[1] + -4 + (int)param_1 * 8) + 0x14);
              *(undefined2 *)(puVar9[3] + (iVar6 + 2) * 2) =
                   *(undefined2 *)(*(int *)(puVar7[1] + 4 + (int)param_1 * 8) + 0x14);
              iVar6 = iVar6 + 3;
              param_1 = (int *)((int)param_1 + 1);
              iVar3 = FUN_3600c1d0(puVar7);
            } while ((int)param_1 < iVar3);
          }
          local_20 = local_20 + 1;
          iVar3 = FUN_3600bef0(puVar9);
        } while (local_20 < iVar3);
      }
      local_14 = local_14 + 1;
    } while (local_14 < piVar1[2]);
  }
  if (local_1c != 0) {
    operator_delete__(local_18);
  }
  ExceptionList = local_c;
  return;
}

