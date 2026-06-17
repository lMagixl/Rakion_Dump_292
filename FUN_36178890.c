
void __cdecl FUN_36178890(int *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = param_1;
  iVar4 = 0;
  bVar2 = false;
  param_1 = (int *)FUN_36179270((int)(param_1 + 0x44));
  if (0 < (int)param_1) {
    do {
      iVar1 = piVar3[0x45];
      if ((*(byte *)(iVar1 + 4 + iVar4) & 1) != 0) {
        FUN_36178120(piVar3,*(int *)(iVar1 + iVar4));
      }
      if ((*(byte *)(iVar1 + iVar4 + 4) & 8) != 0) {
        FUN_36177a00(piVar3);
        bVar2 = true;
      }
      iVar4 = iVar4 + 0xc;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  piVar3[0x46] = 0;
  if (bVar2) {
    FUN_36177a80();
  }
  return;
}

