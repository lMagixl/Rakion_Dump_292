
/* public: virtual __thiscall CTMemoryStream::~CTMemoryStream(void) */

void __thiscall CTMemoryStream::~CTMemoryStream(CTMemoryStream *this)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x416f0  486  ??1CTMemoryStream@@UAE@XZ */
  puStack_8 = &LAB_36210deb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4._0_1_ = 1;
  CListNode::Remove((CListNode *)(this + 4));
  local_4 = (uint)local_4._1_3_ << 8;
  CTSingleLock::~CTSingleLock(local_18);
  local_4 = 0xffffffff;
  CTStream::~CTStream((CTStream *)this);
  ExceptionList = local_c;
  return;
}

