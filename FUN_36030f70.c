
void __thiscall FUN_36030f70(void *this,undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar4 = 0;
  if (*(int *)this != 0) {
    pvVar1 = *(void **)((int)this + 4);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,8,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3600bb40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = FUN_36030af0(param_1);
  if ((iVar2 != 0) && (FUN_36030d50(this,iVar2), 0 < iVar2)) {
    do {
      puVar6 = (undefined4 *)(param_1[1] + iVar4 * 8);
      puVar5 = (undefined4 *)(*(int *)((int)this + 4) + iVar4 * 8);
      pcVar3 = StringDuplicate((char *)*puVar6);
      StringFree((char *)*puVar5);
      *puVar5 = pcVar3;
      iVar4 = iVar4 + 1;
      puVar5[1] = puVar6[1];
    } while (iVar4 < iVar2);
  }
  return;
}

