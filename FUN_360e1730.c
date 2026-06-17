
void __thiscall FUN_360e1730(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_1c[0] = *param_1;
  local_1c[1] = param_1[1];
  local_1c[2] = param_1[2];
  local_1c[3] = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  local_4 = param_3;
  puVar1 = (undefined4 *)FUN_360e1150((void *)((int)this + 0x10),1);
  puVar3 = local_1c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  }
  return;
}

