
/* public: __thiscall CInputDevice::CInputDevice(void) */

CInputDevice * __thiscall CInputDevice::CInputDevice(CInputDevice *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2a8a0  117  ??0CInputDevice@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f4cd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xc) = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x10) = pcVar1;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

