
undefined4 * __cdecl
FUN_361bf360(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621ca57;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_361bf450(local_4c);
  local_3c = param_5;
  local_4c[0] = param_2;
  local_2c = param_8;
  local_38 = param_6;
  local_4c[1] = param_3;
  local_28 = param_9;
  local_34 = param_7;
  local_4c[2] = param_4;
  local_24 = param_10;
  local_30 = param_8;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_4c[3] = param_5;
  local_20 = param_11;
  local_10 = 0x3f800000;
  puVar2 = local_4c;
  puVar3 = param_1;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_361bf470();
  ExceptionList = local_c;
  return param_1;
}

