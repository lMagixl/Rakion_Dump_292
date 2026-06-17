
undefined * __cdecl FUN_3614c180(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  
  if (param_1 == 0) {
    *param_2 = -2;
    return PTR_s_stream_error_3623c978;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  *param_2 = iVar2;
  if (iVar2 == 0) {
    return &DAT_362fdc20;
  }
  if (iVar2 == -1) {
    pcVar8 = &DAT_362fdc21;
LAB_3614c1c2:
    if (*pcVar8 != '\0') goto LAB_3614c1d7;
  }
  else {
    pcVar8 = *(char **)(param_1 + 0x18);
    if (pcVar8 != (char *)0x0) goto LAB_3614c1c2;
  }
  pcVar8 = (&PTR_DAT_3623c970)[-*(int *)(param_1 + 0x38)];
LAB_3614c1d7:
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    free(*(void **)(param_1 + 0x50));
  }
  pcVar3 = *(char **)(param_1 + 0x54);
  pcVar5 = pcVar3 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar8;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = malloc((size_t)(pcVar3 + (int)(pcVar4 + ((3 - (int)(pcVar8 + 1)) - (int)pcVar5))));
  *(char **)(param_1 + 0x50) = pcVar5;
  if (pcVar5 != (char *)0x0) {
    pcVar3 = *(char **)(param_1 + 0x54);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    pcVar5 = &DAT_362a6654;
    do {
      pcVar3 = pcVar5;
      pcVar5 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    puVar10 = (undefined4 *)(*(int *)(param_1 + 0x50) + -1);
    do {
      pcVar5 = (char *)((int)puVar10 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    } while (*pcVar5 != '\0');
    puVar9 = (undefined4 *)&DAT_362a6654;
    for (uVar6 = (uint)(pcVar3 + -0x362a6653) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = (uint)(pcVar3 + -0x362a6653) & 3; pcVar5 = pcVar8, uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar5 - (int)pcVar8;
    pcVar5 = (char *)(*(int *)(param_1 + 0x50) + -1);
    do {
      pcVar3 = pcVar5 + 1;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar3 != '\0');
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar5 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar5 = pcVar5 + 1;
    }
    return *(undefined **)(param_1 + 0x50);
  }
  return PTR_s_insufficient_memory_3623c980;
}

