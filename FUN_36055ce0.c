
void __thiscall FUN_36055ce0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_4;
  
  puVar1 = (undefined4 *)FUN_3604c210(this,2);
  local_28[0] = *param_1;
  local_28[2] = param_1[2];
  local_28[1] = param_1[1];
  local_18 = param_1[4];
  local_28[3] = param_1[3];
  local_14 = param_1[5];
  local_4 = 0;
  puVar2 = local_28;
  puVar4 = puVar1;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_28[0] = *param_2;
  local_28[1] = param_2[1];
  local_28[2] = param_2[2];
  local_28[3] = param_2[3];
  local_14 = param_2[5];
  local_18 = param_2[4];
  local_4 = 0;
  puVar2 = local_28;
  puVar4 = puVar1 + 10;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)FUN_3604c300((void *)((int)this + 0x3c),1);
  *puVar2 = local_28[0];
  puVar2[1] = local_28[1];
  puVar2[2] = local_28[2];
  puVar2[3] = local_28[3];
  puVar2[4] = puVar1;
  puVar2[5] = puVar1 + 10;
  return;
}

