
void __fastcall FUN_36091b80(int *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_36212aff;
  local_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &local_c;
  StringFree((char *)param_1[0xe]);
  if (param_1[10] != 0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  local_4._0_1_ = 3;
  if (param_1[8] != 0) {
    pvVar1 = (void *)param_1[9];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),CTString::~CTString);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
  local_4._0_1_ = 2;
  if (param_1[6] != 0) {
    pvVar1 = (void *)param_1[7];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),CTString::~CTString);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    param_1[6] = 0;
    param_1[7] = 0;
  }
  local_4._0_1_ = 1;
  if (param_1[4] != 0) {
    pvVar1 = (void *)param_1[5];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),CTString::~CTString);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_1[2] != 0) {
    pvVar1 = (void *)param_1[3];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),CTString::~CTString);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    param_1[2] = 0;
    param_1[3] = 0;
  }
  local_4 = 0xffffffff;
  if (*param_1 != 0) {
    pvVar1 = (void *)param_1[1];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),CTString::~CTString);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  ExceptionList = local_c;
  return;
}

