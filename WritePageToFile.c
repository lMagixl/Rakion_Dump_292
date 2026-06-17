
/* public: void __thiscall CTFileStream::WritePageToFile(long) */

void __thiscall CTFileStream::WritePageToFile(CTFileStream *this,long param_1)

{
  void *pvVar1;
  size_t _Count;
  size_t sVar2;
  char *pcVar3;
  void *_Str;
  int local_20;
  int local_1c;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x401d0  3975  ?WritePageToFile@CTFileStream@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210c0a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  if (*(uint *)(this + 0x1c) < *(uint *)(this + 0x14)) {
    *(uint *)(this + 0x1c) = *(uint *)(this + 0x14);
  }
  pvVar1 = *(void **)(this + 0x1c);
  _Str = (void *)(DAT_362bef94 * param_1 + *(int *)(this + 0xc));
  if (_Str < pvVar1) {
    _Count = DAT_362bef94;
    if (pvVar1 < (void *)((int)_Str + DAT_362bef94)) {
      _Count = (int)pvVar1 - (int)_Str;
    }
    local_20 = (int)_Str - *(int *)(this + 0xc);
    local_1c = local_20 >> 0x1f;
    fsetpos(*(FILE **)(this + 0x50),(fpos_t *)&local_20);
    sVar2 = fwrite(_Str,1,_Count,*(FILE **)(this + 0x50));
    if (sVar2 != _Count) {
      pcVar3 = StringDuplicate(*(char **)(this + 0x20));
      local_4._0_1_ = 1;
      FUN_3603fc50();
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree(pcVar3);
    }
    fflush(*(FILE **)(this + 0x50));
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

