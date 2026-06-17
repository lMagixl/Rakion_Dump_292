
/* public: void * __thiscall CTStream::ReadChunkAlloc_t(long) */

void * __thiscall CTStream::ReadChunkAlloc_t(CTStream *this,long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3e810  2952  ?ReadChunkAlloc_t@CTStream@@QAEPAXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621099e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  uVar1 = param_1;
  if (param_1 == 0) {
    uVar1 = GetSize_t(this);
  }
  puVar2 = AllocMemory(uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    param_1 = (long)Translate(s_ETRSReadChunkAlloc__Unable_to_al_36226f88,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_1,(ThrowInfo *)&DAT_3624f688);
  }
  puVar4 = *(undefined4 **)(this + 0x14);
  puVar5 = puVar2;
  for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(uint *)(this + 0x14) = *(int *)(this + 0x14) + uVar1;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return puVar2;
}

