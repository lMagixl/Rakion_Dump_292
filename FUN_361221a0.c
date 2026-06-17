
void __thiscall FUN_361221a0(void *this,int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362187bb;
  local_c = ExceptionList;
  if (*(int *)this != 0) {
    ExceptionList = &local_c;
    pvVar2 = AllocMemoryAligned((param_1 + 1) * 0x10,0x20);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      FUN_36006680(pvVar2,0x10,param_1 + 1,&LAB_36120260);
    }
    iVar4 = 0;
    local_4 = 0xffffffff;
    if (0 < *(int *)this) {
      iVar3 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
        puVar1 = (undefined4 *)(iVar3 + (int)pvVar2);
        *puVar1 = *puVar5;
        puVar1[1] = puVar5[1];
        puVar1[2] = puVar5[2];
        puVar1[3] = puVar5[3];
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x10;
      } while (iVar4 < *(int *)this);
    }
    FreeMemoryAligned(*(void **)((int)this + 4));
    *(void **)((int)this + 4) = pvVar2;
    *(int *)this = param_1;
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  FUN_36120ea0(this,param_1);
  ExceptionList = local_c;
  return;
}

