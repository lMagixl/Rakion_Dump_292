
/* public: __thiscall CModelInstanceSerial::CModelInstanceSerial(void) */

CModelInstanceSerial * __thiscall
CModelInstanceSerial::CModelInstanceSerial(CModelInstanceSerial *this)

{
                    /* 0x15c720  152  ??0CModelInstanceSerial@@QAE@XZ */
  CSerial::CSerial((CSerial *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14) = 0;
  return this;
}

