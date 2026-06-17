
void __thiscall FUN_36022360(void *this,undefined4 *param_1,int param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  CTSingleLock local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620ee46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  CTSingleLock::CTSingleLock(local_18,this,1);
  iVar3 = (param_2 + 1) * param_3;
  local_4 = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int *)((int)this + 0x18) = param_2;
  *(int *)((int)this + 0x1c) = param_3;
  pvVar1 = AllocMemory(iVar3 + 1);
  *(void **)((int)this + 8) = pvVar1;
  pvVar1 = AllocMemory(param_2 + 2);
  *(void **)((int)this + 0x14) = pvVar1;
  pvVar1 = AllocMemory(param_3 * 4 + 4);
  iVar2 = 0;
  *(void **)((int)this + 0x20) = pvVar1;
  if (0 < param_3) {
    do {
      FUN_36021f20(this,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  *(undefined1 *)(*(int *)((int)this + 8) + iVar3) = 0;
  iVar2 = *(int *)((int)this + 8) + (param_3 + -1) * (param_2 + 1);
  *(int *)((int)this + 0x10) = iVar2;
  *(int *)((int)this + 0xc) = iVar2;
  FUN_36021dc0(this,param_1);
  CPrintF(&DAT_36224010);
  local_4 = 0xffffffff;
  CTSingleLock::~CTSingleLock(local_18);
  ExceptionList = local_c;
  return;
}

