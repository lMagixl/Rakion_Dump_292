
void __fastcall FUN_360d88e0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,8,*(int *)((int)pvVar1 + -4),CTFileName::~CTFileName);
    operator_delete__((void *)((int)pvVar1 + -4));
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

