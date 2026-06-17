
void __thiscall FUN_3601a6f0(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_3620e4e0;
  local_10 = ExceptionList;
  uVar5 = param_1 | 0xf;
  if (uVar5 < 0x4000000) {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar4 = uVar1 >> 1;
    param_1 = uVar5;
    if ((uVar5 / 3 < uVar4) && (uVar1 <= 0x3ffffff - uVar4)) {
      param_1 = uVar4 + uVar1;
    }
  }
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_36018c30();
  puVar3 = (undefined4 *)FUN_361bf99c(param_1 + 1);
  local_8 = 0xffffffff;
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar6 = (undefined4 *)((int)this + 4);
    }
    else {
      puVar6 = *(undefined4 **)((int)this + 4);
    }
    puVar7 = puVar3;
    for (uVar5 = param_2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    for (uVar5 = param_2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  if (0xf < *(uint *)((int)this + 0x18)) {
    pvVar2 = *(void **)((int)this + 4);
    FUN_36018c30();
    operator_delete(pvVar2);
  }
  puVar6 = (undefined4 *)((int)this + 4);
  *(undefined1 *)puVar6 = 0;
  *puVar6 = puVar3;
  *(uint *)((int)this + 0x18) = param_1;
  *(uint *)((int)this + 0x14) = param_2;
  if (0xf < param_1) {
    puVar6 = puVar3;
  }
  *(undefined1 *)((int)puVar6 + param_2) = 0;
  ExceptionList = local_10;
  return;
}

