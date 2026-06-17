
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_3619ccc0(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 local_38 [8];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621b280;
  local_10 = ExceptionList;
  puVar1 = local_38;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar1 = *param_3;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
  }
  *(undefined2 *)puVar1 = *(undefined2 *)param_3;
  iVar4 = *(int *)((int)this + 4);
  local_18 = DAT_362abd90;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (*(int *)((int)this + 0xc) - iVar4) / 0x1e;
  }
  if (param_2 != 0) {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1e;
    }
    ExceptionList = &local_10;
    local_14 = &stack0xffffffb4;
    if (0x8888888U - iVar4 < param_2) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffb4;
      FUN_3619c720();
      uVar5 = extraout_ECX;
    }
    if (*(int *)((int)this + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1e;
    }
    if (uVar5 < iVar4 + param_2) {
      if (0x8888888 - (uVar5 >> 1) < uVar5) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar5 + (uVar5 >> 1);
      }
      if (*(int *)((int)this + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1e;
      }
      if (uVar5 < iVar4 + param_2) {
        iVar4 = FUN_3619c6e0((int)this);
        uVar5 = iVar4 + param_2;
      }
      puVar1 = (undefined4 *)FUN_361bf99c(uVar5 * 0x1e);
      local_8 = 0;
      puVar2 = (undefined4 *)FUN_3619c9e0(*(undefined4 **)((int)this + 4),param_1,puVar1);
      FUN_3619cac0(puVar2,param_2,local_38);
      FUN_3619c9e0(param_1,*(undefined4 **)((int)this + 8),
                   (undefined4 *)((int)puVar2 + param_2 * 0x1e));
      iVar4 = 0;
      if (*(int *)((int)this + 4) != 0) {
        iVar4 = (*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x1e;
      }
      if (*(void **)((int)this + 4) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 4));
      }
      *(uint *)((int)this + 0xc) = uVar5 * 0x1e + (int)puVar1;
      *(uint *)((int)this + 8) = (param_2 + iVar4) * 0x1e + (int)puVar1;
      *(undefined4 **)((int)this + 4) = puVar1;
    }
    else {
      puVar1 = *(undefined4 **)((int)this + 8);
      if ((uint)(((int)puVar1 - (int)param_1) / 0x1e) < param_2) {
        FUN_3619c9e0(param_1,puVar1,(undefined4 *)(param_2 * 0x1e + (int)param_1));
        local_8 = 2;
        FUN_3619cc80(*(undefined4 **)((int)this + 8),
                     param_2 - (*(int *)((int)this + 8) - (int)param_1) / 0x1e,local_38);
        iVar4 = *(int *)((int)this + 8) + param_2 * 0x1e;
        *(int *)((int)this + 8) = iVar4;
        FUN_3619c820(param_1,(undefined4 *)(iVar4 + param_2 * -0x1e),local_38);
      }
      else {
        puVar2 = (undefined4 *)((int)puVar1 + param_2 * -0x1e);
        uVar3 = FUN_3619c9e0(puVar2,puVar1,puVar1);
        *(undefined4 *)((int)this + 8) = uVar3;
        FUN_3619c980(param_1,puVar2,puVar1);
        FUN_3619c820(param_1,(undefined4 *)(param_2 * 0x1e + (int)param_1),local_38);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

