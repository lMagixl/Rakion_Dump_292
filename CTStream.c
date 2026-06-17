
/* public: __thiscall CTStream::CTStream(void) */

CTStream * __thiscall CTStream::CTStream(CTStream *this)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x41330  253  ??0CTStream@@QAE@XZ */
  puStack_8 = &LAB_36210d6a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x20) = pcVar1;
  local_4._0_1_ = 1;
  puVar2 = (undefined4 *)FUN_361bf99c(0x14);
  local_4._0_1_ = 2;
  if (puVar2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_360e45f0(puVar2);
  }
  local_4._0_1_ = 1;
  *(undefined4 *)(this + 0x30) = uVar3;
  FUN_360259e0((CListHead *)(this + 0x34));
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0x10;
  local_4._0_1_ = 3;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4._0_1_ = 4;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  pcVar1 = StringDuplicate(s_ETRSCannot_preload__s___s_362270e4 + 0x1b);
  StringFree(*(char **)(this + 0x20));
  *(char **)(this + 0x20) = pcVar1;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return this;
}

