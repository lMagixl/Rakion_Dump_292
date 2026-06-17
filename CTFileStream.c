
/* public: __thiscall CTFileStream::CTFileStream(void) */

CTFileStream * __thiscall CTFileStream::CTFileStream(CTFileStream *this)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x41ae0  247  ??0CTFileStream@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210e45;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTStream::CTStream((CTStream *)this);
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  local_4 = 2;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x58) = 0xffffffff;
  *(undefined4 *)(this + 0x5c) = 1;
  *(undefined4 *)(this + 0x54) = 0xffffffff;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return this;
}

