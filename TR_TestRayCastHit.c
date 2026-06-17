
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* float __cdecl TR_TestRayCastHit(class CTerrain *,class Matrix<float,3,3> const &,class
   Vector<float,3> const &,class Vector<float,3>,class Vector<float,3>,float,int,class
   Plane<float,3> &,class Vector<float,3> &) */

float __cdecl TR_TestRayCastHit(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float in_stack_0000001c;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 *in_stack_00000030;
  float *in_stack_00000034;
  CTerrain local_18 [24];
  
                    /* 0x17d4b0  3789
                       ?TR_TestRayCastHit@@YAMPAVCTerrain@@ABV?$Matrix@M$02$02@@ABV?$Vector@M$02@@V3@3MHAAV?$Plane@M$02@@AAV3@@Z
                        */
  DAT_36300ba4 = in_stack_0000002c;
  _DAT_36300be4 = *param_2;
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  _DAT_36300be8 = param_2[1];
  _DAT_36300bec = param_2[2];
  _DAT_36300bf0 = *param_3;
  _DAT_36300bf4 = param_2[3];
  _DAT_36300bf8 = param_2[4];
  _DAT_36300bfc = param_2[5];
  _DAT_36300c00 = param_3[1];
  _DAT_36300c04 = param_2[6];
  _DAT_36300c08 = param_2[7];
  _DAT_36300c0c = param_2[8];
  _DAT_36300c10 = param_3[2];
  FUN_3608d7d0((float *)&DAT_36300bb4,(float *)&DAT_36300be4);
  puVar5 = (undefined4 *)TR_GetStretchedTerrainBBox(local_18);
  _DAT_362a6c38 = *puVar5;
  _DAT_362a6c3c = puVar5[1];
  _DAT_362a6c40 = puVar5[2];
  _DAT_362a6c44 = puVar5[3];
  _DAT_362a6c48 = puVar5[4];
  _DAT_362a6c4c = puVar5[5];
  fVar3 = _DAT_36300bbc * in_stack_00000024;
  fVar2 = _DAT_36300bcc * in_stack_00000024;
  fVar1 = _DAT_36300bc4 * in_stack_0000001c;
  in_stack_00000024 =
       _DAT_36300bd4 * in_stack_0000001c +
       _DAT_36300bd8 * in_stack_00000020 + _DAT_36300bdc * in_stack_00000024 + _DAT_36300be0;
  in_stack_0000001c =
       _DAT_36300bb4 * in_stack_0000001c + _DAT_36300bb8 * in_stack_00000020 + fVar3 + _DAT_36300bc0
  ;
  in_stack_00000020 = fVar1 + _DAT_36300bc8 * in_stack_00000020 + fVar2 + _DAT_36300bd0;
  fVar6 = FUN_3617d160(uVar4,&stack0x0000001c,in_stack_00000028);
  *in_stack_00000030 = DAT_36300c38;
  in_stack_00000030[1] = DAT_36300c3c;
  in_stack_00000030[2] = DAT_36300c40;
  in_stack_00000030[3] = DAT_36300c44;
  *in_stack_00000034 = DAT_36300c2c;
  in_stack_00000034[1] = DAT_36300c30;
  in_stack_00000034[2] = DAT_36300c34;
  fVar1 = *in_stack_00000034;
  fVar2 = in_stack_00000034[1];
  fVar3 = in_stack_00000034[2];
  *in_stack_00000034 =
       _DAT_36300be4 * fVar1 + _DAT_36300be8 * fVar2 + _DAT_36300bec * fVar3 + _DAT_36300bf0;
  in_stack_00000034[1] =
       _DAT_36300bf4 * fVar1 + _DAT_36300bf8 * fVar2 + _DAT_36300bfc * fVar3 + _DAT_36300c00;
  in_stack_00000034[2] =
       _DAT_36300c04 * fVar1 + _DAT_36300c08 * fVar2 + _DAT_36300c0c * fVar3 + _DAT_36300c10;
  return (float)fVar6;
}

