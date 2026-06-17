
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36202320(int *param_1,undefined4 param_2,undefined4 param_3,double param_4)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  double local_10;
  
  iVar3 = 0;
  iVar2 = param_1[1];
  if (0 < iVar2) {
    do {
      fVar4 = ((float10)iVar3 + (float10)-(float)(iVar2 / 2) + (float10)_DAT_3624cf34) *
              (float10)(float)param_4;
      if (fVar4 == (float10)_DAT_3624cda8) {
        local_10 = 1.0;
      }
      else {
        fVar5 = (float10)fsin(fVar4 * (float10)_DAT_3624cf68);
        local_10 = (double)(fVar5 / (fVar4 * (float10)_DAT_3624cf68));
      }
      fVar4 = fVar4 / (float10)(iVar2 / 2);
      dVar1 = (double)(SQRT((float10)_DAT_3624cdd0 - fVar4 * fVar4) *
                      (float10)(double)CONCAT44(param_3,param_2));
      fVar4 = (float10)FUN_362022c0(SUB84(dVar1,0),(int)((ulonglong)dVar1 >> 0x20));
      fVar5 = (float10)FUN_362022c0(param_2,param_3);
      iVar3 = iVar3 + 1;
      *(float *)(*param_1 + -4 + iVar3 * 4) =
           (float)(((float10)(double)fVar4 / fVar5) * (float10)local_10);
    } while (iVar3 < iVar2);
  }
  FUN_36208cc0(param_1);
  return;
}

