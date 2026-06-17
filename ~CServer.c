
/* public: __thiscall CServer::~CServer(void) */

void __thiscall CServer::~CServer(CServer *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x10a8f0  471  ??1CServer@@QAE@XZ */
  puStack_8 = &LAB_36217c22;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  FUN_36100a20((undefined4 *)(this + 0x38f4));
  local_4._0_1_ = 4;
  CNetworkMessage::~CNetworkMessage((CNetworkMessage *)(this + 0x38d0));
  local_4._0_1_ = 3;
  FUN_36100a20((undefined4 *)(this + 0x1c84));
  local_4._0_1_ = 2;
  FUN_36100a20((undefined4 *)(this + 0x3c));
  local_4._0_1_ = 1;
  StringFree(*(char **)(this + 0x30));
  local_4 = (uint)local_4._1_3_ << 8;
  if (*(int *)(this + 0xc) != 0) {
    pvVar1 = *(void **)(this + 0x10);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x100,*(int *)((int)pvVar1 + -4),FUN_36109030);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  local_4 = 0xffffffff;
  if (*(int *)(this + 4) != 0) {
    pvVar1 = *(void **)(this + 8);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x60,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_36109510);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  ExceptionList = local_c;
  return;
}

