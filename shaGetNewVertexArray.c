
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* struct GFXVertex * __cdecl shaGetNewVertexArray(void) */

GFXVertex * __cdecl shaGetNewVertexArray(void)

{
  int iVar1;
  int iVar2;
  
                    /* 0x90f30  4345  ?shaGetNewVertexArray@@YAPAUGFXVertex@@XZ */
  iVar1 = DAT_362a433c;
  _DAT_362c9974 = DAT_362a433c;
  iVar2 = FUN_36061f60((undefined4 *)&DAT_362c996c);
  if (iVar2 < iVar1) {
    iVar2 = FUN_36061f60((undefined4 *)&DAT_362c996c);
    FUN_360621d0(&DAT_362c996c,iVar2 + ((iVar1 + -1) / DAT_362c9978 + 1) * DAT_362c9978);
  }
  return DAT_362c9970;
}

