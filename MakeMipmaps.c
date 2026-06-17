
/* void __cdecl MakeMipmaps(unsigned long *,long,long,long) */

void __cdecl MakeMipmaps(ulong *param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  int iVar2;
  int local_4;
  
                    /* 0x8c2a0  2612  ?MakeMipmaps@@YAXPAKJJJ@Z */
  iVar2 = param_2;
  local_4 = 0;
  param_2 = 0;
  if ((param_4 != 0) && (param_2 = -1, DAT_362c53a8 == 0)) {
    param_2 = 1;
  }
  for (; (1 < iVar2 && (1 < param_3)); param_3 = param_3 >> 1) {
    puVar1 = param_1 + local_4;
    if (param_2 < 0) {
      FilterBitmap(param_4,puVar1,puVar1,iVar2,param_3,0,0);
    }
    FUN_3608ab30((undefined8 *)puVar1,puVar1 + param_3 * iVar2,iVar2,param_3);
    if (0 < param_2) {
      FilterBitmap(param_4,puVar1,puVar1,iVar2,param_3,0,0);
    }
    local_4 = local_4 + param_3 * iVar2;
    iVar2 = iVar2 >> 1;
  }
  return;
}

