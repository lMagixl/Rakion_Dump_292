
/* public: virtual __thiscall CShader::~CShader(void) */

void __thiscall CShader::~CShader(CShader *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12e10  474  ??1CShader@@UAE@XZ */
  puStack_8 = &LAB_3620df34;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 4;
  Clear(this);
  local_4._0_1_ = 3;
  StringFree(*(char **)(this + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,2);
  StringFree(*(char **)(this + 0x38));
  if (*(int *)(this + 0x30) != 0) {
    operator_delete__(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int *)(this + 0x28) != 0) {
    operator_delete__(*(void **)(this + 0x2c));
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
  }
  local_4 = 0xffffffff;
  CSerial::~CSerial((CSerial *)this);
  ExceptionList = local_c;
  return;
}

