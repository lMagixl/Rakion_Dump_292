
void __thiscall FUN_36013960(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_3620dfe0;
  local_10 = ExceptionList;
  uVar4 = param_1 | 0xf;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)((int)this + 0x18);
    uVar3 = uVar1 >> 1;
    param_1 = uVar4;
    if ((uVar4 / 3 < uVar3) && (uVar1 <= -uVar3 - 2)) {
      param_1 = uVar3 + uVar1;
    }
  }
  local_8 = 0;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_361bf99c(param_1 + 1);
  if (param_2 != 0) {
    if (*(uint *)((int)this + 0x18) < 0x10) {
      puVar5 = (undefined4 *)((int)this + 4);
    }
    else {
      puVar5 = *(undefined4 **)((int)this + 4);
    }
    puVar6 = puVar2;
    for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
  }
  if (0xf < *(uint *)((int)this + 0x18)) {
    operator_delete(*(void **)((int)this + 4));
  }
  puVar5 = (undefined4 *)((int)this + 4);
  *(undefined1 *)puVar5 = 0;
  *puVar5 = puVar2;
  *(uint *)((int)this + 0x18) = param_1;
  *(uint *)((int)this + 0x14) = param_2;
  if (0xf < param_1) {
    puVar5 = puVar2;
  }
  *(undefined1 *)((int)puVar5 + param_2) = 0;
  ExceptionList = local_10;
  return;
}

