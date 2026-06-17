
/* public: virtual __thiscall CAOTimeInfo::~CAOTimeInfo(void) */

void __thiscall CAOTimeInfo::~CAOTimeInfo(CAOTimeInfo *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x19e9e0  379  ??1CAOTimeInfo@@UAE@XZ */
  puStack_8 = &LAB_3621b4e2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  StringFree(*(char **)(this + 0x14));
  *(undefined ***)this = &CAbsTimeInfo::_vftable_;
  ExceptionList = local_c;
  return;
}

