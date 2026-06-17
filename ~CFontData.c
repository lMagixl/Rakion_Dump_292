
/* public: virtual __thiscall CFontData::~CFontData(void) */

void __thiscall CFontData::~CFontData(CFontData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x1880c0  423  ??1CFontData@@UAE@XZ */
  puStack_8 = &LAB_3621ad64;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 1;
  Clear(this);
  local_4 = local_4 & 0xffffff00;
  StringFree(*(char **)(this + 0x40));
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

