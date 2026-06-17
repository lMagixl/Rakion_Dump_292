
/* public: void __thiscall CTStream::WriteRawChunk_t(void *,long) */

void __thiscall CTStream::WriteRawChunk_t(CTStream *this,void *param_1,long param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  CTSingleLock local_c [12];
  
                    /* 0x3e980  3983  ?WriteRawChunk_t@CTStream@@QAEXPAXJ@Z */
  CTSingleLock::CTSingleLock(local_c,(CTCriticalSection *)&DAT_362bf07c,1);
  puVar2 = *(undefined4 **)(this + 0x14);
  for (uVar1 = (uint)param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = *(undefined4 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 4);
    puVar2 = puVar2 + 1;
  }
  for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)param_1;
    param_1 = (undefined4 *)((int)param_1 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + param_2;
  CTSingleLock::~CTSingleLock(local_c);
  return;
}

