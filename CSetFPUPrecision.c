
/* public: __thiscall CSetFPUPrecision::CSetFPUPrecision(enum FPUPrecisionType) */

CSetFPUPrecision * __thiscall
CSetFPUPrecision::CSetFPUPrecision(CSetFPUPrecision *this,FPUPrecisionType param_1)

{
  FPUPrecisionType FVar1;
  
                    /* 0x48ae0  218  ??0CSetFPUPrecision@@QAE@W4FPUPrecisionType@@@Z */
  FVar1 = GetFPUPrecision();
  *(FPUPrecisionType *)this = FVar1;
  *(FPUPrecisionType *)(this + 4) = param_1;
  if (param_1 != FVar1) {
    SetFPUPrecision(param_1);
  }
  return this;
}

