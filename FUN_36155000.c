
void __cdecl FUN_36155000(int param_1)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  
  iVar4 = FUN_3615a370((undefined4 *)(param_1 + 0x30));
  iVar7 = 0;
  if (0 < iVar4) {
    do {
      cVar3 = *(char *)(*(int *)(param_1 + 0x34) + 4 + iVar7 * 8);
      iVar1 = *(int *)(param_1 + 0x34) + iVar7 * 8;
      iVar5 = -1;
      cVar6 = '\0';
      if (cVar3 != '\0') {
        iVar5 = 0;
        cVar6 = cVar3;
      }
      if (*(char *)(iVar1 + 5) != '\0') {
        cVar6 = cVar6 + *(char *)(iVar1 + 5);
        iVar5 = 1;
      }
      if (*(char *)(iVar1 + 6) != '\0') {
        cVar6 = cVar6 + *(char *)(iVar1 + 6);
        iVar5 = 2;
      }
      if (*(char *)(iVar1 + 7) == '\0') {
        if (-1 < iVar5) goto LAB_36155067;
      }
      else {
        cVar6 = cVar6 + *(char *)(iVar1 + 7);
        iVar5 = 3;
LAB_36155067:
        pcVar2 = (char *)(iVar5 + 4 + iVar1);
        *pcVar2 = *pcVar2 + (-1 - cVar6);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar4);
  }
  return;
}

