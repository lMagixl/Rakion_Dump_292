
/* WARNING: Removing unreachable block (ram,0x3617136c) */
/* WARNING: Removing unreachable block (ram,0x36171370) */
/* public: void __thiscall CSkeleton::RemoveSkeletonLod(struct SkeletonLOD *) */

void __thiscall CSkeleton::RemoveSkeletonLod(CSkeleton *this,SkeletonLOD *param_1)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  SkeletonLOD *pSVar4;
  undefined4 *puVar5;
  int local_20;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x171260  3142  ?RemoveSkeletonLod@CSkeleton@@QAEXPAUSkeletonLOD@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621a676;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_20 = FUN_3600c5c0((undefined4 *)(this + 0x14));
  iVar3 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_4 = 0;
  FUN_36014580(&local_14,local_20 + -1);
  pvVar2 = local_10;
  if (0 < local_20) {
    puVar5 = (undefined4 *)((int)local_10 + 0x14);
    do {
      pSVar4 = (SkeletonLOD *)(*(int *)(this + 0x18) + iVar3);
      if (pSVar4 != param_1) {
        puVar5[-5] = *(undefined4 *)pSVar4;
        FUN_360165e0(puVar5 + -4,(undefined4 *)(pSVar4 + 4));
        FUN_36014140(puVar5 + -2,(undefined4 *)(pSVar4 + 0xc));
        pcVar1 = StringDuplicate(*(char **)(pSVar4 + 0x14));
        StringFree((char *)*puVar5);
        *puVar5 = pcVar1;
        puVar5 = puVar5 + 6;
        pvVar2 = local_10;
      }
      iVar3 = iVar3 + 0x18;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_36018f50(this + 0x14,&local_14);
  if ((local_14 != 0) && (pvVar2 != (void *)0x0)) {
    _eh_vector_destructor_iterator_
              (pvVar2,0x18,*(int *)((int)pvVar2 + -4),SkeletonLOD::~SkeletonLOD);
    operator_delete__((void *)((int)pvVar2 + -4));
  }
  ExceptionList = local_c;
  return;
}

