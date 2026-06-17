
/* public: void __thiscall CTStream::ReadChunk_t(void *,long) */

void __thiscall CTStream::ReadChunk_t(CTStream *this,void *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3e6e0  2953  ?ReadChunk_t@CTStream@@QAEXPAXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621097a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)&DAT_362bf07c,1);
  local_4 = 0;
  lVar1 = GetSize_t(this);
  if (param_2 != lVar1) {
    param_2 = (long)Translate(s_ETRSChunk_size_not_equal_as_expe_36226f58,4);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&param_2,(ThrowInfo *)&DAT_3624f688);
  }
  puVar3 = *(undefined4 **)(this + 0x14);
  for (uVar2 = (uint)param_2 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined4 *)param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = (undefined4 *)((int)param_1 + 4);
  }
  for (uVar2 = param_2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)param_1 = *(undefined1 *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
    param_1 = (undefined4 *)((int)param_1 + 1);
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + param_2;
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

