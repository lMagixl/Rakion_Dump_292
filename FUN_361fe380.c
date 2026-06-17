
void __cdecl FUN_361fe380(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_7c [31];
  
  puVar1 = local_7c;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  local_7c[3] = param_1;
  local_7c[0] = 0x7c;
  local_7c[2] = param_2;
  local_7c[1] = 6;
  FUN_36200600((int)local_7c,param_3);
  return;
}

