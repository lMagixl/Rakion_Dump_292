
/* public: __thiscall CInput::~CInput(void) */

void __thiscall CInput::~CInput(CInput *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x2b150  428  ??1CInput@@QAE@XZ */
  puStack_8 = &LAB_3620f601;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (DAT_362ba340 != (HANDLE)0x0) {
    ExceptionList = &local_c;
    CloseHandle(DAT_362ba340);
  }
  DAT_362ba340 = (HANDLE)0x0;
  if (*(int *)(this + 0x40) != 0) {
    pvVar1 = *(void **)(this + 0x44);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),CInputDevice::~CInputDevice);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x44) = 0;
  }
  local_4 = 0xffffffff;
  CTCriticalSection::~CTCriticalSection((CTCriticalSection *)this);
  ExceptionList = local_c;
  return;
}

