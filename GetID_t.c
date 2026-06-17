
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class CChunkID __thiscall CTStream::GetID_t(void) */

undefined4 * __thiscall CTStream::GetID_t(CTStream *this)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *in_stack_00000004;
  CTSingleLock local_18 [12];
  undefined4 local_c;
  undefined4 local_4;
  
                    /* 0x3e490  1921  ?GetID_t@CTStream@@QAE?AVCChunkID@@XZ */
  local_4 = DAT_362abd90;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  uVar2 = DAT_36226ed8;
  local_c = DAT_36226ed4;
  uVar1 = **(undefined4 **)(this + 0x14);
  *(undefined4 **)(this + 0x14) = *(undefined4 **)(this + 0x14) + 1;
  *in_stack_00000004 = uVar1;
  *(undefined1 *)(in_stack_00000004 + 1) = uVar2;
  CTSingleLock::~CTSingleLock(local_18);
  return in_stack_00000004;
}

