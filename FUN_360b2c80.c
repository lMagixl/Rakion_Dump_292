
void __fastcall FUN_360b2c80(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_360b3d10(param_1 + 0x14);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_360b3aa0((void *)(param_1 + 0x14),iVar4);
      piVar3 = (int *)*piVar2;
      do {
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*piVar2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}

