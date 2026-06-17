
/* public: __thiscall CObjectSector::~CObjectSector(void) */

void __thiscall CObjectSector::~CObjectSector(CObjectSector *this)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x53e80  458  ??1CObjectSector@@QAE@XZ */
  puStack_8 = &LAB_36211c13;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  FUN_360e1540((int *)(this + 0x84));
  local_4._0_1_ = 4;
  StringFree(*(char **)(this + 0x80));
  local_4._0_1_ = 3;
  thunk_FUN_360560c0((undefined4 *)(this + 0x50));
  local_4._0_1_ = 2;
  thunk_FUN_36055af0((undefined4 *)(this + 0x3c));
  local_4._0_1_ = 1;
  thunk_FUN_36055960((undefined4 *)(this + 0x28));
  local_4 = (uint)local_4._1_3_ << 8;
  thunk_FUN_360558a0((undefined4 *)(this + 0x14));
  local_4 = 0xffffffff;
  thunk_FUN_360557e0((undefined4 *)this);
  ExceptionList = local_c;
  return;
}

