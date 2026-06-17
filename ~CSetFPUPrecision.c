
/* public: __thiscall CSetFPUPrecision::~CSetFPUPrecision(void) */

void __thiscall CSetFPUPrecision::~CSetFPUPrecision(CSetFPUPrecision *this)

{
                    /* 0x48b10  473  ??1CSetFPUPrecision@@QAE@XZ */
  if (*(FPUPrecisionType *)(this + 4) != *(FPUPrecisionType *)this) {
    SetFPUPrecision(*(FPUPrecisionType *)this);
  }
  return;
}

