
/* public: void __thiscall CTFileStream::FileDecommitPage(long) */

void __thiscall CTFileStream::FileDecommitPage(CTFileStream *this,long param_1)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x402d0  1611  ?FileDecommitPage@CTFileStream@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210c1c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  if (*(int *)(this + 0x5c) == 0) {
    WritePageToFile(this,param_1);
  }
  CTStream::DecommitPage((CTStream *)this,param_1);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

