
/* int __cdecl RM_GetBoneTransformations(class CModelInstance &,long,float (*)[12]) */

int __cdecl RM_GetBoneTransformations(CModelInstance *param_1,long param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
                    /* 0x16dd50  2913  ?RM_GetBoneTransformations@@YAHAAVCModelInstance@@JPAY0M@M@Z
                        */
  iVar2 = FUN_3615fda0((int)(param_1 + 0xc));
  if (iVar2 == 0) {
    CalculateRenderingData(param_1);
  }
  iVar2 = FUN_3615fda0((int)(param_1 + 0xc));
  iVar4 = 1;
  if (1 < iVar2) {
    piVar1 = *(int **)(param_1 + 0x10);
    do {
      piVar3 = piVar1 + 0x3a;
      if (*(int *)*piVar3 == param_2) {
        if (*(int *)(*piVar3 + 8) != 0) {
          *param_3 = (float)piVar1[0x5c];
          param_3[1] = (float)piVar1[0x5d];
          param_3[2] = (float)piVar1[0x5e];
          param_3[3] = (float)piVar1[0x5f];
          param_3[4] = (float)piVar1[0x60];
          param_3[5] = (float)piVar1[0x61];
          param_3[6] = (float)piVar1[0x62];
          param_3[7] = (float)piVar1[99];
          param_3[8] = (float)piVar1[100];
          param_3[9] = (float)piVar1[0x65];
          param_3[10] = (float)piVar1[0x66];
          param_3[0xb] = (float)piVar1[0x67];
          return 1;
        }
        FUN_36162800(param_3,(float *)(param_1 + 0x60),(float *)(piVar1 + 0x68));
        return 1;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar3;
    } while (iVar4 < iVar2);
    return 0;
  }
  return 0;
}

