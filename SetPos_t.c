
/* public: void __thiscall CTStream::SetPos_t(long) */

void __thiscall CTStream::SetPos_t(CTStream *this,long param_1)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3e040  3558  ?SetPos_t@CTStream@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621090b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  Seek_t(this,param_1,0);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

