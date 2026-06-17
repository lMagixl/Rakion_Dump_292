
void __thiscall FUN_360e14b0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_38[0] = *param_1;
  local_38[1] = param_1[1];
  local_38[2] = param_1[2];
  local_38[3] = param_1[3];
  local_28 = param_1[4];
  local_24 = param_1[5];
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = param_2[3];
  local_10 = param_2[4];
  local_c = param_2[5];
  local_8 = param_3;
  puVar1 = (undefined4 *)FUN_3604c350((void *)((int)this + 0x20),1);
  puVar3 = local_38;
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}

