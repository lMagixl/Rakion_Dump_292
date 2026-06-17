
/* public: __thiscall Xenesis::xFileManager::~xFileManager(void) */

void __thiscall Xenesis::xFileManager::~xFileManager(xFileManager *this)

{
  bool bVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1a5e00  547  ??1xFileManager@Xenesis@@QAE@XZ */
  puStack_8 = &LAB_3621ba2f;
  local_c = ExceptionList;
  local_4 = 3;
  ExceptionList = &local_c;
  bVar1 = FUN_361a2f00((int *)(this + 0x40));
  if (bVar1) {
    uninit(this);
  }
  local_4._0_1_ = 2;
  FUN_361a3210((LPCRITICAL_SECTION)(this + 0x10f0));
  local_4._0_1_ = 1;
  FUN_361a8310((int)(this + 0x7c));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_361a8a20((undefined4 *)(this + 0x48));
  local_4 = 0xffffffff;
  FUN_361a6aa0((undefined4 *)(this + 0x40));
  ExceptionList = local_c;
  return;
}

