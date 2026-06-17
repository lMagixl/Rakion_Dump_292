
void __thiscall FUN_360a1a90(void *this,int *param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x54,*(int *)((int)pvVar1 + -4),FUN_360a1340);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = FUN_360a12f0(param_1);
  if (iVar2 != 0) {
    *(int *)this = *param_1;
    *(int *)((int)this + 4) = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

