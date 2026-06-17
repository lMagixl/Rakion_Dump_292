
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual class CTString const & __thiscall CEntity::GetGradientName(long) */

CTString * __thiscall CEntity::GetGradientName(CEntity *this,long param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1264d0  1901  ?GetGradientName@CEntity@@UAEABVCTString@@J@Z */
  puStack_8 = &LAB_36218933;
  local_c = ExceptionList;
  if ((_DAT_362fcd7c & 1) == 0) {
    _DAT_362fcd7c = _DAT_362fcd7c | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    DAT_362fcd78 = StringDuplicate(&DAT_36237ad4);
    _atexit((_func_4879 *)&LAB_36220cd0);
  }
  ExceptionList = local_c;
  return (CTString *)&DAT_362fcd78;
}

