
void __fastcall FUN_36209ae0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  
  iVar5 = 0;
  if (0 < param_1[2]) {
    do {
      iVar6 = 0;
      if (0 < param_1[1]) {
        do {
          iVar4 = iVar6;
          if (iVar6 < 0) {
            iVar4 = 0;
          }
          iVar3 = iVar5;
          if (iVar5 < 0) {
            iVar3 = 0;
          }
          iVar1 = *(int *)param_1[3];
          if (iVar1 <= iVar4) {
            iVar4 = iVar1 + -1;
          }
          iVar2 = ((int *)param_1[3])[1];
          if (iVar2 <= iVar3) {
            iVar3 = iVar2 + -1;
          }
          iVar2 = *param_1;
          fVar7 = (float10)_CIpow();
          *(float *)(iVar2 + (iVar1 * iVar3 + iVar4) * 4) = (float)fVar7;
          iVar6 = iVar6 + 1;
        } while (iVar6 < param_1[1]);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1[2]);
  }
  return;
}

