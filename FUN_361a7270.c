
void __thiscall FUN_361a7270(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int extraout_ECX;
  uint uVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621bb20;
  local_10 = ExceptionList;
  param_3 = (undefined4 *)*param_3;
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(int *)((int)this + 0xc) - iVar3 >> 2;
  }
  if (param_2 != 0) {
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar3 >> 2;
    }
    ExceptionList = &local_10;
    if (0x1000000U - iVar2 < param_2) {
      ExceptionList = &local_10;
      FUN_361a4da0();
      iVar3 = extraout_ECX;
    }
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)((int)this + 8) - iVar3 >> 2;
    }
    if (uVar7 < iVar2 + param_2) {
      if (0x1000000 - (uVar7 >> 1) < uVar7) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar7 + (uVar7 >> 1);
      }
      if (iVar3 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)((int)this + 8) - iVar3 >> 2;
      }
      if (uVar7 < iVar2 + param_2) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)this + 8) - iVar3 >> 2;
        }
        uVar7 = iVar3 + param_2;
      }
      FUN_36018c30();
      puVar4 = (undefined4 *)FUN_361bf99c(uVar7 * 4);
      local_8 = 0;
      puVar5 = (undefined4 *)FUN_361a50a0(*(undefined4 **)((int)this + 4),param_1,puVar4);
      FUN_361a6bb0(puVar5,param_2,&param_3);
      FUN_361a50a0(param_1,*(undefined4 **)((int)this + 8),puVar5 + param_2);
      pvVar1 = *(void **)((int)this + 4);
      local_8 = 0xffffffff;
      if (pvVar1 == (void *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)((int)this + 8) - (int)pvVar1 >> 2;
      }
      if (pvVar1 != (void *)0x0) {
        FUN_36018c30();
        operator_delete(pvVar1);
      }
      *(undefined4 **)((int)this + 0xc) = puVar4 + uVar7;
      *(undefined4 **)((int)this + 8) = puVar4 + param_2 + iVar3;
      *(undefined4 **)((int)this + 4) = puVar4;
      ExceptionList = local_10;
      return;
    }
    puVar4 = *(undefined4 **)((int)this + 8);
    if ((uint)((int)puVar4 - (int)param_1 >> 2) < param_2) {
      FUN_361a50a0(param_1,puVar4,param_1 + param_2);
      local_8 = 2;
      FUN_361a6e70(*(undefined4 **)((int)this + 8),
                   param_2 - ((int)*(undefined4 **)((int)this + 8) - (int)param_1 >> 2),&param_3);
      iVar3 = *(int *)((int)this + 8) + param_2 * 4;
      *(int *)((int)this + 8) = iVar3;
      FUN_361a4f20(param_1,(undefined4 *)(iVar3 + param_2 * -4),&param_3);
      ExceptionList = local_10;
      return;
    }
    uVar6 = FUN_361a50a0(puVar4 + -param_2,puVar4,puVar4);
    *(undefined4 *)((int)this + 8) = uVar6;
    FUN_361a6b30((int)param_1,(int)(puVar4 + -param_2),puVar4);
    FUN_361a4f20(param_1,param_1 + param_2,&param_3);
  }
  ExceptionList = local_10;
  return;
}

