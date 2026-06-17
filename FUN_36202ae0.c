
/* WARNING: Removing unreachable block (ram,0x36202c55) */
/* WARNING: Removing unreachable block (ram,0x36202c70) */
/* WARNING: Removing unreachable block (ram,0x36202c7f) */
/* WARNING: Removing unreachable block (ram,0x36202c86) */

void __fastcall FUN_36202ae0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  local_14 = **(int **)(param_1 + 0x34);
  local_10 = (*(int **)(param_1 + 0x34))[1];
  local_18 = 0;
  local_4 = param_1;
  while( true ) {
    iVar7 = local_10;
    iVar1 = local_14;
    local_1c = (int *)FUN_361bf99c(0x1c);
    if (local_1c == (int *)0x0) {
      local_1c = (int *)0x0;
    }
    else {
      local_1c[2] = 0;
      local_1c[3] = 0;
      local_1c[4] = 0;
      local_1c[5] = 0;
      local_1c[6] = 0;
    }
    piVar8 = *(int **)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x44) - (int)piVar8 >> 2 == 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if ((iVar1 == 0) || (uVar5 = (int)piVar8 - iVar1 >> 2, uVar5 < 2)) {
        uVar5 = 1;
      }
      if (iVar1 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = (int)piVar8 - iVar1 >> 2;
      }
      local_8 = local_8 + uVar5;
      iVar1 = local_8;
      if (local_8 < 0) {
        iVar1 = 0;
      }
      puVar2 = (undefined4 *)FUN_361bf99c(iVar1 << 2);
      local_c = puVar2;
      for (piVar6 = *(int **)(param_1 + 0x3c); piVar6 != piVar8; piVar6 = piVar6 + 1) {
        FUN_36203780(puVar2,piVar6);
        puVar2 = puVar2 + 1;
      }
      FUN_36203750(puVar2,1,&local_1c);
      FUN_36203720(piVar8,*(undefined4 **)(param_1 + 0x40),puVar2 + 1);
      FUN_36203710();
      operator_delete(*(void **)(param_1 + 0x3c));
      puVar2 = local_c;
      *(undefined4 **)(param_1 + 0x44) = local_c + local_8;
      iVar1 = FUN_362036f0(param_1 + 0x38);
      *(undefined4 **)(param_1 + 0x3c) = puVar2;
      *(undefined4 **)(param_1 + 0x40) = puVar2 + iVar1 + 1;
      iVar7 = local_10;
      iVar1 = local_14;
    }
    else {
      FUN_36203720(piVar8,piVar8,piVar8 + 1);
      FUN_36203750(*(undefined4 **)(param_1 + 0x40),
                   1 - ((int)*(undefined4 **)(param_1 + 0x40) - (int)piVar8 >> 2),&local_1c);
      piVar6 = *(int **)(param_1 + 0x40);
      for (; piVar8 != piVar6; piVar8 = piVar8 + 1) {
        *piVar8 = (int)local_1c;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 4;
    }
    *local_1c = iVar1;
    local_1c[1] = iVar7;
    if (local_18 == 0) {
      iVar3 = 8;
      do {
        iVar4 = iVar3 + 4;
        *(undefined4 *)(iVar3 + (int)local_1c) = *(undefined4 *)(local_4 + 0x30);
        iVar3 = iVar4;
      } while (iVar4 < 0x1c);
    }
    local_14 = (iVar1 + 1) / 2;
    local_10 = (iVar7 + 1) / 2;
    if ((((local_14 == 1) && (local_10 == 1)) && (iVar1 == 1)) && (iVar7 == 1)) break;
    local_18 = local_18 + 1;
  }
  return;
}

