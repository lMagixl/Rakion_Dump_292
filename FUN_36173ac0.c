
void __fastcall FUN_36173ac0(int param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621a7ca;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x110) != 0) {
    ExceptionList = &local_c;
    operator_delete__(*(void **)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    pvVar1 = *(void **)(param_1 + 0x10c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x94,*(int *)((int)pvVar1 + -4),CTerrainLayer::~CTerrainLayer);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int *)(param_1 + 0x100) != 0) {
    pvVar1 = *(void **)(param_1 + 0x104);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x160,*(int *)((int)pvVar1 + -4),FUN_361747e0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0xf8) != 0) {
    operator_delete__(*(void **)(param_1 + 0xfc));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    operator_delete__(*(void **)(param_1 + 0xf4));
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 0;
  }
  ExceptionList = local_c;
  return;
}

