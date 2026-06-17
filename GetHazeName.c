
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class CTString const & __thiscall CEntity::GetHazeName(long) */

CTString * __thiscall CEntity::GetHazeName(CEntity *this,long param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1263f0  1905  ?GetHazeName@CEntity@@UAEABVCTString@@J@Z */
  puStack_8 = &LAB_36218903;
  local_c = ExceptionList;
  if ((_DAT_362fcd6c & 1) == 0) {
    _DAT_362fcd6c = _DAT_362fcd6c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_362fcd68 = StringDuplicate(&DAT_36237ad2);
    _atexit((_func_4879 *)&LAB_36220cb0);
  }
  ExceptionList = local_c;
  return (CTString *)&DAT_362fcd68;
}

