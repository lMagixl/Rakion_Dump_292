
undefined8 __cdecl FUN_3620a9a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  puVar3 = param_1;
  DAT_3638848c = *param_1;
  DAT_36388468 = param_1[1];
  DAT_36388470 = param_1[2];
  DAT_36388474 = param_1[3];
  iVar2 = param_1[4];
  DAT_36388478 = DAT_36388474 * DAT_36388470 * DAT_36388468;
  pvVar4 = malloc(iVar2 * 8);
  iVar7 = 0;
  param_1 = (undefined4 *)0x0;
  if (0 < iVar2) {
    piVar8 = (int *)((int)pvVar4 + 4);
    do {
      piVar8[-1] = (int)param_1;
      pvVar5 = malloc(DAT_36388478);
      *piVar8 = (int)pvVar5;
      iVar6 = 0;
      if (0 < (int)DAT_36388478) {
        do {
          iVar1 = iVar7 * 4;
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 1;
          *(char *)(*piVar8 + -1 + iVar6) = (char)*(undefined4 *)(puVar3[6] + iVar1);
        } while (iVar6 < (int)DAT_36388478);
      }
      piVar8 = piVar8 + 2;
      param_1 = (undefined4 *)((int)param_1 + 1);
    } while ((int)param_1 < iVar2);
    return CONCAT44(pvVar4,iVar2);
  }
  return CONCAT44(pvVar4,iVar2);
}

