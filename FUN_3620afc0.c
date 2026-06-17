
int * __thiscall FUN_3620afc0(void *this,int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_c;
  int local_8;
  int local_4;
  
  piVar2 = param_1;
  piVar5 = (int *)param_1[2];
  local_c = 0;
  iVar3 = *piVar5 - *(int *)param_1[3];
  iVar8 = 1;
  if (1 < *(int *)this) {
    iVar9 = param_1[3] - (int)piVar5;
    do {
      piVar5 = piVar5 + 1;
      iVar7 = *piVar5 - *(int *)(iVar9 + (int)piVar5);
      if (iVar3 < iVar7) {
        iVar3 = iVar7;
        local_c = iVar8;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)this);
  }
  if (iVar3 != 0) {
    iVar3 = (*(int *)(param_1[2] + local_c * 4) + *(int *)(param_1[3] + local_c * 4)) / 2;
    piVar4 = FUN_3620ae80(this,1);
    piVar4[1] = local_c;
    piVar4[2] = iVar3;
    piVar5 = FUN_3620ae80(this,0);
    piVar4[3] = (int)piVar5;
    piVar5 = FUN_3620ae80(this,0);
    piVar4[4] = (int)piVar5;
    piVar5 = param_1 + 1;
    local_8 = 0;
    param_1 = (int *)0x0;
    local_4 = 0;
    if (0 < *piVar5) {
      do {
        puVar6 = *(undefined4 **)(piVar2[4] + local_4 * 4);
        puVar1 = (undefined4 *)puVar6[2];
        if (iVar3 < (int)puVar1[local_c]) {
          puVar6 = FUN_3620af00(this,*puVar6,puVar6[1],puVar1);
          *(undefined4 **)(*(int *)(piVar4[4] + 0x10) + local_8 * 4) = puVar6;
          local_8 = local_8 + 1;
        }
        else {
          puVar6 = FUN_3620af00(this,*puVar6,puVar6[1],puVar1);
          *(undefined4 **)(*(int *)(piVar4[3] + 0x10) + (int)param_1 * 4) = puVar6;
          param_1 = (int *)((int)param_1 + 1);
        }
        local_4 = local_4 + 1;
      } while (local_4 < piVar2[1]);
    }
    *(int **)(piVar4[3] + 4) = param_1;
    *(int *)(piVar4[4] + 4) = local_8;
    FUN_3620b1c0(this,piVar4[3]);
    FUN_3620b1c0(this,piVar4[4]);
    FUN_3620b440(this,piVar2);
    return piVar4;
  }
  iVar3 = 1;
  if (1 < param_1[1]) {
    do {
      piVar5 = *(int **)param_1[4];
      *piVar5 = *piVar5 + *(int *)((undefined4 *)param_1[4])[iVar3];
      iVar8 = *(int *)param_1[4];
      *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + *(int *)(((int *)param_1[4])[iVar3] + 4);
      FUN_3620b4e0(this,*(void **)(param_1[4] + iVar3 * 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  param_1[1] = 1;
  return param_1;
}

