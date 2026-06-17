
/* class Vector<float,2> __cdecl TR_CalcShadingTC(class CTerrain const *,class Vector<float,3> const
   &,float const (&)[12]) */

void __cdecl TR_CalcShadingTC(CTerrain *param_1,Vector<float,3> *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  float *in_stack_00000010;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x17b8f0  3746
                       ?TR_CalcShadingTC@@YA?AV?$Vector@M$01@@PBVCTerrain@@ABV?$Vector@M$02@@AAY0M@$$CBM@Z
                        */
  iVar2 = *(int *)(param_2 + 0x2c);
  iVar3 = *(int *)(iVar2 + 0x18);
  iVar4 = *(int *)(iVar2 + 0x1c);
  iVar10 = iVar3 + -1;
  bVar8 = (byte)*(int *)(iVar2 + 0x28);
  if (*(int *)(iVar2 + 0x28) < 0) {
    iVar10 = iVar10 >> (-bVar8 & 0x1f);
    iVar9 = iVar4 + -1 >> (-bVar8 & 0x1f);
  }
  else {
    iVar10 = iVar10 << (bVar8 & 0x1f);
    iVar9 = iVar4 + -1 << (bVar8 & 0x1f);
  }
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  FUN_3608d7d0(&local_30,in_stack_00000010);
  fVar1 = *(float *)(iVar2 + 0x3c);
  *(float *)param_1 =
       ((local_30 * fVar5 + local_28 * fVar7 + local_2c * fVar6 + local_24) /
       *(float *)(iVar2 + 0x34)) / ((float)iVar3 / (float)iVar10);
  *(float *)(param_1 + 4) =
       ((local_c * fVar6 + local_10 * fVar5 + local_8 * fVar7 + local_4) / fVar1) /
       ((float)iVar4 / (float)iVar9);
  return;
}

