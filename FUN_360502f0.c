
void __fastcall FUN_360502f0(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_3604aa70((int)param_1);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_3604a710(param_1,iVar3);
      *(int *)(iVar2 + 0x20) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = FUN_3604aaa0((int)param_1 + 0x14);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_3604a740((void *)((int)param_1 + 0x14),iVar3);
      *(int *)(iVar2 + 0x28) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = FUN_36054350((int)param_1 + 0x28);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_3604f3f0((void *)((int)param_1 + 0x28),iVar3);
      *(int *)(iVar2 + 4) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = FUN_360543c0((int)param_1 + 0x3c);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_36054380((void *)((int)param_1 + 0x3c),iVar3);
      *(int *)(iVar2 + 4) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = FUN_3604a760((int)param_1 + 0x50);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_3604a750((void *)((int)param_1 + 0x50),iVar3);
      *(int *)(iVar2 + 4) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}

