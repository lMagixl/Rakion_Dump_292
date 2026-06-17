
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct GFXColor * __cdecl shaGetNewColorArray(void) */

GFXColor * __cdecl shaGetNewColorArray(void)

{
  int iVar1;
  int iVar2;
  
                    /* 0x90e90  4343  ?shaGetNewColorArray@@YAPAUGFXColor@@XZ */
  iVar1 = DAT_362a433c;
  _DAT_362c9964 = DAT_362a433c;
  iVar2 = FUN_36061f90((undefined4 *)&DAT_362c995c);
  if (iVar2 < iVar1) {
    iVar2 = FUN_36061f90((undefined4 *)&DAT_362c995c);
    FUN_360622b0(&DAT_362c995c,iVar2 + ((iVar1 + -1) / DAT_362c9968 + 1) * DAT_362c9968);
  }
  return DAT_362c9960;
}

