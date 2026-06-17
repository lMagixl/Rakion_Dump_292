
void __thiscall FUN_3620b6a0(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1[2] < param_1[3]) {
    piVar3 = *(int **)(*(int *)(*param_1 + 0x10) + param_1[2] * 4);
    piVar4 = *(int **)(*(int *)(*param_1 + 0x10) + param_1[3] * 4);
    iVar6 = *piVar4;
    iVar5 = *piVar3;
    iVar7 = 0;
    if (0 < *(int *)this) {
      do {
        iVar1 = iVar7 * 4;
        piVar2 = (int *)(piVar3[2] + iVar7 * 4);
        iVar7 = iVar7 + 1;
        *piVar2 = (*(int *)(piVar4[2] + iVar1) * *piVar4 + *piVar3 * *piVar2) / (iVar6 + iVar5);
      } while (iVar7 < *(int *)this);
    }
    *piVar3 = iVar6 + iVar5;
    piVar3[1] = param_1[1];
    FUN_3620b4e0(this,piVar4);
    *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + -1;
    iVar6 = *param_1;
    iVar5 = param_1[3];
    if (iVar5 < *(int *)(iVar6 + 4)) {
      do {
        iVar5 = iVar5 + 1;
        *(undefined4 *)(*(int *)(iVar6 + 0x10) + -4 + iVar5 * 4) =
             *(undefined4 *)(*(int *)(iVar6 + 0x10) + iVar5 * 4);
        iVar6 = *param_1;
      } while (iVar5 < *(int *)(iVar6 + 4));
    }
  }
  return;
}

