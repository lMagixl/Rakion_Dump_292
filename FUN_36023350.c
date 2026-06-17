
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36023350(void **param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  
  if (*param_1 == &DAT_362a1b08) {
    _DAT_362b9028 = _DAT_362b9028 + -1;
    puVar1 = FUN_360232c0(param_3);
    *param_1 = puVar1;
    *puVar1 = 0;
    return;
  }
  uVar2 = MEM_Size(*param_1);
  DAT_362b9020 = DAT_362b9020 - uVar2;
  ResizeMemory(param_1,param_3 + 1);
  uVar2 = MEM_Size(*param_1);
  DAT_362b9020 = DAT_362b9020 + uVar2;
  return;
}

