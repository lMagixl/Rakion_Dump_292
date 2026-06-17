
/* public: class CTString __thiscall CInput::GetControlTransName(unsigned long) */

ulong __thiscall CInput::GetControlTransName(CInput *this,ulong param_1)

{
  char *pcVar1;
  uint in_stack_00000008;
  
                    /* 0x28610  1801  ?GetControlTransName@CInput@@QAE?AVCTString@@K@Z */
  pcVar1 = StringDuplicate(*(char **)(*(int *)((in_stack_00000008 >> 0x10) * 0x1c + 0x18 +
                                              *(int *)(this + 0x44)) + 0x14 +
                                     (in_stack_00000008 & 0xffff) * 0x18));
  *(char **)param_1 = pcVar1;
  return param_1;
}

