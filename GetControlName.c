
/* public: class CTString __thiscall CInput::GetControlName(unsigned long) */

ulong __thiscall CInput::GetControlName(CInput *this,ulong param_1)

{
  char *pcVar1;
  uint in_stack_00000008;
  
                    /* 0x285d0  1800  ?GetControlName@CInput@@QAE?AVCTString@@K@Z */
  pcVar1 = StringDuplicate(*(char **)(*(int *)((in_stack_00000008 >> 0x10) * 0x1c + 0x18 +
                                              *(int *)(this + 0x44)) + 0x10 +
                                     (in_stack_00000008 & 0xffff) * 0x18));
  *(char **)param_1 = pcVar1;
  return param_1;
}

