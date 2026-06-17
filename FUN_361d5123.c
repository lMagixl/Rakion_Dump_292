
/* WARNING: Type propagation algorithm not settling */

int __thiscall
FUN_361d5123(void *this,undefined4 *param_1,int *param_2,undefined4 param_3,uint *param_4,
            undefined4 param_5,uint param_6)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int local_6c [2];
  uint local_64;
  int local_60;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c [4];
  uint local_3c;
  uint local_38;
  uint local_34 [4];
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  uint local_c;
  int *local_8;
  
  local_10 = this;
  if (*(int *)this != 0) {
    FUN_361d4cf0(this);
  }
  (**(code **)(*param_2 + 0x20))(param_2,local_6c);
  if (param_4 == (uint *)0x0) {
    bVar1 = false;
    local_34[2] = local_58;
    local_34[3] = local_54;
    uVar4 = ~param_6 & 1;
    local_34[0] = 0;
    local_34[1] = 0;
    local_24 = 0;
    local_20 = local_50;
  }
  else {
    puVar7 = local_34;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *param_4;
      param_4 = param_4 + 1;
      puVar7 = puVar7 + 1;
    }
    if (local_58 < local_34[2]) {
      return -0x7789f794;
    }
    if (local_34[2] < local_34[0]) {
      return -0x7789f794;
    }
    if (local_54 < local_34[3]) {
      return -0x7789f794;
    }
    if (local_34[3] < local_34[1]) {
      return -0x7789f794;
    }
    if (local_50 < local_20) {
      return -0x7789f794;
    }
    if (local_20 < local_24) {
      return -0x7789f794;
    }
    if (((((local_34[0] != 0) || (local_34[2] != local_58)) || (local_34[1] != 0)) ||
        ((local_34[3] != local_54 || (local_24 != 0)))) || (bVar1 = false, local_20 != local_50)) {
      bVar1 = true;
    }
    if (((param_6 & 1) != 0) || (bVar1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  uVar2 = local_20;
  if ((local_60 == 0) && ((local_64 & 0x200) == 0)) {
    return -0x7789f794;
  }
  uVar6 = (param_6 & 1 | 0x80) << 4;
  local_c = uVar6;
  if ((uVar4 == 0) || ((local_64 & 0x200) == 0)) {
LAB_361d528b:
    if (bVar1) {
      if ((local_6c[0] == 0x31545844) || (local_6c[0] == 0x32545844)) {
LAB_361d5356:
        uVar4 = local_34[0] & 0xfffffffc;
        local_4c[2] = local_34[2] + 3 & 0xfffffffc;
        local_4c[3] = local_34[3] + 3 & 0xfffffffc;
        if (local_58 < local_4c[2]) {
          local_4c[2] = local_58;
        }
        uVar3 = local_34[1] & 0xfffffffc;
        uVar6 = local_c;
        if (local_54 < local_4c[3]) {
          local_4c[3] = local_54;
        }
joined_r0x361d53a0:
        local_3c = local_24;
        local_38 = uVar2;
        if (((uVar4 == 0) && (local_4c[2] == local_58)) &&
           ((uVar3 == 0 && ((local_4c[3] == local_54 && (local_24 == 0)))))) {
          local_4c[1] = 0;
          local_4c[0] = 0;
          if (uVar2 == local_50) goto LAB_361d53c9;
        }
      }
      else {
        if (local_6c[0] == 0x32595559) {
LAB_361d52ec:
          uVar4 = local_34[0] & 0xfffffffe;
          local_4c[2] = local_34[2] + 1 & 0xfffffffe;
          uVar3 = local_34[1];
          local_4c[3] = local_34[3];
          if (local_58 < local_4c[2]) {
            local_4c[2] = local_58;
          }
          goto joined_r0x361d53a0;
        }
        if (((local_6c[0] == 0x33545844) || (local_6c[0] == 0x34545844)) ||
           (local_6c[0] == 0x35545844)) goto LAB_361d5356;
        if (local_6c[0] == 0x59565955) goto LAB_361d52ec;
        puVar7 = local_34;
        puVar8 = local_4c;
        for (iVar5 = 6; uVar6 = local_c, uVar4 = local_4c[0], uVar3 = local_4c[1], iVar5 != 0;
            iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      local_4c[1] = uVar3;
      local_4c[0] = uVar4;
      iVar5 = (**(code **)(*param_2 + 0x24))(param_2,&local_1c,local_4c,uVar6);
      if (iVar5 < 0) {
        return iVar5;
      }
      local_34[0] = local_34[0] - local_4c[0];
      local_34[2] = local_34[2] - local_4c[0];
      local_34[1] = local_34[1] - local_4c[1];
      local_34[3] = local_34[3] - local_4c[1];
      local_24 = local_24 - local_3c;
      local_20 = uVar2 - local_3c;
      goto LAB_361d5418;
    }
  }
  else {
    if ((param_6 & 0x20000) == 0) {
      FUN_361cec59(1);
      iVar5 = (**(code **)(*param_2 + 0x1c))(param_2,&DAT_3622fdc0,&local_8);
      if (-1 < iVar5) {
        iVar5 = (**(code **)(*local_8 + 0x34))(local_8);
        if (iVar5 == 1) {
          uVar6 = uVar6 | 0x2000;
          bVar1 = false;
          local_c = uVar6;
        }
        if (local_8 != (int *)0x0) {
          (**(code **)(*local_8 + 8))(local_8);
          local_8 = (int *)0x0;
        }
      }
      FUN_361cec59(0);
      goto LAB_361d528b;
    }
    uVar6 = uVar6 | 0x2000;
  }
LAB_361d53c9:
  iVar5 = (**(code **)(*param_2 + 0x24))(param_2,&local_1c,0,uVar6);
  if (iVar5 < 0) {
    return iVar5;
  }
LAB_361d5418:
  *param_1 = local_14;
  param_1[1] = local_6c[0];
  param_1[2] = local_1c;
  param_1[3] = local_18;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = local_50;
  puVar7 = local_34;
  puVar8 = param_1 + 10;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  param_1[0x11] = param_5;
  param_1[6] = local_58;
  param_1[0x12] = param_3;
  param_1[7] = local_54;
  param_1[0x10] = 1;
  *local_10 = param_2;
  return 0;
}

