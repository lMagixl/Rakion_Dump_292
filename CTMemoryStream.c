
/* public: __thiscall CTMemoryStream::CTMemoryStream(void *,long,enum CTStream::OpenMode) */

CTMemoryStream * __thiscall
CTMemoryStream::CTMemoryStream(CTMemoryStream *this,void *param_1,long param_2,OpenMode param_3)

{
  CListHead *this_00;
  char *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x415e0  249  ??0CTMemoryStream@@QAE@PAXJW4OpenMode@CTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210dd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTStream::CTStream((CTStream *)this);
  local_4 = 0;
  *(undefined ***)this = &_vftable_;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4._0_1_ = 1;
  if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x28) == 0) {
    pcVar1 = Translate(s_ETRSCan_create_memory_stream__st_36227400,4);
    FatalError(pcVar1);
  }
  CTStream::AllocateVirtualMemory((CTStream *)this,DAT_362a274c);
  puVar3 = *(undefined4 **)(this + 0x14);
  for (uVar2 = (uint)param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar3 = *(undefined4 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 4);
    puVar3 = puVar3 + 1;
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar3 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x50) = 1;
  *(uint *)(this + 0x54) = (uint)(param_3 != 1);
  pcVar1 = StringDuplicate(s_dynamic_memory_stream_36227450);
  StringFree(*(char **)(this + 0x20));
  this_00 = DAT_362befa8;
  *(char **)(this + 0x20) = pcVar1;
  CListHead::AddTail(this_00,(CListNode *)(this + 4));
  local_4 = (uint)local_4._1_3_ << 8;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return this;
}

