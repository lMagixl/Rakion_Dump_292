
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
FUN_361fc1e0(int param_1,float *param_2,float param_3,int param_4,int param_5,float param_6,
            float param_7)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  byte *pbVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  float local_14;
  
  iVar2 = param_4;
  iVar4 = FUN_361bf99c(param_4 * (int)param_6 * (int)param_7);
  pfVar5 = (float *)FUN_361bf99c((int)param_2 * (int)param_3 * 4);
  iVar10 = (int)param_6 * (int)param_7;
  pfVar6 = (float *)FUN_361bf99c(iVar10 * 4);
  param_4 = 0;
  if (0 < iVar2) {
    do {
      pbVar14 = (byte *)(param_4 + param_1);
      if (0 < (int)param_3) {
        local_14 = param_3;
        pfVar9 = pfVar5;
        do {
          pbVar7 = pbVar14;
          pfVar8 = pfVar9;
          pfVar12 = param_2;
          if (0 < (int)param_2) {
            do {
              pfVar9 = pfVar8 + 1;
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + iVar2;
              pfVar12 = (float *)((int)pfVar12 + -1);
              *pfVar8 = (float)bVar1;
              pfVar8 = pfVar9;
            } while (pfVar12 != (float *)0x0);
          }
          pbVar14 = pbVar14 + param_5;
          local_14 = (float)((int)local_14 + -1);
        } while (local_14 != 0.0);
      }
      FUN_361fd990(pfVar5,param_3,param_2,pfVar6,param_7,param_6);
      puVar13 = (undefined1 *)(param_4 + iVar4);
      iVar11 = iVar10;
      if (0 < iVar10) {
        do {
          uVar3 = ftol();
          *puVar13 = uVar3;
          puVar13 = puVar13 + iVar2;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      param_4 = param_4 + 1;
    } while (param_4 < iVar2);
  }
  operator_delete(pfVar5);
  operator_delete(pfVar6);
  return iVar4;
}

