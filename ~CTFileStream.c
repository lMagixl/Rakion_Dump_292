
/* public: virtual __thiscall CTFileStream::~CTFileStream(void) */

void __thiscall CTFileStream::~CTFileStream(CTFileStream *this)

{
  void *pvVar1;
  xFileManager *this_00;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x41cb0  485  ??1CTFileStream@@UAE@XZ */
  puStack_8 = &LAB_36210e87;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 2;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4._0_1_ = 3;
  if ((((*(int *)(this + 0x50) != 0) || (*(int *)(this + 0x54) != -1)) ||
      (*(int *)(this + 100) != 0)) || (*(int *)(this + 0x6c) != 0)) {
    Close(this);
  }
  local_4._0_1_ = 2;
  CTSingleLock::~CTSingleLock(local_18);
  pvVar1 = *(void **)(this + 0x6c);
  local_4._0_1_ = 1;
  if (pvVar1 != (void *)0x0) {
    FUN_36018d70((undefined4 *)((int)pvVar1 + 0x18));
    operator_delete(pvVar1);
  }
  this_00 = *(xFileManager **)(this + 0x68);
  local_4 = (uint)local_4._1_3_ << 8;
  if (this_00 != (xFileManager *)0x0) {
    Xenesis::xFileManager::~xFileManager(this_00);
    operator_delete(this_00);
  }
  local_4 = 0xffffffff;
  CTStream::~CTStream((CTStream *)this);
  ExceptionList = local_c;
  return;
}

