
void __fastcall FUN_36161420(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = FUN_36036060(param_1);
  if (iVar2 != 0) {
    pvVar1 = (void *)param_1[1];
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x18,*(int *)((int)pvVar1 + -4),FUN_360369e0);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

