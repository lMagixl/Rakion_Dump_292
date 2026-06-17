
/* public: class CTString __thiscall CInput::GetInputDeviceShortName(long) */

long __thiscall CInput::GetInputDeviceShortName(CInput *this,long param_1)

{
  char *pcVar1;
  int in_stack_00000008;
  
                    /* 0x28680  1930  ?GetInputDeviceShortName@CInput@@QAE?AVCTString@@J@Z */
  pcVar1 = StringDuplicate(*(char **)(in_stack_00000008 * 0x1c + *(int *)(this + 0x44) + 0x10));
  *(char **)param_1 = pcVar1;
  return param_1;
}

