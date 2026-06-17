
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* class Plane<float,3> __cdecl TR_GetPlaneFromPoint(class CTerrain const *,float const
   (&)[12],class Vector<float,3> const &) */

CTerrain * __cdecl TR_GetPlaneFromPoint(CTerrain *param_1,float *param_2,Vector<float,3> *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  float *in_stack_00000010;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60 [5];
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
                    /* 0x173dd0  3762
                       ?TR_GetPlaneFromPoint@@YA?AV?$Plane@M$02@@PBVCTerrain@@AAY0M@$$CBMABV?$Vector@M$02@@@Z
                        */
  piVar1 = (int *)param_2[0xb];
  iVar2 = piVar1[6];
  iVar3 = *piVar1;
  FUN_3608d7d0(&local_30,(float *)param_3);
  local_60[0] = (float)piVar1[0xd];
  local_60[1] = 0.0;
  local_60[2] = 0.0;
  local_60[3] = 0.0;
  local_60[4] = 0.0;
  local_4c = piVar1[0xe];
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = piVar1[0xf];
  local_34 = 0;
  FUN_36162680(&local_94,(float *)param_3,local_60);
  fVar4 = (local_30 * *in_stack_00000010 +
           local_2c * in_stack_00000010[1] + local_28 * in_stack_00000010[2] + local_24) /
          (float)piVar1[0xd];
  fVar5 = (local_10 * *in_stack_00000010 +
           local_c * in_stack_00000010[1] + local_8 * in_stack_00000010[2] + local_4) /
          (float)piVar1[0xf];
  floor((double)fVar4);
  uVar16 = FUN_361bfd6c();
  iVar13 = (int)uVar16;
  local_b0 = (float)iVar13;
  floor((double)fVar5);
  uVar16 = FUN_361bfd6c();
  iVar14 = (int)uVar16;
  fVar6 = (float)(int)local_b0;
  local_64 = fVar4 - fVar6;
  fVar4 = (float)iVar14;
  local_b0 = fVar5 - fVar4;
  uVar15 = iVar14 * iVar2 + iVar13;
  fVar5 = (float)*(ushort *)(iVar3 + uVar15 * 2);
  fVar7 = (float)(iVar13 + 1);
  iVar2 = uVar15 + iVar2;
  fVar8 = (float)*(ushort *)(iVar3 + 2 + uVar15 * 2);
  local_b4 = (float)*(ushort *)(iVar3 + iVar2 * 2);
  fVar9 = (float)(iVar14 + 1);
  fVar10 = (float)*(ushort *)(iVar3 + iVar2 * 2 + 2);
  fVar12 = local_94 * fVar6 + local_90 * fVar5 + local_8c * fVar4 + local_88;
  fVar11 = local_84 * fVar6 + local_80 * fVar5 + local_7c * fVar4 + local_78;
  fVar5 = local_74 * fVar6 + local_70 * fVar5 + local_6c * fVar4 + local_68;
  local_cc = fVar7 * local_94 + local_90 * fVar8 + local_8c * fVar4 + local_88;
  local_c8 = local_84 * fVar7 + local_80 * fVar8 + local_7c * fVar4 + local_78;
  local_c4 = local_74 * fVar7 + local_70 * fVar8 + local_6c * fVar4 + local_68;
  local_a0 = fVar6 * local_94 + local_90 * local_b4 + local_8c * fVar9 + local_88;
  local_9c = local_84 * fVar6 + local_80 * local_b4 + local_7c * fVar9 + local_78;
  local_98 = local_74 * fVar6 + local_70 * local_b4 + local_6c * fVar9 + local_68;
  local_c0 = fVar7 * local_94 + local_90 * fVar10 + local_8c * fVar9 + local_88;
  local_bc = local_84 * fVar7 + local_80 * fVar10 + local_7c * fVar9 + local_78;
  local_b8 = local_74 * fVar7 + local_70 * fVar10 + local_6c * fVar9 + local_68;
  if ((uVar15 & 1) == 0) {
    local_d8 = fVar12;
    local_d4 = fVar11;
    local_d0 = fVar5;
    local_ac = local_a0;
    local_a8 = local_9c;
    local_a4 = local_98;
    local_a0 = local_c0;
    local_9c = local_bc;
    local_98 = local_b8;
    if (local_b0 <= local_64) {
      local_d8 = local_cc;
      local_d4 = local_c8;
      local_d0 = local_c4;
      local_ac = fVar12;
      local_a8 = fVar11;
      local_a4 = fVar5;
    }
  }
  else {
    local_d8 = local_c0;
    local_d4 = local_bc;
    local_d0 = local_b8;
    local_ac = local_cc;
    local_a8 = local_c8;
    local_a4 = local_c4;
    if (local_b0 <= _DAT_36223384 - local_64) {
      local_d8 = local_cc;
      local_d4 = local_c8;
      local_d0 = local_c4;
      local_ac = fVar12;
      local_a8 = fVar11;
      local_a4 = fVar5;
    }
  }
  FUN_360bbab0(param_1,&local_ac,&local_a0,&local_d8);
  return param_1;
}

