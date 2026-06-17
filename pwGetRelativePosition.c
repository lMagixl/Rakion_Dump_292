
/* class Vector<float,3> __cdecl pwGetRelativePosition(class Vector<float,3> &,class
   Matrix<float,3,3> &) */

void __cdecl pwGetRelativePosition(Vector<float,3> *param_1,Matrix<float,3,3> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *in_stack_0000000c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x18e340  4275
                       ?pwGetRelativePosition@@YA?AV?$Vector@M$02@@AAV1@AAV?$Matrix@M$02$02@@@Z */
  local_48[0] = *in_stack_0000000c;
  local_48[1] = in_stack_0000000c[3];
  local_48[2] = in_stack_0000000c[6];
  local_48[3] = in_stack_0000000c[1];
  local_38 = in_stack_0000000c[4];
  local_34 = in_stack_0000000c[7];
  local_30 = in_stack_0000000c[2];
  local_2c = in_stack_0000000c[5];
  local_28 = in_stack_0000000c[8];
  pfVar8 = local_48;
  pfVar9 = local_24;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar9 = pfVar9 + 1;
  }
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  fVar3 = *(float *)param_2;
  fVar4 = *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 8);
  fVar6 = *(float *)param_2;
  *(float *)param_1 =
       local_24[0] * *(float *)param_2 +
       local_24[2] * *(float *)(param_2 + 8) + local_24[1] * *(float *)(param_2 + 4);
  *(float *)(param_1 + 4) = local_24[3] * fVar3 + local_10 * fVar2 + local_14 * fVar1;
  *(float *)(param_1 + 8) = local_c * fVar6 + local_4 * fVar5 + local_8 * fVar4;
  return;
}

