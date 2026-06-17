
void __cdecl FUN_3616af30(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = param_2;
  RM_SetCurrentDistance(0.0);
  iVar4 = param_2[0x1e];
  if (iVar4 < param_2[0x1f] + iVar4) {
    iVar3 = iVar4 * 0x7c;
    param_2 = (int *)((param_2[0x1f] + iVar4) - iVar4);
    do {
      puVar1 = (undefined4 *)(iVar3 + DAT_362fe9a4);
      iVar4 = *(int *)(iVar3 + 0x18 + DAT_362fe9a4) * 0x54 +
              *(int *)(**(int **)(iVar3 + DAT_362fe9a4) + 0x18);
      FUN_3616f7a0(iVar4);
      FUN_361692e0(param_1,puVar1,piVar2[0x1b]);
      FUN_361685d0((int)param_1,puVar1,piVar2,0);
      FUN_3616e810(iVar4);
      iVar3 = iVar3 + 0x7c;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  return;
}

