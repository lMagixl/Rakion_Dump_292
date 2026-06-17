
void __fastcall FUN_36017600(int *param_1)

{
  void *pvVar1;
  
  if (*param_1 != 0) {
    pvVar1 = (void *)param_1[1];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x18,*(int *)((int)pvVar1 + -4),SkeletonLOD::~SkeletonLOD);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

