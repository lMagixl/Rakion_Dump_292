
/* public: __thiscall CPonytail::~CPonytail(void) */

void __thiscall CPonytail::~CPonytail(CPonytail *this)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x190390  464  ??1CPonytail@@QAE@XZ */
  puStack_8 = &LAB_3621b16e;
  pvStack_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &pvStack_c;
  Clear(this);
  local_4._0_1_ = 2;
  FUN_36190e80((undefined4 *)(this + 0xac));
  local_4._0_1_ = 1;
  thunk_FUN_36190a40((undefined4 *)(this + 0x98));
  local_4 = (uint)local_4._1_3_ << 8;
  CControlBone::~CControlBone((CControlBone *)(this + 0x20));
  local_4 = 0xffffffff;
  thunk_FUN_36190980((undefined4 *)(this + 0xc));
  ExceptionList = pvStack_c;
  return;
}

