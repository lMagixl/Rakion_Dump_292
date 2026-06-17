
/* public: void __thiscall CTimer::RemHandler(class CTimerHandler *) */

void __thiscall CTimer::RemHandler(CTimer *this,CTimerHandler *param_1)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x44d60  3103  ?RemHandler@CTimer@@QAEXPAVCTimerHandler@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621124a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)(this + 0x1c),1);
  local_4 = 0;
  CListNode::Remove((CListNode *)(param_1 + 4));
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

