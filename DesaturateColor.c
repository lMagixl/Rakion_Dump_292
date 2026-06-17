
/* unsigned long __cdecl DesaturateColor(unsigned long) */

ulong __cdecl DesaturateColor(ulong param_1)

{
  uint uVar1;
  
                    /* 0x63060  1477  ?DesaturateColor@@YAKK@Z */
  uVar1 = param_1 >> 0x18;
  if ((byte)(param_1 >> 0x18) < (byte)(param_1 >> 0x10)) {
    uVar1 = param_1 >> 0x10 & 0xff;
  }
  if ((byte)uVar1 < (byte)(param_1 >> 8)) {
    uVar1 = param_1 >> 8 & 0xff;
  }
  return ((uVar1 << 8 | uVar1) << 8 | uVar1) << 8 | param_1 & 0xff;
}

