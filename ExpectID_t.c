
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CTStream::ExpectID_t(class CChunkID const &) */

void __thiscall CTStream::ExpectID_t(CTStream *this,CChunkID *param_1)

{
  CTStream *this_00;
  CTSingleLock local_24 [4];
  CTSingleLock local_20 [8];
  int local_18;
  undefined1 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x3e590  1590  ?ExpectID_t@CTStream@@QAEXABVCChunkID@@@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_36210968;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_24,(CTCriticalSection *)&DAT_362bf07c,1);
  local_14 = DAT_36226ee8;
  local_18 = **(int **)(this + 0x14);
  *(int **)(this + 0x14) = *(int **)(this + 0x14) + 1;
  local_4 = 0;
  if (local_18 != *(int *)param_1) {
    Translate(s_ETRSChunk_ID_validation_failed__E_36226ef0,4);
    Throw_t(this_00,(char *)this);
  }
  CTSingleLock::~CTSingleLock(local_20);
  ExceptionList = local_8;
  return;
}

