
/* public: void __thiscall CTStream::Seek_t(long,enum CTStream::SeekDir) */

void __thiscall CTStream::Seek_t(CTStream *this,long param_1,SeekDir param_2)

{
  uint uVar1;
  char *pcVar2;
  CTStream *this_00;
  CTSingleLock local_18 [4];
  CTSingleLock local_14 [8];
  void *pvStack_c;
  undefined1 *local_8;
  undefined4 local_4;
  
                    /* 0x3df60  3210  ?Seek_t@CTStream@@QAEXJW4SeekDir@1@@Z */
  local_4 = 0xffffffff;
  local_8 = &LAB_362108f9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  uVar1 = *(uint *)(this + 0x14);
  local_4 = 0;
  if (*(uint *)(this + 0x1c) < uVar1) {
    *(uint *)(this + 0x1c) = uVar1;
  }
  if (param_2 == 0) {
    *(int *)(this + 0x14) = *(int *)(this + 0xc) + param_1;
  }
  else if (param_2 == 2) {
    *(int *)(this + 0x14) = *(int *)(this + 0x18) + param_1;
  }
  else if (param_2 == 1) {
    *(uint *)(this + 0x14) = uVar1 + param_1;
  }
  else {
    pcVar2 = Translate(s_ETRSStream_seeking_requested_wit_36226e60,4);
    FatalError(pcVar2,param_2);
  }
  if ((*(uint *)(this + 0x14) < *(uint *)(this + 0xc)) ||
     (*(uint *)(this + 0x10) < *(uint *)(this + 0x14))) {
    Translate(s_ETRSError_while_seeking_36226ea0,4);
    Throw_t(this_00,(char *)this);
  }
  CTSingleLock::~CTSingleLock(local_14);
  ExceptionList = local_8;
  return;
}

