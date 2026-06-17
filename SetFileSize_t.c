
/* public: void __thiscall CTFileStream::SetFileSize_t(long) */

void __thiscall CTFileStream::SetFileSize_t(CTFileStream *this,long param_1)

{
  long lVar1;
  CTStream *this_00;
  CTSingleLock local_28 [12];
  CTFileStream *local_1c;
  long local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x3f060  3463  ?SetFileSize_t@CTFileStream@@QAEXJ@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36210a70;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  local_1c = this;
  CTSingleLock::CTSingleLock(local_28,(CTCriticalSection *)&DAT_362bf07c,1);
  local_8 = 0;
  lVar1 = CTStream::GetStreamSize((CTStream *)this);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_18 = lVar1;
  if (param_1 <= lVar1) {
    CTStream::Throw_t(this_00,(char *)this);
  }
  CTStream::SetPos_t((CTStream *)this,param_1 + -1);
  **(undefined1 **)(this + 0x14) = 0;
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  CTStream::SetPos_t((CTStream *)this,lVar1);
  local_8 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_28);
  ExceptionList = local_10;
  return;
}

