
int __cdecl FUN_36064470(int *param_1,int param_2,int param_3,int param_4,int param_5,float param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar6 = param_2 + param_1[2];
  iVar4 = param_3 + param_1[3];
  if ((((iVar6 < 1) || (iVar4 < 1)) || (*(int *)(iVar1 + 100) + -2 < iVar6)) ||
     (*(int *)(iVar1 + 0x68) + -2 < iVar4)) {
    return 0;
  }
  iVar5 = 0;
  iVar2 = FUN_36063720(0x362bf950);
  iVar1 = DAT_362bf908;
  piVar3 = DAT_362bf954;
  if (0 < iVar2) {
    do {
      if (*piVar3 == param_5) {
        piVar3 = DAT_362bf954 + iVar5 * 7;
        piVar3[3] = param_4;
        piVar3[4] = iVar1;
        goto LAB_36064517;
      }
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 7;
    } while (iVar5 < iVar2);
  }
  piVar3 = (int *)FUN_36063b80((undefined4 *)&DAT_362bf950);
  iVar1 = DAT_362bf908;
  *piVar3 = param_5;
  piVar3[3] = param_4;
  piVar3[4] = iVar1;
  piVar3[5] = (int)param_6;
  piVar3[6] = 0;
LAB_36064517:
  piVar3[1] = iVar6;
  piVar3[2] = iVar4;
  if (DAT_362a40e0 == 0) {
    FUN_36063d00(param_1,param_6,(int)piVar3,1.4013e-45);
  }
  return piVar3[6];
}

