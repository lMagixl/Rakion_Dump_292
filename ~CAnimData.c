
/* public: virtual __thiscall CAnimData::~CAnimData(void) */

void __thiscall CAnimData::~CAnimData(CAnimData *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x20a60  382  ??1CAnimData@@UAE@XZ */
  puStack_8 = &LAB_3620ed3c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &PTR_LAB_3622320c;
  local_4 = 0;
  Clear(this);
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

