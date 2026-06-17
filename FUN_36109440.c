
void __thiscall FUN_36109440(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217a80;
  local_c = ExceptionList;
  iVar1 = *(int *)this;
  ExceptionList = &local_c;
  CTSingleLock::CTSingleLock(local_18,(CTCriticalSection *)((int)this + 8),1);
  **(int **)(param_1 + 0x14) = iVar1;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  *puVar2 = *(undefined4 *)((int)this + 0xa0);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  *puVar2 = *(undefined4 *)((int)this + 0xa4);
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) + 4);
  local_4 = 0;
  *(undefined4 **)(param_1 + 0x14) = puVar2;
  if (iVar1 != 0) {
    *puVar2 = *(undefined4 *)(*(int *)((int)this + 4) + 0x1c);
    puVar2 = (undefined4 *)((int)this + 0x10);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    iVar1 = FUN_361064f0(param_1,(undefined4 *)((int)this + 0x58));
    FUN_361064f0(iVar1,puVar2);
  }
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

