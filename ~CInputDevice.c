
/* public: __thiscall CInputDevice::~CInputDevice(void) */

void __thiscall CInputDevice::~CInputDevice(CInputDevice *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x2a910  429  ??1CInputDevice@@QAE@XZ */
  puStack_8 = &LAB_3620f4ed;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (*(int *)(this + 0x14) != 0) {
    pvVar1 = *(void **)(this + 0x18);
    ExceptionList = &local_c;
    if (pvVar1 != (void *)0x0) {
      ExceptionList = &local_c;
      _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_36001540);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x18) = 0;
  }
  local_4 = local_4 & 0xffffff00;
  StringFree(*(char **)(this + 0x10));
  local_4 = 0xffffffff;
  StringFree(*(char **)(this + 0xc));
  ExceptionList = local_c;
  return;
}

