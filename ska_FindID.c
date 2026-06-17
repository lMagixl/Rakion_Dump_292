
/* long __cdecl ska_FindID(class CTString const &) */

long __cdecl ska_FindID(CTString *param_1)

{
  int iVar1;
  long lVar2;
  
                    /* 0x171530  4413  ?ska_FindID@@YAJABVCTString@@@Z */
  iVar1 = CTString::operator==(param_1,&DAT_3623ce09);
  if (iVar1 != 0) {
    return -1;
  }
  lVar2 = FUN_3603ad70(&DAT_3630087c,param_1);
  return lVar2;
}

