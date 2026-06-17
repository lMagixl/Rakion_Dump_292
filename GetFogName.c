
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class CTString const & __thiscall CEntity::GetFogName(long) */

CTString * __thiscall CEntity::GetFogName(CEntity *this,long param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x126380  1879  ?GetFogName@CEntity@@UAEABVCTString@@J@Z */
  puStack_8 = &LAB_362188eb;
  local_c = ExceptionList;
  if ((_DAT_362fcd64 & 1) == 0) {
    _DAT_362fcd64 = _DAT_362fcd64 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_362fcd60 = StringDuplicate(&DAT_36237ad1);
    _atexit((_func_4879 *)&LAB_36220ca0);
  }
  ExceptionList = local_c;
  return (CTString *)&DAT_362fcd60;
}

