
undefined4 * __thiscall FUN_3602eac0(void *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_3620f730;
  local_10 = ExceptionList;
  local_18 = *(undefined4 **)((int)this + 4);
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_3602d8b0(*(undefined4 *)((int)this + 4),param_2,*(undefined4 *)((int)this + 4),
                          param_1 + 3,*(undefined1 *)(param_1 + 4));
    if (*(char *)((int)local_18 + 0x11) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_3602eac0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = FUN_3602eac0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}

