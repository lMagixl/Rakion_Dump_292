
uint * __cdecl FUN_361fff40(int *param_1,size_t *param_2,undefined4 param_3)

{
  size_t _Size;
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int local_f8 [4];
  int local_e8;
  int local_d4;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_7c [31];
  
  piVar3 = local_f8;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  local_f8[0] = 0x7c;
  local_f8[3] = *param_1;
  local_f8[2] = param_1[1];
  local_d4 = param_1[2];
  local_e8 = local_f8[3] << 2;
  puVar4 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_7c[0] = 0x7c;
  local_f8[1] = 0x180e;
  local_ac = 0x41;
  local_a4 = 0x20;
  local_a0 = 0xff0000;
  local_9c = 0xff00;
  local_98 = 0xff;
  local_94 = 0xff000000;
  _Size = FUN_36200600((int)local_f8,2);
  *param_2 = _Size;
  puVar1 = calloc(1,_Size);
  FUN_36200660((int)local_f8,0,(int)local_7c,puVar1,2,(float *)&DAT_36383d38,*param_2,param_3,0);
  return puVar1;
}

