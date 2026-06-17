
void __cdecl FUN_361001b0(undefined4 *param_1,int param_2,int param_3,int *param_4,uint *param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  param_1[2] = 0;
  if (param_4 < (int *)(param_3 + param_2)) {
    while (*param_4 == 0x34544e45) {
      param_1[2] = param_1[2] + 1;
      iVar2 = FUN_361005f0(param_1);
      if (iVar2 < (int)param_1[2]) {
        iVar2 = FUN_361005f0(param_1);
        FUN_36100690(param_1,iVar2 + param_1[3]);
      }
      piVar1 = (int *)(param_1[1] + -0xc + param_1[2] * 0xc);
      piVar1[1] = (int)param_4 - param_2;
      piVar3 = param_4 + 2;
      *piVar1 = param_4[1];
      param_4 = (int *)((int)param_4 + *piVar3 + 0xc);
      piVar1[2] = *piVar3 + 0xc;
      if ((int *)(param_3 + param_2) <= param_4) {
        return;
      }
    }
    *param_5 = (uint)param_4;
  }
  return;
}

