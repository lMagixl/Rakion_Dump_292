
void __thiscall FUN_3600ce60(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c));
  uVar4 = 0;
  uVar3 = *(uint *)((int)this + 0x30) ^ param_1;
  if (param_3 != 0) {
    iVar2 = *(int *)((int)this + 0x24);
    do {
      iVar1 = (uVar3 >> 3) * 4;
      *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) - *(int *)(iVar2 + iVar1);
      *(uint *)(iVar2 + iVar1) =
           *(int *)(iVar2 + iVar1) -
           (*(uint *)(*(int *)((int)this + 0x28) + iVar1) ^
           *(uint *)(*(int *)((int)this + 0x20) + uVar3 * 4));
      *(uint *)(*(int *)((int)this + 0x20) + uVar3 * 4) =
           *(uint *)(*(int *)((int)this + 0x28) + iVar1) ^ *(uint *)(param_2 + uVar4 * 4);
      *(int *)(*(int *)((int)this + 0x24) + iVar1) =
           *(int *)(*(int *)((int)this + 0x24) + iVar1) + *(int *)(param_2 + uVar4 * 4);
      iVar2 = *(int *)((int)this + 0x24);
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 1;
      *(int *)((int)this + 0x2c) = *(int *)((int)this + 0x2c) + *(int *)(iVar2 + iVar1);
    } while (uVar4 < param_3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x3c));
  return;
}

