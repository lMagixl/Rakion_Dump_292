
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361bf560(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float local_40 [16];
  
  FUN_361bf450(local_40);
  iVar8 = param_2 - (int)local_40;
  pfVar4 = local_40;
  param_2 = 4;
  do {
    pfVar9 = (float *)(iVar8 + (int)pfVar4);
    iVar10 = 4;
    pfVar11 = param_3;
    do {
      iVar7 = 4;
      pfVar5 = pfVar11;
      pfVar6 = pfVar9;
      fVar3 = _DAT_3622376c;
      do {
        fVar1 = *pfVar6;
        fVar2 = *pfVar5;
        pfVar5 = pfVar5 + 4;
        pfVar6 = pfVar6 + 1;
        iVar7 = iVar7 + -1;
        fVar3 = fVar1 * fVar2 + fVar3;
      } while (iVar7 != 0);
      *pfVar4 = fVar3;
      pfVar11 = pfVar11 + 1;
      pfVar4 = pfVar4 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  pfVar4 = local_40;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *param_1 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

