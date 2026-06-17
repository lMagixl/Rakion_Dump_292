
/* public: void __thiscall CTStream::WriteChunk_t(void *,long) */

void __thiscall CTStream::WriteChunk_t(CTStream *this,void *param_1,long param_2)

{
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3e9d0  3959  ?WriteChunk_t@CTStream@@QAEXPAXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362109b0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  WriteSize_t(this,param_2);
  WriteRawChunk_t(this,param_1,param_2);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

