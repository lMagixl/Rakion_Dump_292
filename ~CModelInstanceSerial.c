
/* public: virtual __thiscall CModelInstanceSerial::~CModelInstanceSerial(void) */

void __thiscall CModelInstanceSerial::~CModelInstanceSerial(CModelInstanceSerial *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15f720  444  ??1CModelInstanceSerial@@UAE@XZ */
  puStack_8 = &LAB_3621a3c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  if (*(int *)(this + 0x14) != 0) {
    *(undefined4 *)(*(int *)(this + 0x14) + 0x5c) = 0;
    DeleteModelInstance(*(CModelInstance **)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

