
/* public: virtual unsigned long __thiscall CTFileStream::GetStreamCRC32_t(void) */

ulong __thiscall CTFileStream::GetStreamCRC32_t(CTFileStream *this)

{
  ulong uVar1;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x40350  2139  ?GetStreamCRC32_t@CTFileStream@@UAEKXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210c2e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  if (*(int *)(this + 0x50) == 0) {
    if (-1 < *(int *)(this + 0x54)) {
      uVar1 = FUN_36046b20(*(int *)(this + 0x54));
      local_4 = 0xffffffff;
      CTSingleLock::~CTSingleLock(local_18);
      ExceptionList = local_c;
      return uVar1;
    }
    if ((*(int *)(this + 100) == 0) && (*(int *)(this + 0x6c) == 0)) {
      local_4 = 0xffffffff;
      CTSingleLock::~CTSingleLock(local_18);
      ExceptionList = local_c;
      return 0;
    }
  }
  uVar1 = CTStream::GetStreamCRC32_t((CTStream *)this);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return uVar1;
}

