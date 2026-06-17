
int FUN_361709a0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int *piVar4;
  int unaff_EDI;
  
  iVar1 = FUN_3600c5c0((undefined4 *)(unaff_EDI + 0x14));
  if (0 < iVar1) {
    iVar1 = *(int *)(unaff_EDI + 0x18) + in_EAX * 0x18;
    iVar2 = FUN_3600c550((undefined4 *)(iVar1 + 4));
    iVar3 = 0;
    if (0 < iVar2) {
      piVar4 = *(int **)(iVar1 + 8);
      do {
        if (*piVar4 == unaff_EBX) {
          return iVar3;
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 0x18;
      } while (iVar3 < iVar2);
    }
  }
  return -1;
}

