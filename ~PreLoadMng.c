
/* private: __thiscall PreLoadMng::~PreLoadMng(void) */

void __thiscall PreLoadMng::~PreLoadMng(PreLoadMng *this)

{
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x2eea0  539  ??1PreLoadMng@@AAE@XZ */
  puStack_8 = &LAB_3620f779;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  clearPrecache(this);
  local_4._0_1_ = 2;
  FUN_3602e670(this + 0x24,&local_10,(int *)**(int **)(this + 0x28),*(int **)(this + 0x28));
  operator_delete(*(void **)(this + 0x28));
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  local_4._0_1_ = 1;
  FUN_3602e380(this + 0x18,&local_10,(int *)**(int **)(this + 0x1c),*(int **)(this + 0x1c));
  operator_delete(*(void **)(this + 0x1c));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_3602e090(this + 0xc,&local_10,(int *)**(int **)(this + 0x10),*(int **)(this + 0x10));
  operator_delete(*(void **)(this + 0x10));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  local_4 = 0xffffffff;
  FUN_3602dda0(this,&local_10,(int *)**(int **)(this + 4),*(int **)(this + 4));
  operator_delete(*(void **)(this + 4));
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  ExceptionList = local_c;
  return;
}

