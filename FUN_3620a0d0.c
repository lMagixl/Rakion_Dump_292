
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_3620a0d0(undefined4 *param_1)

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
  _DAT_36388450 = *param_1;
  DAT_36388428 = param_1[1];
  DAT_36388430 = param_1[2];
  DAT_36388434 = param_1[3];
  iVar2 = param_1[4];
  DAT_36388438 = DAT_36388434 * DAT_36388430 * DAT_36388428;
  DAT_3638845c = iVar2;
  pvVar4 = malloc(iVar2 << 3);
  iVar7 = 0;
  param_1 = (undefined4 *)0x0;
  if (iVar2 < 1) {
    return CONCAT44(pvVar4,iVar2);
  }
  piVar8 = (int *)((int)pvVar4 + 4);
  do {
    piVar8[-1] = (int)param_1;
    pvVar5 = malloc(DAT_36388438);
    *piVar8 = (int)pvVar5;
    iVar6 = 0;
    if (0 < (int)DAT_36388438) {
      do {
        iVar1 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 1;
        *(char *)(*piVar8 + -1 + iVar6) = (char)*(undefined4 *)(puVar3[6] + iVar1);
      } while (iVar6 < (int)DAT_36388438);
    }
    param_1 = (undefined4 *)((int)param_1 + 1);
    piVar8 = piVar8 + 2;
  } while ((int)param_1 < iVar2);
  return CONCAT44(pvVar4,iVar2);
}

