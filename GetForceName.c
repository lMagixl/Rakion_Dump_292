
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class CTString const & __thiscall CEntity::GetForceName(long) */

CTString * __thiscall CEntity::GetForceName(CEntity *this,long param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x126310  1884  ?GetForceName@CEntity@@UAEABVCTString@@J@Z */
  puStack_8 = &LAB_362188d3;
  local_c = ExceptionList;
  if ((_DAT_362fcd5c & 1) == 0) {
    _DAT_362fcd5c = _DAT_362fcd5c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_362fcd58 = StringDuplicate(&DAT_36237ad0);
    _atexit((_func_4879 *)&LAB_36220c90);
  }
  ExceptionList = local_c;
  return (CTString *)&DAT_362fcd58;
}

