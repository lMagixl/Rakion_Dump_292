
/* int __cdecl RM_GetBoneAbsPosition(class CModelInstance &,long,class Vector<float,3> &,class
   Vector<float,3> &) */

int __cdecl
RM_GetBoneAbsPosition
          (CModelInstance *param_1,long param_2,Vector<float,3> *param_3,Vector<float,3> *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
                    /* 0x16dc70  2911
                       ?RM_GetBoneAbsPosition@@YAHAAVCModelInstance@@JAAV?$Vector@M$02@@1@Z */
  iVar4 = RM_GetBoneRelPosition(param_1,param_2,param_3,param_4);
  fVar1 = *(float *)param_3;
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_3 + 8);
  *(float *)param_3 =
       fVar1 * *(float *)(param_1 + 0x60) +
       fVar2 * *(float *)(param_1 + 100) + fVar3 * *(float *)(param_1 + 0x68) +
       *(float *)(param_1 + 0x6c);
  *(float *)(param_3 + 4) =
       fVar1 * *(float *)(param_1 + 0x70) +
       fVar2 * *(float *)(param_1 + 0x74) + fVar3 * *(float *)(param_1 + 0x78) +
       *(float *)(param_1 + 0x7c);
  *(float *)(param_3 + 8) =
       fVar1 * *(float *)(param_1 + 0x80) +
       fVar2 * *(float *)(param_1 + 0x84) + fVar3 * *(float *)(param_1 + 0x88) +
       *(float *)(param_1 + 0x8c);
  fVar1 = *(float *)param_4;
  fVar2 = *(float *)(param_4 + 4);
  fVar3 = *(float *)(param_4 + 8);
  *(float *)param_4 =
       fVar1 * *(float *)(param_1 + 0x60) +
       fVar2 * *(float *)(param_1 + 100) + fVar3 * *(float *)(param_1 + 0x68) +
       *(float *)(param_1 + 0x6c);
  *(float *)(param_4 + 4) =
       fVar1 * *(float *)(param_1 + 0x70) +
       fVar2 * *(float *)(param_1 + 0x74) + fVar3 * *(float *)(param_1 + 0x78) +
       *(float *)(param_1 + 0x7c);
  *(float *)(param_4 + 8) =
       fVar1 * *(float *)(param_1 + 0x80) +
       fVar2 * *(float *)(param_1 + 0x84) + fVar3 * *(float *)(param_1 + 0x88) +
       *(float *)(param_1 + 0x8c);
  return iVar4;
}

