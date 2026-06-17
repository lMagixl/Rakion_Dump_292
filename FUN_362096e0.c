
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_362096e0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  void *this_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *local_2c;
  int local_24;
  float local_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621d13b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = (void *)FUN_361bf99c(0x10);
  iVar7 = 0;
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    local_2c = (int *)0x0;
  }
  else {
    local_2c = FUN_36208d20(this_00,*(undefined4 *)((int)this + 0xc),*(int *)((int)this + 4),
                            *(int *)((int)this + 8));
  }
  local_4 = 0xffffffff;
  iVar3 = 1 - param_2[1] / 2;
  if (0 < *(int *)((int)this + 8)) {
    do {
      local_24 = 0;
      if (0 < *(int *)((int)this + 4)) {
        do {
          iVar5 = local_24 >> 1;
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          iVar6 = iVar7;
          if (iVar7 < 0) {
            iVar6 = 0;
          }
          iVar10 = *(int *)local_2c[3];
          if (iVar10 <= iVar5) {
            iVar5 = iVar10 + -1;
          }
          iVar8 = ((int *)local_2c[3])[1];
          if (iVar8 <= iVar6) {
            iVar6 = iVar8 + -1;
          }
          iVar8 = 0;
          local_20 = 0.0;
          if (0 < param_2[1]) {
            iVar9 = local_24 + iVar3;
            do {
              iVar4 = FUN_362099c0(*(void **)((int)this + 0xc),iVar9,iVar7);
              iVar8 = iVar8 + 1;
              iVar9 = iVar9 + 1;
              local_20 = *(float *)(*param_2 + -4 + iVar8 * 4) *
                         *(float *)(*(int *)this + iVar4 * 4) + local_20;
            } while (iVar8 < param_2[1]);
          }
          local_24 = local_24 + 2;
          *(float *)(*local_2c + (iVar10 * iVar6 + iVar5) * 4) = local_20;
        } while (local_24 < *(int *)((int)this + 4));
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)((int)this + 8));
  }
  local_24 = 0;
  if (0 < (int)(*(uint *)((int)this + 4) & 0xfffffffe)) {
    do {
      local_20 = 0.0;
      if (0 < *(int *)((int)this + 8)) {
        do {
          iVar5 = (int)local_20 >> 1;
          iVar7 = local_24;
          if (local_24 < 0) {
            iVar7 = 0;
          }
          if (iVar5 < 0) {
            iVar5 = 0;
          }
          iVar6 = *(int *)param_1[3];
          if (iVar6 <= iVar7) {
            iVar7 = iVar6 + -1;
          }
          iVar10 = ((int *)param_1[3])[1];
          if (iVar10 <= iVar5) {
            iVar5 = iVar10 + -1;
          }
          iVar10 = 0;
          fVar2 = _DAT_3624cd94;
          if (0 < param_2[1]) {
LAB_362098bf:
            iVar4 = *(int *)local_2c[3];
            iVar9 = (int)local_20 + iVar3 + iVar10;
            iVar8 = local_24;
LAB_362098c9:
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            else if (iVar8 <= iVar4 + -1) goto LAB_362098e6;
            if (iVar4 <= iVar8) {
              iVar8 = (iVar4 * 2 - iVar8) + -1;
            }
            goto LAB_362098c9;
          }
LAB_36209947:
          *(float *)(*param_1 + (iVar6 * iVar5 + iVar7) * 4) = fVar2;
          local_20 = (float)((int)local_20 + 2);
        } while ((int)local_20 < *(int *)((int)this + 8));
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)((int)this + 4) >> 1);
  }
  if (local_2c != (int *)0x0) {
    FUN_36208d60(local_2c);
    operator_delete(local_2c);
  }
  ExceptionList = local_c;
  return;
LAB_362098e6:
  iVar1 = ((int *)local_2c[3])[1];
LAB_362098e9:
  if (iVar9 < 0) {
    iVar9 = -iVar9;
  }
  else if (iVar9 <= iVar1 + -1) goto LAB_36209906;
  if (iVar1 <= iVar9) {
    iVar9 = (iVar1 * 2 - iVar9) + -1;
  }
  goto LAB_362098e9;
LAB_36209906:
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  if (iVar4 <= iVar8) {
    iVar8 = iVar4 + -1;
  }
  if (iVar1 <= iVar9) {
    iVar9 = iVar1 + -1;
  }
  iVar10 = iVar10 + 1;
  fVar2 = *(float *)(*local_2c + (iVar4 * iVar9 + iVar8) * 4) *
          *(float *)(*param_2 + -4 + iVar10 * 4) + fVar2;
  if (param_2[1] <= iVar10) goto LAB_36209947;
  goto LAB_362098bf;
}

