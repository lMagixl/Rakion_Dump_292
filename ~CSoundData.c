
/* public: virtual __thiscall CSoundData::~CSoundData(void) */

void __thiscall CSoundData::~CSoundData(CSoundData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x9c8d0  479  ??1CSoundData@@UAE@XZ */
  puStack_8 = &LAB_36212e83;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  Clear(this);
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

