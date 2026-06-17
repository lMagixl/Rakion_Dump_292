
void __fastcall FUN_361747e0(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621a7fe;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (((*(byte *)(param_1 + 0x148) & 1) == 0) &&
     (ExceptionList = &local_c, *(void **)(param_1 + 0x158) != (void *)0x0)) {
    ExceptionList = &local_c;
    operator_delete__(*(void **)(param_1 + 0x158));
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (((*(byte *)(param_1 + 0x130) & 1) == 0) && (*(void **)(param_1 + 0x140) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (((*(byte *)(param_1 + 0x118) & 1) == 0) && (*(void **)(param_1 + 0x128) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x128));
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x110) != 0) {
    pvVar1 = *(void **)(param_1 + 0x114);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x4c,*(int *)((int)pvVar1 + -4),FUN_36174c10);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  local_4 = 0xffffffff;
  if (*(int *)(param_1 + 0x108) != 0) {
    pvVar1 = *(void **)(param_1 + 0x10c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x34,*(int *)((int)pvVar1 + -4),FUN_36174bc0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  ExceptionList = local_c;
  return;
}

