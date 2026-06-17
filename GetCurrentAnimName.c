
/* public: class CTString __thiscall CModelInstance::GetCurrentAnimName(void) */

long __thiscall CModelInstance::GetCurrentAnimName(CModelInstance *this)

{
  long in_stack_00000004;
  
                    /* 0x15c4e0  1811  ?GetCurrentAnimName@CModelInstance@@QAE?AVCTString@@XZ */
  GetCurrentAnimID(this);
  ska_IDToString(in_stack_00000004);
  return in_stack_00000004;
}

