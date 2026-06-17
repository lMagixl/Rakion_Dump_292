
void __thiscall FUN_36018f50(void *this,undefined4 *param_1)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_4;
  
  iVar3 = 0;
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x18,*(int *)((int)pvVar1 + -4),SkeletonLOD::~SkeletonLOD);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  local_4 = FUN_3600c5c0(param_1);
  if ((local_4 != 0) && (FUN_36014580(this,local_4), 0 < local_4)) {
    do {
      iVar5 = param_1[1] + iVar3;
      puVar4 = (undefined4 *)(*(int *)((int)this + 4) + iVar3);
      *puVar4 = *(undefined4 *)(param_1[1] + iVar3);
      FUN_360165e0(puVar4 + 1,(undefined4 *)(iVar5 + 4));
      FUN_36014140(puVar4 + 3,(undefined4 *)(iVar5 + 0xc));
      pcVar2 = StringDuplicate(*(char **)(iVar5 + 0x14));
      StringFree((char *)puVar4[5]);
      iVar3 = iVar3 + 0x18;
      local_4 = local_4 + -1;
      puVar4[5] = pcVar2;
    } while (local_4 != 0);
  }
  return;
}

