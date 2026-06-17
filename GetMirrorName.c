
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class CTString const & __thiscall CEntity::GetMirrorName(long) */

CTString * __thiscall CEntity::GetMirrorName(CEntity *this,long param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x126460  1984  ?GetMirrorName@CEntity@@UAEABVCTString@@J@Z */
  puStack_8 = &LAB_3621891b;
  local_c = ExceptionList;
  if ((_DAT_362fcd74 & 1) == 0) {
    _DAT_362fcd74 = _DAT_362fcd74 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_362fcd70 = StringDuplicate(&DAT_36237ad3);
    _atexit((_func_4879 *)&LAB_36220cc0);
  }
  ExceptionList = local_c;
  return (CTString *)&DAT_362fcd70;
}

