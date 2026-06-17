
/* public: class CTString __thiscall CInput::GetInputDeviceName(long) */

long __thiscall CInput::GetInputDeviceName(CInput *this,long param_1)

{
  char *pcVar1;
  int in_stack_00000008;
  
                    /* 0x28650  1929  ?GetInputDeviceName@CInput@@QAE?AVCTString@@J@Z */
  pcVar1 = StringDuplicate(*(char **)(in_stack_00000008 * 0x1c + *(int *)(this + 0x44) + 0xc));
  *(char **)param_1 = pcVar1;
  return param_1;
}

