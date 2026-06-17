
/* int __cdecl RM_GetBoneRelPosition(class CModelInstance &,long,class Vector<float,3> &,class
   Vector<float,3> &) */

int __cdecl
RM_GetBoneRelPosition
          (CModelInstance *param_1,long param_2,Vector<float,3> *param_3,Vector<float,3> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  float fVar11;
  int iVar12;
  float fVar13;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
                    /* 0x16d9e0  2912
                       ?RM_GetBoneRelPosition@@YAHAAVCModelInstance@@JAAV?$Vector@M$02@@1@Z */
  iVar9 = FUN_3615fda0((int)(param_1 + 0xc));
  if (iVar9 == 0) {
    CalculateRenderingData(param_1);
  }
  iVar9 = FUN_3615fda0((int)(param_1 + 0xc));
  iVar12 = 1;
  if (1 < iVar9) {
    piVar8 = *(int **)(param_1 + 0x10);
    do {
      piVar10 = piVar8 + 0x3a;
      if (*(int *)*piVar10 == param_2) {
        *(undefined4 *)param_3 = 0;
        *(undefined4 *)(param_3 + 4) = 0;
        *(undefined4 *)(param_3 + 8) = 0;
        *(undefined4 *)param_4 = *(undefined4 *)(*piVar10 + 0x5c);
        *(undefined4 *)(param_4 + 4) = 0;
        *(undefined4 *)(param_4 + 8) = 0;
        if (*(int *)(*piVar10 + 8) == 0) {
          local_20 = (float)piVar8[0x6c];
          fVar1 = (float)piVar8[0x68];
          fVar2 = (float)piVar8[0x69];
          local_1c = (float)piVar8[0x6d];
          fVar3 = (float)piVar8[0x6a];
          fVar4 = (float)piVar8[0x6b];
          local_18 = (float)piVar8[0x6e];
          local_14 = (float)piVar8[0x6f];
          local_10 = (float)piVar8[0x70];
          local_c = (float)piVar8[0x71];
          fVar13 = (float)piVar8[0x72];
          fVar11 = (float)piVar8[0x73];
        }
        else {
          local_20 = (float)piVar8[0x60];
          fVar1 = (float)piVar8[0x5c];
          fVar2 = (float)piVar8[0x5d];
          local_1c = (float)piVar8[0x61];
          fVar3 = (float)piVar8[0x5e];
          fVar4 = (float)piVar8[0x5f];
          local_18 = (float)piVar8[0x62];
          local_14 = (float)piVar8[99];
          local_10 = (float)piVar8[100];
          local_c = (float)piVar8[0x65];
          fVar13 = (float)piVar8[0x66];
          fVar11 = (float)piVar8[0x67];
        }
        fVar5 = *(float *)param_3;
        fVar7 = *(float *)(param_3 + 8);
        fVar6 = *(float *)(param_3 + 4);
        *(float *)param_3 = fVar5 * fVar1 + fVar2 * fVar6 + fVar3 * fVar7 + fVar4;
        *(float *)(param_3 + 4) = local_20 * fVar5 + local_1c * fVar6 + local_18 * fVar7 + local_14;
        *(float *)(param_3 + 8) = local_10 * fVar5 + local_c * fVar6 + fVar13 * fVar7 + fVar11;
        fVar5 = *(float *)param_4;
        fVar6 = *(float *)(param_4 + 4);
        fVar7 = *(float *)(param_4 + 8);
        *(float *)param_4 = fVar5 * fVar1 + fVar2 * fVar6 + fVar3 * fVar7 + fVar4;
        *(float *)(param_4 + 4) = local_20 * fVar5 + local_1c * fVar6 + local_18 * fVar7 + local_14;
        *(float *)(param_4 + 8) = local_10 * fVar5 + local_c * fVar6 + fVar13 * fVar7 + fVar11;
        return 1;
      }
      iVar12 = iVar12 + 1;
      piVar8 = piVar10;
    } while (iVar12 < iVar9);
    return 0;
  }
  return 0;
}

