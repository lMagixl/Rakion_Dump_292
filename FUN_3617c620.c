
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_3617c620(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  bool bVar13;
  int local_d4;
  float local_cc;
  int local_c8;
  float local_90;
  float local_8c;
  float local_88;
  float local_84 [4];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  int local_44 [6];
  float local_2c;
  float local_28;
  uint local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10 [4];
  
  local_cc = 3e+38;
  if ((((param_1 < 0) || (param_2 < 0)) || (DAT_36300bb0[6] + -1 <= param_1)) ||
     (DAT_36300bb0[7] + -1 <= param_2)) {
    return (float10)_DAT_36222fa4;
  }
  iVar12 = DAT_36300bb0[6];
  local_84[1] = (float)param_1 * (float)DAT_36300bb0[0xd];
  uVar10 = iVar12 * param_2 + param_1;
  puVar1 = (ushort *)(*DAT_36300bb0 + uVar10 * 2);
  local_84[2] = (float)*puVar1 * (float)DAT_36300bb0[0xe];
  local_84[3] = (float)param_2 * (float)DAT_36300bb0[0xf];
  local_74 = (float)(param_1 + 1) * (float)DAT_36300bb0[0xd];
  local_70 = (float)puVar1[1] * (float)DAT_36300bb0[0xe];
  local_6c = (float)param_2 * (float)DAT_36300bb0[0xf];
  local_68 = (float)param_1 * (float)DAT_36300bb0[0xd];
  local_5c = local_74;
  local_64 = (float)puVar1[iVar12] * (float)DAT_36300bb0[0xe];
  local_60 = (float)(param_2 + 1) * (float)DAT_36300bb0[0xf];
  cVar11 = *(char *)((iVar12 + -1) * param_2 + DAT_36300bb0[2] + param_1);
  local_58 = (float)puVar1[iVar12 + 1] * (float)DAT_36300bb0[0xe];
  local_54 = local_60;
  if (DAT_36300ba4 != 0) {
    cVar11 = -1;
  }
  iVar12 = 0;
  local_d4 = 0;
  if ((uVar10 & 1) == 0) {
    if (((((_DAT_36300bac <= local_64) || (_DAT_36300bac <= local_58)) ||
         (_DAT_36300bac <= local_84[2])) &&
        (((local_64 < _DAT_36300ba8 != (local_64 == _DAT_36300ba8) ||
          (local_58 < _DAT_36300ba8 != (local_58 == _DAT_36300ba8))) ||
         (local_84[2] < _DAT_36300ba8 != (local_84[2] == _DAT_36300ba8))))) && (cVar11 == -1)) {
      local_44[0] = 2;
      local_44[1] = 3;
      local_44[2] = 0;
      local_d4 = 3;
      iVar12 = 3;
    }
    if (((((local_84[2] < _DAT_36300bac) && (local_58 < _DAT_36300bac)) &&
         (local_70 < _DAT_36300bac)) ||
        (((local_84[2] < _DAT_36300ba8 == (local_84[2] == _DAT_36300ba8) &&
          (local_58 < _DAT_36300ba8 == (local_58 == _DAT_36300ba8))) &&
         (local_70 < _DAT_36300ba8 == (local_70 == _DAT_36300ba8))))) || (cVar11 != -1))
    goto LAB_3617c9bf;
    local_44[iVar12] = 0;
    local_44[iVar12 + 1] = 3;
    local_44[iVar12 + 2] = 1;
  }
  else {
    if ((((_DAT_36300bac <= local_84[2]) || (_DAT_36300bac <= local_64)) ||
        (_DAT_36300bac <= local_70)) &&
       ((((local_84[2] < _DAT_36300ba8 != (local_84[2] == _DAT_36300ba8) ||
          (local_64 < _DAT_36300ba8 != (local_64 == _DAT_36300ba8))) ||
         (local_70 < _DAT_36300ba8 != (local_70 == _DAT_36300ba8))) && (cVar11 == -1)))) {
      local_d4 = 3;
      iVar12 = 3;
      local_44[0] = 0;
      local_44[1] = 2;
      local_44[2] = 1;
    }
    if ((((local_70 < _DAT_36300bac) && (local_64 < _DAT_36300bac)) && (local_58 < _DAT_36300bac))
       || ((((local_70 < _DAT_36300ba8 == (local_70 == _DAT_36300ba8) &&
             (local_64 < _DAT_36300ba8 == (local_64 == _DAT_36300ba8))) &&
            (local_58 < _DAT_36300ba8 == (local_58 == _DAT_36300ba8))) || (cVar11 != -1))))
    goto LAB_3617c9bf;
    local_44[iVar12] = 1;
    local_44[iVar12 + 1] = 2;
    local_44[iVar12 + 2] = 3;
  }
  iVar12 = iVar12 + 3;
  local_d4 = iVar12;
LAB_3617c9bf:
  if (iVar12 == 0) {
    return (float10)_DAT_36222fa4;
  }
  local_c8 = 0;
  if (iVar12 != 0) {
    do {
      iVar2 = local_44[local_c8];
      iVar3 = local_44[local_c8 + 1];
      iVar4 = local_44[local_c8 + 2];
      FUN_360bbab0(&local_90,local_84 + iVar2 * 3 + 1,local_84 + iVar3 * 3 + 1,
                   local_84 + iVar4 * 3 + 1);
      fVar5 = (local_90 * DAT_36300c14 + local_8c * DAT_36300c18 + local_88 * DAT_36300c1c) -
              local_84[0];
      fVar6 = (local_90 * DAT_36300c20 + local_8c * DAT_36300c24 + local_88 * DAT_36300c28) -
              local_84[0];
      if ((_DAT_3622376c <= fVar5) && (fVar6 <= fVar5)) {
        fVar5 = fVar5 / (fVar5 - fVar6);
        local_18 = (DAT_36300c20 - DAT_36300c14) * fVar5;
        local_14 = (DAT_36300c24 - DAT_36300c18) * fVar5;
        local_10[0] = (DAT_36300c28 - DAT_36300c1c) * fVar5;
        fVar5 = DAT_36300c14 + local_18;
        fVar6 = DAT_36300c18 + local_14;
        local_10[1] = fVar5;
        fVar7 = DAT_36300c1c + local_10[0];
        local_10[2] = fVar6;
        local_50 = fVar5 - DAT_36300c14;
        local_10[3] = fVar7;
        local_4c = fVar6 - DAT_36300c18;
        local_48 = fVar7 - DAT_36300c1c;
        fVar8 = SQRT(local_50 * local_50 + local_4c * local_4c + local_48 * local_48);
        if (fVar8 <= local_cc) {
          FUN_360cd910(&local_90,&local_1c,&local_20);
          iVar9 = local_1c;
          iVar12 = local_20;
          local_2c = local_10[local_1c];
          local_28 = local_10[local_20];
          local_24 = 0;
          CIntersector::AddEdge
                    ((CIntersector *)&local_2c,local_84[iVar2 * 3 + local_1c],
                     local_84[iVar2 * 3 + local_20],local_84[iVar3 * 3 + local_1c],
                     local_84[iVar3 * 3 + local_20]);
          CIntersector::AddEdge
                    ((CIntersector *)&local_2c,local_84[iVar3 * 3 + iVar9],
                     local_84[iVar3 * 3 + iVar12],local_84[iVar4 * 3 + iVar9],
                     local_84[iVar4 * 3 + iVar12]);
          CIntersector::AddEdge
                    ((CIntersector *)&local_2c,local_84[iVar4 * 3 + iVar9],
                     local_84[iVar4 * 3 + iVar12],local_84[iVar2 * 3 + iVar9],
                     local_84[iVar2 * 3 + iVar12]);
          uVar10 = local_24 & 0x80000001;
          bVar13 = uVar10 == 0;
          if ((int)uVar10 < 0) {
            bVar13 = (uVar10 - 1 | 0xfffffffe) == 0xffffffff;
          }
          iVar12 = local_d4;
          if ((!bVar13) && (fVar8 < local_cc)) {
            DAT_36300c38 = local_90;
            DAT_36300c3c = local_8c;
            DAT_36300c40 = local_88;
            DAT_36300c44 = local_84[0];
            DAT_36300c2c = fVar5;
            DAT_36300c30 = fVar6;
            DAT_36300c34 = fVar7;
            local_cc = fVar8;
          }
        }
      }
      local_c8 = local_c8 + 3;
    } while (local_c8 < iVar12);
  }
  return (float10)local_cc;
}

