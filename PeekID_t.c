
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class CChunkID __thiscall CTStream::PeekID_t(void) */

undefined4 * __thiscall CTStream::PeekID_t(CTStream *this)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *in_stack_00000004;
  CTSingleLock local_24 [12];
  undefined4 local_18;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3e4f0  2762  ?PeekID_t@CTStream@@QAE?AVCChunkID@@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210956;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_24,(CTCriticalSection *)&DAT_362bf07c,1);
  uVar2 = DAT_36226ee0;
  local_18 = DAT_36226edc;
  uVar1 = **(undefined4 **)(this + 0x14);
  local_4 = 0;
  *(undefined4 **)(this + 0x14) = *(undefined4 **)(this + 0x14) + 1;
  Seek_t(this,-4,1);
  *in_stack_00000004 = uVar1;
  *(undefined1 *)(in_stack_00000004 + 1) = uVar2;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_24);
  ExceptionList = local_c;
  return in_stack_00000004;
}

