
void __thiscall FUN_36018eb0(void *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int local_4;
  
  iVar2 = 0;
  if (*(int *)this != 0) {
    pvVar3 = *(void **)((int)this + 4);
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar3,0x10,*(int *)((int)pvVar3 + -4),PolygonsPerPatch::~PolygonsPerPatch);
      operator_delete__((void *)((int)pvVar3 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  local_4 = FUN_3600bf10(param_1);
  if ((local_4 != 0) && (FUN_360167b0(this,local_4), 0 < local_4)) {
    do {
      iVar1 = param_1[1];
      pvVar3 = (void *)(*(int *)((int)this + 4) + iVar2);
      FUN_360100e0(pvVar3,(undefined4 *)(iVar1 + iVar2));
      FUN_3600ff90((void *)((int)pvVar3 + 8),(undefined4 *)(iVar1 + iVar2) + 2);
      iVar2 = iVar2 + 0x10;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

