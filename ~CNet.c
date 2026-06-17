
/* public: __thiscall CNet::~CNet(void) */

void __thiscall CNet::~CNet(CNet *this)

{
  int *piVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x104860  450  ??1CNet@@QAE@XZ */
  puStack_8 = &LAB_36217756;
  local_c = ExceptionList;
  piVar1 = *(int **)(this + 8);
  local_4 = 0;
  ExceptionList = &local_c;
  if (piVar1 != (int *)0x0) {
    ExceptionList = &local_c;
    thunk_FUN_36105ea0(piVar1);
    operator_delete(piVar1);
  }
  pvVar2 = *(void **)(this + 0xc);
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,8,*(int *)((int)pvVar2 + -4),thunk_FUN_36105ea0);
    operator_delete__((void *)((int)pvVar2 + -4));
  }
  if (*(SOCKET *)this != 0xffffffff) {
    closesocket(*(SOCKET *)this);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  local_4 = 0xffffffff;
  FUN_361a2770();
  ExceptionList = local_c;
  return;
}

