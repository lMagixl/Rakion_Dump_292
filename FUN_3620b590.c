
int __thiscall FUN_3620b590(void *this,int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  puVar5 = *(undefined4 **)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 4);
  iVar8 = 0;
  iVar4 = 0x7fffffff;
  if (iVar2 != 1 && -1 < iVar2 + -1) {
    do {
      iVar1 = iVar8 + 1;
      puVar6 = puVar5;
      for (iVar7 = iVar1; iVar7 < iVar2; iVar7 = iVar7 + 1) {
        puVar6 = puVar6 + 1;
        iVar3 = FUN_3620b630(this,(int *)*puVar5,(int *)*puVar6);
        if (iVar3 < iVar4) {
          *param_2 = iVar8;
          *param_3 = iVar7;
          iVar4 = iVar3;
        }
      }
      puVar5 = puVar5 + 1;
      iVar8 = iVar1;
    } while (iVar1 < iVar2 + -1);
    return iVar4;
  }
  return 0x7fffffff;
}

