
void __fastcall FUN_361a90c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = (int *)(param_1 + 0x18);
  iVar6 = 3;
  do {
    iVar1 = *piVar5;
    if ((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(int *)(iVar1 + 4) - iVar1;
    }
    iVar2 = piVar5[-1];
    if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(iVar2 + 4) - iVar2;
    }
    if (uVar4 < uVar3) {
      *piVar5 = piVar5[1];
      piVar5[1] = iVar1;
    }
    piVar5 = piVar5 + -1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}

