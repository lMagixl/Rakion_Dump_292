
/* public: virtual __thiscall CTStream::~CTStream(void) */

void __thiscall CTStream::~CTStream(CTStream *this)

{
  void *pvVar1;
  int iVar2;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x41420  488  ??1CTStream@@UAE@XZ */
  puStack_8 = &LAB_36210d9d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 2;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FreeBuffer(this);
  FUN_360e4640(*(undefined4 **)(this + 0x30));
  FUN_36021ad0((undefined4 *)(this + 0x34));
  *(undefined4 *)(this + 0x48) = 0;
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    FUN_360e4610((int)pvVar1);
    operator_delete(pvVar1);
  }
  local_4._0_1_ = 2;
  CTSingleLock::~CTSingleLock(local_18);
  local_4._0_1_ = 1;
  thunk_FUN_36021ad0((undefined4 *)(this + 0x34));
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(*(char **)(this + 0x20));
  local_4 = 0xffffffff;
  iVar2 = CListNode::IsLinked((CListNode *)(this + 4));
  if (iVar2 != 0) {
    CListNode::Remove((CListNode *)(this + 4));
  }
  ExceptionList = local_c;
  return;
}

