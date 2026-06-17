
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* unsigned long __cdecl LerpColor(unsigned long,unsigned long,float) */

ulong __cdecl LerpColor(ulong param_1,ulong param_2,float param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 local_c;
  undefined1 local_b;
  
                    /* 0x63450  2537  ?LerpColor@@YAKKKM@Z */
  uVar1 = (undefined1)(param_1 >> 8);
  local_c = (undefined1)(param_1 >> 0x18);
  if ((param_3 != _DAT_3622376c) &&
     (local_c = (undefined1)(param_2 >> 0x18), param_3 != _DAT_36223384)) {
    uVar2 = FUN_361bfd6c();
    local_c = (undefined1)uVar2;
  }
  local_b = (undefined1)(param_1 >> 0x10);
  if ((param_3 != _DAT_3622376c) && (local_b = (char)(param_2 >> 0x10), param_3 != _DAT_36223384)) {
    uVar2 = FUN_361bfd6c();
    local_b = (char)uVar2;
  }
  if ((param_3 != _DAT_3622376c) && (uVar1 = (char)(param_2 >> 8), param_3 != _DAT_36223384)) {
    uVar2 = FUN_361bfd6c();
    uVar1 = (char)uVar2;
  }
  if (param_3 == _DAT_3622376c) {
    uVar2 = (ulonglong)(param_1 & 0xff);
  }
  else if (param_3 == _DAT_36223384) {
    uVar2 = (ulonglong)(param_2 & 0xff);
  }
  else {
    uVar2 = FUN_361bfd6c();
  }
  return (uint)uVar2 & 0xff | (uint)CONCAT21(CONCAT11(local_c,local_b),uVar1) << 8;
}

