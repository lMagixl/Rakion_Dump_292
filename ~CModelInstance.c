
/* public: __thiscall CModelInstance::~CModelInstance(void) */

void __thiscall CModelInstance::~CModelInstance(CModelInstance *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x15ea90  443  ??1CModelInstance@@QAE@XZ */
  puStack_8 = &LAB_3621a26b;
  local_c = ExceptionList;
  DAT_362fdef8 = DAT_362fdef8 + -1;
  local_4 = 10;
  ExceptionList = &local_c;
  StringFree(*(char **)(this + 0x10c));
  local_4._0_1_ = 9;
  StringFree(*(char **)(this + 0xf4));
  local_4._0_1_ = 8;
  if (*(int *)(this + 0xbc) != 0) {
    pvVar1 = *(void **)(this + 0xc0);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_360369e0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0xbc) = 0;
    *(undefined4 *)(this + 0xc0) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  StringFree(*(char **)(this + 0xb4));
  FUN_361611d0((int *)(this + 0x4c));
  if (*(int *)(this + 0x44) != 0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x48) = 0;
  }
  FUN_360e72c0((int *)(this + 0x34));
  local_4._0_1_ = 3;
  if (*(int *)(this + 0x2c) != 0) {
    pvVar1 = *(void **)(this + 0x30);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3615fe90);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  local_4._0_1_ = 2;
  if (*(int *)(this + 0x24) != 0) {
    pvVar1 = *(void **)(this + 0x28);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0xc,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3615fe40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(int *)(this + 0x1c) != 0) {
    pvVar1 = *(void **)(this + 0x20);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x20,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_36036040);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    operator_delete__(*(void **)(this + 0x10));
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
  }
  local_4 = 0xffffffff;
  if (*(int *)(this + 4) != 0) {
    pvVar1 = *(void **)(this + 8);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0xc,*(int *)((int)pvVar1 + -4),FUN_36036730);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)(this + 4) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  ExceptionList = local_c;
  return;
}

