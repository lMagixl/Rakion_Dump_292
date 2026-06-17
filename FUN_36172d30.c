
void __cdecl FUN_36172d30(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  
  iVar4 = *param_2;
  iVar5 = *param_3;
  iVar1 = param_3[2];
  local_10 = iVar5;
  if ((iVar5 <= iVar4) && (local_10 = iVar1, iVar4 <= iVar1)) {
    local_10 = iVar4;
  }
  iVar4 = param_2[2];
  if ((iVar5 <= iVar4) && (iVar5 = iVar1, iVar4 <= iVar1)) {
    iVar5 = iVar4;
  }
  iVar4 = param_3[1];
  iVar1 = param_2[1];
  iVar2 = param_3[3];
  iVar3 = iVar4;
  if ((iVar4 <= iVar1) && (iVar3 = iVar1, iVar2 < iVar1)) {
    iVar3 = iVar2;
  }
  iVar1 = param_2[3];
  if ((iVar4 <= iVar1) && (iVar4 = iVar1, iVar2 < iVar1)) {
    iVar4 = iVar2;
  }
  *param_1 = local_10;
  param_1[2] = iVar5;
  param_1[1] = iVar3;
  param_1[3] = iVar4;
  return;
}

