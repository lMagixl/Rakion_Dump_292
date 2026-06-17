
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class Vector<float,3> __cdecl pwGetPointProjection(class Vector<float,3> &,class Vector<float,3>
   &,class Vector<float,3> &,float) */

void __cdecl
pwGetPointProjection
          (Vector<float,3> *param_1,Vector<float,3> *param_2,Vector<float,3> *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_stack_00000014;
  
                    /* 0x18e410  4273  ?pwGetPointProjection@@YA?AV?$Vector@M$02@@AAV1@00M@Z */
  fVar1 = *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 8);
  fVar5 = -(((*(float *)param_2 * *(float *)param_4 +
             *(float *)(param_2 + 4) * *(float *)((int)param_4 + 4) +
             *(float *)(param_2 + 8) * *(float *)((int)param_4 + 8)) - in_stack_00000014) /
           ((*(float *)param_3 - *(float *)param_2) * *(float *)param_4 +
           (*(float *)(param_3 + 4) - *(float *)(param_2 + 4)) * *(float *)((int)param_4 + 4) +
           (*(float *)(param_3 + 8) - *(float *)(param_2 + 8)) * *(float *)((int)param_4 + 8)));
  fVar3 = *(float *)(param_2 + 8);
  fVar6 = _DAT_36223384 - fVar5;
  fVar4 = *(float *)(param_2 + 4);
  *(float *)param_1 = *(float *)param_2 * fVar6 + *(float *)param_3 * fVar5;
  *(float *)(param_1 + 4) = fVar4 * fVar6 + fVar1 * fVar5;
  *(float *)(param_1 + 8) = fVar3 * fVar6 + fVar2 * fVar5;
  return;
}

