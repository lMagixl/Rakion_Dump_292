
/* long __cdecl ska_StringToID(class CTString const &) */

long __cdecl ska_StringToID(CTString *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* 0x171720  4415  ?ska_StringToID@@YAJABVCTString@@@Z */
  iVar1 = CTString::operator==(param_1,&DAT_3623ce08);
  if (iVar1 != 0) {
    return -1;
  }
  lVar2 = FUN_3603ad70(&DAT_3630087c,param_1);
  if (lVar2 == -1) {
    lVar2 = FUN_36171670();
  }
  return lVar2;
}

