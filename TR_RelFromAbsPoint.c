
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class Vector<long,2> __cdecl TR_RelFromAbsPoint(class CTerrain const *,class Vector<float,3>
   const &,float const (&)[12]) */

void __cdecl TR_RelFromAbsPoint(CTerrain *param_1,Vector<float,3> *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float *in_stack_00000010;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x17b3d0  3777
                       ?TR_RelFromAbsPoint@@YA?AV?$Vector@J$01@@PBVCTerrain@@ABV?$Vector@M$02@@AAY0M@$$CBM@Z
                        */
  fVar1 = *param_3;
  iVar2 = *(int *)(param_2 + 0x2c);
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  FUN_3608d7d0(&local_30,in_stack_00000010);
  ceil((double)((local_30 * fVar1 + local_2c * fVar3 + local_28 * fVar4 + local_24) /
                *(float *)(iVar2 + 0x34) - _DAT_36227cf0));
  uVar5 = FUN_361bfd6c();
  ceil((double)((local_10 * fVar1 + local_c * fVar3 + local_8 * fVar4 + local_4) /
                *(float *)(iVar2 + 0x3c) - _DAT_36227cf0));
  uVar6 = FUN_361bfd6c();
  *(int *)param_1 = (int)uVar5;
  *(int *)(param_1 + 4) = (int)uVar6;
  return;
}

