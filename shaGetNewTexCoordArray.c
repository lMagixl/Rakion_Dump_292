
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct GFXTexCoord * __cdecl shaGetNewTexCoordArray(void) */

GFXTexCoord * __cdecl shaGetNewTexCoordArray(void)

{
  int iVar1;
  int iVar2;
  
                    /* 0x90ee0  4344  ?shaGetNewTexCoordArray@@YAPAUGFXTexCoord@@XZ */
  iVar1 = DAT_362a433c;
  _DAT_362c9984 = DAT_362a433c;
  iVar2 = FUN_36061fd0((undefined4 *)&DAT_362c997c);
  if (iVar2 < iVar1) {
    iVar2 = FUN_36061fd0((undefined4 *)&DAT_362c997c);
    FUN_36062460(&DAT_362c997c,iVar2 + ((iVar1 + -1) / DAT_362c9988 + 1) * DAT_362c9988);
  }
  return DAT_362c9980;
}

