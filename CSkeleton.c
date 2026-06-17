
/* public: __thiscall CSkeleton::CSkeleton(void) */

CSkeleton * __thiscall CSkeleton::CSkeleton(CSkeleton *this)

{
                    /* 0x1710a0  232  ??0CSkeleton@@QAE@XZ */
  CSerial::CSerial((CSerial *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}

