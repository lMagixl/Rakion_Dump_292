
/* public: long __thiscall CTStream::GetStreamSize(void) */

long __thiscall CTStream::GetStreamSize(CTStream *this)

{
  int iVar1;
  int iVar2;
  CTSingleLock local_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3e120  2141  ?GetStreamSize@CTStream@@QAEJXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621091d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  iVar2 = (**(code **)(*(int *)this + 0xc))();
  if (iVar2 == 0) {
    iVar2 = *(int *)(this + 0xc);
    iVar1 = *(int *)(this + 0x18);
    local_4 = 0xffffffff;
    CTSingleLock::~CTSingleLock(local_18);
    ExceptionList = pvStack_c;
    return iVar1 - iVar2;
  }
  if (*(uint *)(this + 0x1c) < *(uint *)(this + 0x14)) {
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x14);
  }
  iVar2 = *(int *)(this + 0xc);
  local_4 = 0xffffffff;
  if (*(int *)(this + 0x1c) == iVar2) {
    iVar2 = *(int *)(this + 0x18) - iVar2;
  }
  else {
    iVar2 = *(int *)(this + 0x1c) - iVar2;
  }
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = pvStack_c;
  return iVar2;
}

