
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __cdecl FUN_360232c0(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    _DAT_362b9028 = _DAT_362b9028 + 1;
    return &DAT_362a1b08;
  }
  puVar1 = AllocMemory(param_1 + 1);
  DAT_362b901c = DAT_362b901c + 1;
  uVar2 = MEM_Size(puVar1);
  DAT_362b9020 = DAT_362b9020 + uVar2;
  return puVar1;
}

