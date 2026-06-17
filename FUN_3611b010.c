
void __thiscall FUN_3611b010(void *this,int param_1)

{
  int iVar1;
  CRelationDst *pCVar2;
  int *piVar3;
  
  if ((param_1 != 0) && (*(int *)(*(int *)(param_1 + 0x8c) + 8) != 0)) {
    piVar3 = *(int **)(param_1 + 0x9c);
    while (*piVar3 != 0) {
      pCVar2 = CRelationLnk::GetDst((CRelationLnk *)(piVar3 + -2));
      iVar1 = *(int *)(pCVar2 + -0xa8);
      pCVar2 = pCVar2 + -0xac;
      if ((iVar1 == 4) || ((iVar1 == 8 && (DAT_362fcb90 != 0)))) {
        FUN_3611ca20(this,(int *)pCVar2,param_1);
LAB_3611b0a6:
        piVar3 = (int *)*piVar3;
      }
      else if ((iVar1 == 3) || (iVar1 == 5)) {
        FUN_3611a760(this,(float *)pCVar2);
        piVar3 = (int *)*piVar3;
      }
      else if ((iVar1 == 9) || (iVar1 == 10)) {
        FUN_3611ab90(this,(float *)pCVar2);
        piVar3 = (int *)*piVar3;
      }
      else {
        if (iVar1 != 0xb) goto LAB_3611b0a6;
        FUN_3611afa0(this,(int)pCVar2);
        piVar3 = (int *)*piVar3;
      }
    }
  }
  return;
}

