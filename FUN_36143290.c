
void __fastcall FUN_36143290(int param_1)

{
  undefined4 *this;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  iVar1 = FUN_36143930(param_1 + 0xec);
  if (0 < iVar1) {
    this = (undefined4 *)(param_1 + 0x100);
    do {
      piVar2 = (int *)FUN_36143af0((void *)(param_1 + 0xec),iVar4);
      iVar1 = *piVar2;
      iVar5 = 0;
      iVar3 = FUN_360cb7c0((int)this);
      if (0 < iVar3) {
        piVar2 = *(int **)(param_1 + 0x104);
        do {
          if (*piVar2 == iVar1) goto LAB_36143323;
          iVar5 = iVar5 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar5 < iVar3);
      }
      iVar5 = *(int *)(param_1 + 0x108) + 1;
      *(int *)(param_1 + 0x108) = iVar5;
      iVar3 = FUN_3600bea0(this);
      if (iVar3 < iVar5) {
        iVar3 = FUN_3600bea0(this);
        FUN_36124000(this,iVar3 + *(int *)(param_1 + 0x10c));
      }
      *(int *)(*(int *)(param_1 + 0x104) + -4 + *(int *)(param_1 + 0x108) * 4) = iVar1;
LAB_36143323:
      iVar4 = iVar4 + 1;
      iVar1 = FUN_36143930(param_1 + 0xec);
    } while (iVar4 < iVar1);
  }
  return;
}

