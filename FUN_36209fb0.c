
undefined1 * __cdecl FUN_36209fb0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  
  puVar4 = param_1;
  DAT_36388410 = *param_1;
  DAT_36388404 = param_1[1];
  DAT_36388408 = param_1[2];
  DAT_3638840c = param_1[3];
  iVar5 = DAT_3638840c * DAT_36388408 * DAT_36388404;
  DAT_36388418 = (undefined4 *)param_1[4];
  puVar6 = malloc((int)DAT_36388418 * iVar5);
  iVar7 = 0;
  if (DAT_36388418 != (undefined4 *)0x0) {
    param_1 = DAT_36388418;
    iVar2 = iVar5;
    puVar3 = puVar6;
    do {
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        iVar1 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        *puVar3 = (char)*(undefined4 *)(puVar4[6] + iVar1);
        puVar3 = puVar3 + 1;
      }
      param_1 = (undefined4 *)((int)param_1 + -1);
      iVar2 = iVar5;
    } while (param_1 != (undefined4 *)0x0);
  }
  return puVar6;
}

