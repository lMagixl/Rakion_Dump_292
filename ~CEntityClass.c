
/* public: virtual __thiscall CEntityClass::~CEntityClass(void) */

void __thiscall CEntityClass::~CEntityClass(CEntityClass *this)

{
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x130120  415  ??1CEntityClass@@UAE@XZ */
  puStack_8 = &LAB_36218da5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 1;
  Clear(this);
  local_4 = local_4 & 0xffffff00;
  StringFree(*(char **)(this + 0x14));
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

