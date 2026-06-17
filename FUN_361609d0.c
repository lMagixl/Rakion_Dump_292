
void __thiscall FUN_361609d0(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,0x1c,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_36036030);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = FUN_36035f30(param_1);
  if (iVar2 != 0) {
    FUN_36036260(this,iVar2);
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        FUN_3615c350((void *)(*(int *)((int)this + 4) + iVar3),
                     (CTextureObject *)(param_1[1] + iVar3));
        iVar3 = iVar3 + 0x1c;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

